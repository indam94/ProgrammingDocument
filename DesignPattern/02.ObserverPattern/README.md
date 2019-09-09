# Observer Pattern(옵져버 패턴)

The observer pattern is a software design pattern in which an object, called the subject, maintains a list of its dependents, called observers, and notifies them automatically of any state changes, usually by calling one of their methods.

It is mainly used to implement distributed event handling systems, in "event driven" software. In those systems, the subject is usually called a "stream of events" or "stream source of events", while the observers are called "sink of events". The stream nomenclature simulates or adapts to a physical setup where the observers are physically separated and have no control over the emitted events of the subject/stream-source. This pattern then perfectly suits any process where data arrives through I/O, that is, where data is not available to the CPU at startup, but can arrive "randomly" (HTTP requests, GPIO data, user input from keyboard/mouse/..., distributed databases and blockchains, ...). Most modern languages have built-in "event" constructs which implement the observer pattern components. While not mandatory most 'observers' implementations will use background threads listening for subject events and other support mechanism from the kernel (Linux epoll, ...)

옵서버 패턴(observer pattern)은 객체의 상태 변화를 관찰하는 관찰자들, 즉 옵저버들의 목록을 객체에 등록하여 상태 변화가 있을 때마다 메서드 등을 통해 객체가 직접 목록의 각 옵저버에게 통지하도록 하는 디자인 패턴이다. 주로 분산 이벤트 핸들링 시스템을 구현하는 데 사용된다. 발행/구독 모델로 알려져 있기도 하다.

## Observer Pattern Example(예시) : Subscribe Newpaper

1. A newspaper company starts a business and starts printing a newspaper.
2. If a reader subscribes to a particular newspaper / magazine, they will receive a delivery each time a new newspaper / subscriber comes out. You can continue to receive newspapers / magazines as long as you remain a subscriber.
3. If you no longer want to see the newspaper, apply to unsubscribe. Then no more newspapers will come.
4. As long as the newspaper continues to operate, it will continue to be subscribed and terminated by multiple readers, hotels, airlines and other companies.

1. 신문사가 사업을 시작하고 신문을 찍어내기 시작합니다.
2. 독자가 특정 신문사/잡지사에 구독 신청을 하면 매번 새로운 신문/ 접자거 나올 때마다 배달을 받을 수 있습니다. 계속 구독자로 남아있는 이상 계속해서 신문/잡지를 받을 수 있습니다.
3. 신문을 더 이상 보고 싶지 않으면 구독 해지 신청을 합니다. 그러면 더 이상 신문이 오지 않습니다.
4. 신문사가 계속 영업을 하는 이상 여러 개인 독자, 호텔, 항공사 및 기타 회사 등에서 꾸준히 구독 및 해지를 하게 됩니다.

## Implementation(적용)

### Publisher(출판사) + Subscriber(구독자) = Observer Pattern(옵져버 패턴)

![ObserverPattern001](./img/ObserverPattern001.jpeg)
- A, B, C의 구독자들은 출판사에서 새소식이 들어오면 그 정보를 받습니다. 하지만 비구독자는 알 수 없습니다.

![ObserverPattern.002](./img/ObserverPattern.002.jpeg)
- 하지만 이제 비구독자는 정보를 알 수 있는 구독자가 되길 원한다고 출판사에 요청합니다.

![ObserverPattern.003](./img/ObserverPattern.003.jpeg)
- 출판사는 비구독자를 구독자D로 추가하여 새로운 소식을 받을 수 있게 합니다.

![ObserverPattern.004](./img/ObserverPattern.004.jpeg)
- 이제 또 다른 새로운 소식이 오면 A, B, C, D의 구독자들은 정보를 받습니다.

![ObserverPattern.005](./img/ObserverPattern.005.jpeg)
- 하지만 구독자B는 더 이상 구독하기를 원하지 않는다고 출판사에 요청합니다. 

![ObserverPattern.006](./img/ObserverPattern.006.jpeg)
- 출판사는 구독자B는 구독자 목록에서 제거합니다.

![ObserverPattern.007](./img/ObserverPattern.007.jpeg)
- 이제 구독자B는 출판사에 새로운 정보가 오더라도 더 이상 그 정보를 받을 수 없습니다. 

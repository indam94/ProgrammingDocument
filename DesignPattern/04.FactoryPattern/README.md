# Factory Pattern(팩토리 패턴)

In class-based programming, the factory method pattern is a creational pattern that uses factory methods to deal with the problem of creating objects without having to specify the exact class of the object that will be created. This is done by creating objects by calling a factory method—either specified in an interface and implemented by child classes, or implemented in a base class and optionally overridden by derived classes—rather than by calling a constructor.

팩토리 메서드 패턴(팩토리 패턴)은 객체지향 디자인 패턴이다. Factory method는 부모 클래스에 알려지지 않은 구체 클래스를 생성하는 패턴이며, 자식 클래스가 어던 객체를 생성할지를 결정하도록 하는 패턴이기도 하다. 부모 클래스 코드애 구체 클래스 이름을 감추기 위한 방법으로도 사용한다.

## Factory Pattern Example(예시) : Pizza


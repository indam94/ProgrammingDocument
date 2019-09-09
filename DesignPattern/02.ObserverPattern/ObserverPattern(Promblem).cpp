class WeatherData{
private:

public:

    float getTemperature();
    float getHumidity();
    float getPressure();

    //if you get new WeatherData, will call measuerementChanged()!
    void measuerementChanged(){
        float temp = getTemperature();
        float humidity = getHumidity();
        float pressure = getPressure();

        //first display
        currentConditionsDisplay.update(temp, humidity, pressure);
        //second display
        statisticsDisplay.update(temp, humidity, pressure);
        //third display
        forecastDisplay.update(temp, humidity, pressure);
    }
    

}

//Problem
// 1. Other Object Add/Remove is Impossible
// 2.
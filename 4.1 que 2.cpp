#include <iostream>
using namespace std;

class P {
protected:
    float temperature;
public:
    void setTemperature(float temp) {
        temperature = temp;
    }
};

class Q : public P {
protected:
    float fahrenheit;
public:
    float toFahrenheit() {
        fahrenheit = (temperature * 9.0 / 5.0) + 32;
        return fahrenheit;
    }
};

class R : public Q {
public:
    float toKelvin() {
        float kelvin = (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
        return kelvin;
    }
};

int main() {
    R obj;
    float celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    obj.setTemperature(celsius);

    float fahrenheit = obj.toFahrenheit();
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    float kelvin = obj.toKelvin();
    cout << "Temperature in Kelvin: " << kelvin << endl;

    return 0;
}/*
output:Enter temperature in Celsius: 54.2
Temperature in Fahrenheit: 129.56
Temperature in Kelvin: 327.35
*/
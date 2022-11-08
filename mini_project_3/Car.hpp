#pragma once

#include <string>
#include <map>

class Car
{
    float tankCapacity;
    float gasLevel;
    unsigned int distance;
    std::string model;

public:
    Car();
    Car(const std::string _model, const float _gasLevel);

    void setTankCapacity(const float _capacity);
    void setGasLevel(const float _level);
    void setDistance(const unsigned int _dis);
    void setModel(const std::string& _model);

    float getTankCapcity() const;
    float getGasLevel() const;
    unsigned int getDistance() const;
    std::string getModel() const;

    operator bool() const;
    bool operator!() const;
    bool operator<(const Car& car) const; //inherited class cannot overload const methods

    Car operator+(const Car& car) const;
    void operator|=(const Car& car);
    std::pair<Car, Car> operator,(const Car& car1) const;

    friend std::ostream & operator<<(std::ostream &os, const Car& samochod); //friend - use members of class Car -> operator<< is a membeer of std::ostream but defined outside class
};

struct CarComparer
{
    bool operator()(const Car& car1, const Car& car2) const{
        return car1.getGasLevel() < car2.getGasLevel();
    }
};
#include "Car.hpp"

Car::Car() :
    tankCapacity(0),
    gasLevel(0),
    distance(0),
    model("")
{}

Car::Car(const std::string _model, const float _gasLevel) :
    model(_model),
    gasLevel(_gasLevel)
{}

void Car::setTankCapacity(const float _capacity)
{
    tankCapacity = _capacity;
}

void Car::setGasLevel(const float _level)
{
    gasLevel = _level;
}

void Car::setDistance(const unsigned int _dis)
{
    distance = _dis;
}

void Car::setModel(const std::string& _model)
{
    model = _model;
}

float Car::getTankCapcity() const
{
    return tankCapacity;
}

float Car::getGasLevel() const
{
    return gasLevel;
}

unsigned int Car::getDistance() const
{
    return distance;
}

std::string Car::getModel() const
{
    return model;
}

Car::operator bool() const
{
    return (!model.empty() && (gasLevel > 0));
}

bool Car::operator!() const
{
    return !(!model.empty() && (gasLevel > 0));
}

bool Car::operator<(const Car & car) const
{
    return (model < car.getModel());
}

Car Car::operator+(const Car & car) const
{
    Car c;
    c.setGasLevel(gasLevel + car.getGasLevel());
    c.setModel(model != car.getModel() ? model + car.getModel() : model);
    c.setTankCapacity(tankCapacity + car.getTankCapcity());
    c.setDistance(distance + car.getDistance());
    return c;
}

void Car::operator|=(const Car & car)
{
    auto a = *this + car;
    distance = a.getDistance();
    model = a.getModel();
    tankCapacity = a.getTankCapcity();
    gasLevel = a.getGasLevel();
}

std::pair<Car, Car> Car::operator,(const Car & car1) const
{
    return std::make_pair(*this, car1);
}

std::ostream & operator<<(std::ostream & os, const Car & samochod)
{
    os << samochod.model << " " << samochod.gasLevel << "\n";
    return os;
}

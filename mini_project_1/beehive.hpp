#pragma once
#include <utility>
#include <string>

class Beehive
{
private:
    typedef std::pair<float, float> Point;

    unsigned int amountOfBees = 0;
    Point location{ 0,0 };
    double averageHoneyPerYear = 0;
    std::string beehiveName = "";
    std::string color = "";

public:
    void setAmountOfBees(const unsigned int bees) {
        amountOfBees = bees;
    };

    void setLocation(const Point& point) {
        location = point;
    };

    void addBees(const unsigned int amount) {
        if (amount <= 100)
            amountOfBees += amount;
    };

    void substractBees(const unsigned int amount) {
        if (amount <= 100)
            amountOfBees -= amount;
    };

    unsigned int getAmountOfBees() {
        return amountOfBees;
    };

    Point getLocation() {
        return location;
    };

    void setAverageHoneyPerYear(const double honey) {
        averageHoneyPerYear = honey;
    }

    void setName(const std::string& name) {
        beehiveName = name;
    }

    std::string getName() {
        return beehiveName;
    }

    void setColor(const std::string& _color) {
        color = _color;
    };

    std::string getColor() {
        return color;
    };
};


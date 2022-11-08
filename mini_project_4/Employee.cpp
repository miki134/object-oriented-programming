#include "Employee.hpp"

#include <iostream>

Employee::~Employee()
{
}

void Employee::setPosition(const std::string & _pos)
{
    position = _pos;
}

void Employee::setSalary(const float _salary)
{
    salary = _salary;
}

std::string Employee::getPostion()
{
    return position;
}

float Employee::getSalary()
{
    return salary;
}

void Employee::introduce()
{
    std::cout << name << " " << surname << " " << position << " " << salary << std::endl;
}

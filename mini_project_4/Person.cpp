#include "Person.h"

#include <iostream>

Person::~Person()
{
}

void Person::setName(const std::string & _name)
{
    name = _name;
}

void Person::setSurname(const std::string & _surname)
{
    surname = _surname;
}

std::string Person::getName() const
{
    return name;
}

std::string Person::getSurname() const
{
    return surname;
}

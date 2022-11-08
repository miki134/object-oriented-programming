#pragma once
#include "Person.h"
class Employee : public Person
{
    std::string position;
    float salary;
public:
    Employee() = default;
    ~Employee();

    void setPosition(const std::string& _pos);
    void setSalary(const float _salary);

    std::string getPostion();
    float getSalary();

    void introduce() override;
};


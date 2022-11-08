#include "Student.hpp"

#include <iostream>

Student::~Student()
{
}

void Student::setUniversityName(const std::string & _name)
{
    universityName = _name;
}

void Student::setAverageGrade(const float _average)
{
    averageGrade = _average;
}

std::string Student::getUniversityName() const
{
    return universityName;
}

float Student::getAverageGrade() const
{
    return averageGrade;
}

void Student::introduce()
{
    std::cout << name << " " << surname << " " << universityName << " " << averageGrade << std::endl;
}

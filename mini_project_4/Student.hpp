#pragma once
#include "Person.h"
class Student : public Person
{
    std::string universityName;
    float averageGrade;

public:
    Student() = default;
    ~Student();

    void setUniversityName(const std::string& _name);
    void setAverageGrade(const float _average);

    std::string getUniversityName() const;
    float getAverageGrade() const;

    void introduce() override;
};


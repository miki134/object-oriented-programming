#pragma once
#include <string>

class Person
{
protected:
    std::string name;
    std::string surname;

public:
    Person() = default;
    virtual ~Person(); // forces to create destructor in inheritor classes, in case of destruction on the base class the inhering destructor will be also called

    void setName(const std::string& _name);
    void setSurname(const std::string& _surname);

    std::string getName() const;
    std::string getSurname() const;

    virtual void introduce() = 0; // inheriting class must override this method when = 0
};


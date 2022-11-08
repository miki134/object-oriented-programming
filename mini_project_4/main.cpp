#include "Person.h"
#include "Employee.hpp"
#include "Student.hpp"

#include <iostream>
#include <vector>

void foo(Person & p) {
    p.introduce();
}

void bar(Person * p) {
    p->introduce();
}

int main()
{
    /*Person p1;
    p1.setName("ABC");
    p1.setSurname("ABC");
    foo(p1);
    bar(&p1);

    Employee p2;
    p2.setName("ABC");
    p2.setSurname("ABC");
    p2.setSalary(123);
    p2.setPosition("ABC");
    foo(p2);
    bar(&p2);*/

    std::vector<Person*> tab;
    while (true)
    {
        std::string cmd;
        std::cout << "Podaj komende:";
        std::cin >> cmd;

        if (cmd == "p" || cmd == "pracownik")
        {
            Employee *e = new Employee();
            e->setName("pracownik");
            e->setSurname("pracownik");
            e->setSalary(123);
            e->setPosition("pracownik");
            tab.push_back(e);
        }
        else if (cmd == "s" || cmd == "student")
        {
            Student *s = new Student();
            s->setName("student");
            s->setSurname("student");
            s->setAverageGrade(123);
            s->setUniversityName("student univeristy");
            tab.push_back(s);
        }
        else if (cmd == "w" || cmd == "wyswietl")
        {
            for (auto it : tab)
                it->introduce();
        }
        else if (cmd == "e" || cmd == "wyjscie")
        {
            break;
        }

    }

}
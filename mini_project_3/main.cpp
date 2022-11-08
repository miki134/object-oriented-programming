#include "Car.hpp"
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    Car s1("audi", 123);
    Car s2("bmw", 0);
    Car s3("", 200);
    
    if (s1)
        std::cout << s1;
    if (!s1)
        std::cout << s1;
    if (s2)
        std::cout << s2;
    if (!s2)
        std::cout << s2;
    if (s3)
        std::cout << s3;
    if (!s3)
        std::cout << s3;

    std::vector<Car> v;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    std::sort(v.begin(), v.end());
    for (auto it : v)
        std::cout << it;

    std::vector<Car> s(v.begin(), v.end());
    for (auto it : v)
        std::cout << it;
}
#include "beehive.hpp"
#include <iostream>

int main()
{
    Beehive beehive;

    while (true)
    {

        std::cout << "0 - ustaw ilosc pszczol"
            << "\n1 - ustaw polozenie"
            << "\n2 - dodaj pszczoly"
            << "\n3 - odejmij pszczoly"
            << "\n4 - wyswietl ilosc pszczol"
            << "\n5 - wyswietl polozenie"
            << "\n6 - ustaw aktualna roczna ilosc wyprodukowanego przez ul miodu"
            << "\n7 - ustaw nazwe ula"
            << "\n8 - wyswtetl nazwe ula"
            << "\n9 - ustaw kolor ula"
            << "\n10 - wyswtetl kolor ula"
            << "\n11 - exit\n";

        int a;

        std::cin >> a;
        system("cls");

        switch (a)
        {
        case 0:
        {
            std::cout << "podaj ilosc pszczol" << std::endl;
            unsigned int bees;
            std::cin >> bees;
            beehive.setAmountOfBees(bees);
            break;
        }
        case 1:
        {
            std::cout << "ustaw polozenie\n x:\n";
            unsigned int x, y;
            std::cin >> x;
            std::cout << "y:\n";
            std::cin >> y;
            beehive.setLocation(std::make_pair(x, y));
            break;
        }
        case 2:
        {

            std::cout << "dodaj pszczoly:\n";
            unsigned int bees;
            std::cin >> bees;
            beehive.addBees(bees);
            break;
        }
        case 3:
        {
            std::cout << "odejmij pszczoly:\n";
            unsigned int bees;
            std::cin >> bees;
            beehive.substractBees(bees);
            break;
        }
        case 4:
        {
            std::cout << beehive.getAmountOfBees() << std::endl;
            break;
        }
        case 5:
        {
            auto loc = beehive.getLocation();
            std::cout << loc.first << " " << loc.second << std::endl;
            break;
        }
        case 6:
        {
            std::cout << "ustaw aktualna roczna ilo±c wyprodukowanego przez ul miodu\n";
            double a;
            std::cin >> a;
            beehive.setAverageHoneyPerYear(a);
        break;
        }
        case 7:
        {
            std::cout << "ustaw nazwe ula\n";
            std::string asd;
            std::cin >> asd;
            beehive.setName(asd);
            break;
        }
        case 8:
            std::cout << beehive.getName();
            break;
        case 9:
        {
            std::cout << "ustaw kolor ula\n";
            std::string asd;
            std::cin >> asd;
            beehive.setColor(asd);
            break;
        }
        case 10:
            std::cout << beehive.getColor();
            break;
        case 11:
            exit(0);
        default:
            std::cout << "blad\n";
            break;
        }
    }
}
#include "Wezel.hpp"
#include <memory>
#include <iostream>

int main()
{
    std::cout << "unique_ptr\n";

    for (int i = 0; i < 10; i++)
    {
        std::unique_ptr<Wezel>(new Wezel());
    }

    std::cout << "shared_ptr\n";

    for (int i = 0; i < 10; i++)
    {
        std::shared_ptr<Wezel>(new Wezel());
    }

    std::cout << " next shared_ptr\n";

    for (int i = 0; i < 10; i++)
    {
        std::shared_ptr<Wezel> w1 = std::make_shared<Wezel>();
        std::shared_ptr<Wezel> w2 = std::make_shared<Wezel>();

        w1->next = w2;
        w2->next = w1;

        std::cout << w1.use_count() << std::endl;
        std::cout << w2.use_count() << std::endl;
    }

    std::cout << "week_ptr \n";

    for (int i = 0; i < 10; i++)
    {
        std::shared_ptr<Wezel> w1 = std::make_shared<Wezel>();
        std::shared_ptr<Wezel> w2 = std::make_shared<Wezel>();

        w1->next2 = w2;
        w2->next2 = w1;

        std::cout << w1.use_count() << std::endl;
        std::cout << w2.use_count() << std::endl;
    }
}


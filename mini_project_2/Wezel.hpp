#pragma once
#include <memory>

class Wezel
{
public:
    Wezel();
    ~Wezel();

    std::shared_ptr<Wezel> next;
    std::weak_ptr<Wezel> next2;
};


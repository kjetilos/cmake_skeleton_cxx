#include "skeleton/foo.hpp"
#include <iostream>

void Foo::do_food() const
{
    std::cout << "do_food\n";
}

int Foo::add(int a, int b) const
{
    return a + b;
}

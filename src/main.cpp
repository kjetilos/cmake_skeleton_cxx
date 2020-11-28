#include <iostream>
#include "skeleton/foo.hpp"

int main(void)
{
    Foo f(42);
    std::cout << "Hello\n";
    std::cout << "result is " << f.add(4, 5) << "\n";
}

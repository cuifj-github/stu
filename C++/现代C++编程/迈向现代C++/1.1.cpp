#include "foo.h"
#include <iostream>
#include <functional>

int main()
{
    [out = std::ref(std::cout << "Result from c code" << add(1, 2))]()
    {
        out.get() << ".\n";
    }();
    return 0;
}
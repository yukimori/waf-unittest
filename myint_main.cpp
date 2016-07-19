
#include <iostream>
#include "myint.cpp"

int main() {
    MyInt mi;
    mi.set(10);
    std::cout << mi.get() << std::endl;
    return 0;
}

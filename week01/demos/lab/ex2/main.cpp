#include <iostream>
#include "add.h"

int main() {
    int a{2147483647};
    int b{1};
    int res{0};

    res = add(a, b);
    std::cout << "The result is " << res << std::endl;
    return 0;
}

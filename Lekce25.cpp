//Lekce 25 - Lambda výrazy
#include <iostream>

int main() {
    // Jednoduchý lambda výraz, který vypíše "Hello, World!"
    auto hello = []() {
        std::cout << "Hello, World!" << std::endl;
    };

    // Zavolání lambda výrazu
    hello();

    // Lambda výraz s parametry, který sečte dvě čísla
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    // Zavolání lambda výrazu s parametry
    int result = add(5, 3);
    std::cout << "5 + 3 = " << result << std::endl;

    return 0;
}
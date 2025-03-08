//Lekce 26 - Použití knihovny pro vektory
#include <iostream>
#include <vector>

int main() {
    // Vytvoření vektoru celých čísel
    std::vector<int> numbers;

    // Přidání prvků do vektoru
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Výpis prvků vektoru
    std::cout << "Prvky vektoru: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Přístup k prvku na určité pozici
    std::cout << "Prvek na pozici 1: " << numbers[1] << std::endl;

    // Změna hodnoty prvku na určité pozici
    numbers[1] = 25;
    std::cout << "Nová hodnota prvku na pozici 1: " << numbers[1] << std::endl;

    // Odstranění posledního prvku
    numbers.pop_back();
    std::cout << "Prvky vektoru po odstranění posledního prvku: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
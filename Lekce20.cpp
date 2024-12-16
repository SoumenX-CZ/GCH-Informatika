//Lekce 20 - Maximální hodnota v poli a aritmetický průměr pole
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int pole[300];
    srand(time(0));
    int p;

    for (int i = 0;i<300; i++) {
        int a = rand() % 10000 + 1;
        pole[i] = a;
    }

    for (int i = 0;i<300; i++) {
        cout << pole[i] << ", ";
    }    
    cout << endl;
    p = pole[0];
    for (int i = 0;i<300; i++) {
        if (pole[i]> p){
            p= pole[i];
        }
            
    }
    double citatel, jmenovatel;
    citatel = 0;
    jmenovatel = 300;
    for (int i = 0;i<300; i++) {
        citatel = citatel + pole[i];
    }    

    cout << "Aritmeticky prumer je: " << citatel/jmenovatel << endl;

    cout << "Nejvetsi hodnota je: " << p << endl;
}
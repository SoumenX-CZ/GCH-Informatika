//Lekce 18 - Výpočet na kolikátý pokus padla sestka ze tří kostek
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int a,b,c;
    int pocet;
    int i;
    for (i; i<100000; i++) {
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        c = rand() % 6 + 1;
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        pocet ++;
        if (a== 6 && b==6 && c==6) {
            i = 100002;
        }
    }
    cout << "Sestka padla na " <<pocet << ". pokus";
}
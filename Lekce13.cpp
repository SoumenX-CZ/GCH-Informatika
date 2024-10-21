//Lekce 13 - Leibnizova řada
#include <iostream>

using namespace std;

int main() {
    double pi = 4,b=1,c=1;
    while(4/b>0.0000000001){
        c=-c;
        b = b+2;
        pi = pi + c*4/b;
        cout << "Pi: " << pi << endl;
        
    }
    cout << "Pi: " << pi << endl;
}
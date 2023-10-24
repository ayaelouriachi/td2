#include <iostream>
using namespace std;
void incrementer(int*x) {
    (*x)++;
}


void permuter(int* x, int* y) {
    int c = *x;
    *x = *y;
    *y = c;
}


void permuterParReference(int& x, int& y) {
    int c = x;
    x = y;
    y = c;
}

int main() {
    int a = 12;
    int b = 8;

   cout << "Valeurs initiales : a = " << a << ", b = " << b <<endl;

    incrementer(&a);
   cout << "Apres l'incrementation : a = " << a << endl;

    permuter(&a, &b);
    cout << "Apres la permutation par adresse : a = " << a << ", b = " << b << endl;

    permuterParReference(a, b);
    cout << "Apres la permutation par reference : a = " << a << ", b = " << b << endl;

    return 0;
}

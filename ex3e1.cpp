#include <iostream>
using namespace std;

int main() {
    int T[10];
    int *P = T;
    int min, max; 

    cout << "Entrez 10 nombres : ";

    for (int i = 0; i < 10; i++) {
        cin >> *P;

        if (i == 0) {
           
            min = *P;
            max = *P;
        } else {
            if (*P > max) {
                max = *P;
            }
            if (*P < min) {
                min = *P;
            }
        }

        P++;  
    }

    cout << "Le maximum est " << max << " et le minimum est " << min << endl;

    return 0;
}


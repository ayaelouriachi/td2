#include <iostream>
using namespace std;
int main() {
    int tableau[10];
    int c;
    int NE;

    
    for (int i = 0; i < 10; i++) {
       cout << "Entrez un entier : ";
  cin >> tableau[i];
    }


    do {
        NE = 0;
        for (int i = 0; i < 9; i++) {
            if (tableau[i] > tableau[i + 1]) {

                c = tableau[i];
                tableau[i] = tableau[i + 1];
                tableau[i + 1] = c;
                NE++;
            }
        }
    } while (NE> 0);


   cout << "Tableau trie par ordre croissant : ";
    for (int i = 0; i < 10; i++) {
        cout << tableau[i] << " ";
    }
    cout <<endl;

    return 0;
}

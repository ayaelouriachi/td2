#include <iostream>
using namespace std;
int main() {
    int n;


    cout << "Entrez la taille du tableau : ";
    cin >> n;


    int*tableau= new int[n];

    cout << "Entrez " << n << " nombres entiers : ";
    for (int i = 0; i < n; i++) {
        cin >> tableau[i];
    }

    int*tableauCarres = new int[n];
    for (int i = 0; i < n; i++) {
        tableauCarres[i] = tableau[i] * tableau[i];
    }
cout << "Les carres des nombres sont : ";
    for (int i = 0; i < n; i++) {
        cout << tableauCarres[i] << " ";
    }
    cout<<endl;


    delete[]tableau;


    delete[]tableauCarres;

    return 0;
}



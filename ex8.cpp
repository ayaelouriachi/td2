#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int x, int y) : real(x), imag(y) {}

    struct Resultat {
        int somme_reel;
        int somme_img;
        int soustraction_reel;
        int soustraction_img;
        int produit_reel;
        int produit_img;
        int division_reel;
        int division_img;
    };

    Resultat somme(Complex A, Complex B) {
        Resultat resultat;
        resultat.somme_reel = A.real + B.real;
        resultat.somme_img = A.imag + B.imag;
        return resultat;
    }

    Resultat soustraction(Complex A, Complex B) {
        Resultat resultat;
        resultat.soustraction_reel = A.real - B.real;
        resultat.soustraction_img = A.imag - B.imag;
        return resultat;
    }

    Resultat multiplication(Complex A, Complex B) {
        Resultat resultat;
        resultat.produit_reel = A.real * B.real - A.imag * B.imag;
        resultat.produit_img = A.real * B.imag + A.imag * B.real;
        return resultat;
    }

    Resultat division(Complex A, Complex B) {
        Resultat resultat;
        int diviseur = B.real * B.real + B.imag * B.imag;

        resultat.division_reel = (A.real * B.real + A.imag * B.imag) / diviseur;
        resultat.division_img = (A.imag * B.real - A.real * B.imag) / diviseur;

        return resultat;
    }

    bool isEqual(Complex A, Complex B) {
        return A.real == B.real && A.imag == B.imag;
    }

    void displayComplex() {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    int a, b, c, d, choix;


  do{
    cout<<"1-egalite"<<endl;
    cout<<"2-addition"<<endl;
    cout<<"3-soustraction"<<endl;
    cout<<"4-multiplication"<<endl;
    cout<<"5-division"<<endl;
     cout << "Entrer votre choix : ";
    cin >> choix;
  }  while(choix<1||choix>5);

    cout << "ecrire la partie reelle et la partie imaginaire pour le premier nombre complexe: ";
    cin >> a >> b;
    Complex A(a, b);

    cout << "ecrire la partie reelle et la partie imaginaire pour le deuxieme nombre complexe: ";
    cin >> c >> d;
    Complex B(c, d);

    Complex::Resultat rs;

    switch (choix) {
        case 1:
            if (A.isEqual(A, B)) {
                cout << "Les nombres complexes sont egaux." << endl;
            }
            break;

        case 2:
            rs = A.somme(A, B);
            cout << "Resultat de l'addition : " << rs.somme_reel << " + " << rs.somme_img << "i" << endl;
            break;

        case 3:
            rs = A.soustraction(A, B);
            cout << "Resultat de la soustraction : " << rs.soustraction_reel << " + " << rs.soustraction_img << "i" << endl;
            break;

        case 4:
            rs = A.multiplication(A, B);
            cout << "Resultat de la multiplication : " << rs.produit_reel << " + " << rs.produit_img << "i" << endl;
            break;

        case 5:
            rs = A.division(A, B);
            cout << "Resultat de la division : " << rs.division_reel << " + " << rs.division_img << "i" << endl;
            break;

        default:
            cout << "Choix invalide." << endl;
            break;
    }

    return 0;
}


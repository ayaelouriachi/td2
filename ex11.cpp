#include <iostream>
#include <cmath>
using namespace std;
class Vecteur3d {
private:
    float x, y, z;

public:

    Vecteur3d(float x = 0.0, float y = 0.0, float z = 0.0) : x(x), y(y), z(z) {}

    void afficher() {
        cout << "(" << x << ", " << y << ", " << z << ")" <<endl;
    }


    Vecteur3d somme(const Vecteur3d& other) const {
        return Vecteur3d(x + other.x, y + other.y, z + other.z);
   }

    float produitScalaire(const Vecteur3d& other) const {
        return x * other.x + y * other.y + z * other.z;
    }


    bool coincide(const Vecteur3d& other) const {
        return (x == other.x && y == other.y && z == other.z);
    }


    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }


    static Vecteur3d normax(const Vecteur3d& v1, const Vecteur3d& v2) {
        return (v1.norme() > v2.norme()) ? v1 : v2;
    }
};

int main() {
    Vecteur3d v1(1.0, 2.0, 3.0);
    Vecteur3d v2(3.0, 2.0, 1.0);

    cout << "Vecteur 1 : ";
    v1.afficher();
    cout << "Vecteur 2 : ";
    v2.afficher();

    Vecteur3d somme = v1.somme(v2);

cout << "Somme de vecteur 1 et vecteur 2 : ";
    somme.afficher();

    float produit = v1.produitScalaire(v2);
cout << "Produit scalaire de vecteur 1 et vecteur 2 : " << produit <<endl;

    bool coincident = v1.coincide(v2);
    cout << "Vecteur 1 et vecteur 2 ont-ils les m�mes composantes ? " << (coincident ? "Oui" : "Non") << endl;

    float normeV1 = v1.norme();
    float normeV2 = v2.norme();
    cout << "Norme de vecteur 1 : " << normeV1 << endl;
    cout << "Norme de vecteur 2 : " << normeV2 << endl;

    Vecteur3d vecteurMax = Vecteur3d::normax(v1, v2);
    cout << "Le vecteur avec la plus grande norme : ";
    vecteurMax.afficher();

    return 0;
}

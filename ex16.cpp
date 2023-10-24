#include <iostream>

using namespace std;

struct Element {
    public:
        int nombre;
        Element* next;

        Element(int nombre) : nombre(nombre), next(nullptr) {}
};

class Liste {
private:
    Element* head;

public:
    Liste() : head(nullptr) {}

    void ajouter(int num) {
        Element* newnum = new Element(num);
        newnum->nombre = num;
        newnum->next = head;
        head = newnum;
    }

    void supprimer() {
        if (head != nullptr) {
            Element* supprimer = head;
            head = supprimer->next;
            delete supprimer;
        }
    }

    void afficher() {
        Element* actuel = head;
        while (actuel != nullptr) {
            cout << actuel->nombre << " ";
            actuel = actuel->next;
        }
    }
};

int main() {
    Liste maListe;

    maListe.ajouter(10);
    maListe.ajouter(9);
    maListe.ajouter(8);

    cout << "Liste : ";
    maListe.afficher();
    cout << endl;

    maListe.supprimer();

    cout << "Liste apres suppression : ";
    maListe.afficher();
    cout << endl;

    return 0;
}

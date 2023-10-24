#include <iostream>
using namespace std;

class Animal {
protected:
    string nom;
    int age;

public:
    void set_value(string n) {
        nom = n;
    }

    void set_value(int a) {
        age = a;
    }
};

class Zebra : public Animal {
private:
    string origine;

public:
    Zebra(string a) : origine(a) {}

    void afficherInfos(){
        cout << "Nom de cet animal : " << nom << endl;
        cout << "Age de cet animal : " << age << " ans" << endl;
        cout << "Origine de cet animal : " << origine << endl;
    }
};

class Dolphin : public Animal {
private:
    string origine;

public:
    Dolphin(string a) : origine(a) {}

    void afficherInfos() {
        cout << "Nom de cet animal : " << nom << endl;
        cout << "Age de cet animal : " << age << " ans" << endl;
        cout << "Origine de cet animal : " << origine << endl;
    }
};

int main() {
    string n, a, s, b;
    int x, k;

    cout << "Ecrire le nom de la zebre : ";
    cin >> n;
    cout << "L'age de la zebre : ";
    cin >> x;
    cout << "Ecrire l'origine de la zebre : ";
    cin >> a;

    Zebra z(a);
    z.set_value(n);
    z.set_value(x);
    z.afficherInfos();

    cout << "Ecrire le nom du dauphin : ";
    cin >> s;
    cout << "L'age du dauphin : ";
    cin >> k;
    cout << "Ecrire l'origine du dauphin : ";
    cin >> b;

    Dolphin D(b);
    D.set_value(s);
    D.set_value(k);
    D.afficherInfos();

    return 0;
}

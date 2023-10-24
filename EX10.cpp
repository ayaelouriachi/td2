#include <iostream>
using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    int date_de_naissance;

public:
    Personne(string a, string b, int c) : nom(a), prenom(b), date_de_naissance(c) {}

    void afficher() {
        cout << "Le nom est : " << nom << endl;
        cout << "Le prenom : " << prenom << endl;
        cout << "La date de naissance : " << date_de_naissance << endl;
    }
};

class Employe : public Personne {
private:
    int salaire;

public:
    Employe(string n1, string p1, int D1, int s) : Personne(n1, p1, D1), salaire(s) {}

    void afficher() {
        Personne::afficher();
        cout << "Le salaire est : " << salaire << endl;
    }
};

class Chef : public Employe {
private:
    string Service;

public:
    Chef(string n2, string p2, int D2, int s1, string S1) : Employe(n2, p2, D2, s1), Service(S1) {}

    void afficher() {
        Employe::afficher();
        cout << "Le service est : " << Service << endl;
    }
};

class Directeur : public Chef {
private:
    string Societe;

public:
    Directeur(string n3, string p3, int D3, int s2, string S2, string F)
        : Chef(n3, p3, D3, s2, S2), Societe(F) {}

    void afficher() {
        Chef::afficher();
        cout << "La societe est : " << Societe << endl;
    }
};

int main() {
    string nom, nom1, nom2, nom3;
    string prenom, prenom1, prenom2, prenom3;
    int date_de_naissance, date_de_naissance1, date_de_naissance2, date_de_naissance3;
    int salaire, salaire1, salaire2;
    string service, service1,Societe;

    cout << "Le nom de la personne : ";
    cin >> nom;
    cout << "Prenom de la personne : ";
    cin >> prenom;
    cout << "La date de naissance de la personne : ";
    cin >> date_de_naissance;

    cout << "Le nom de l'employe : ";
    cin >> nom1;
    cout << "Pr�nom de l'employe : ";
    cin >> prenom1;
    cout << "La date de naissance de l'employe : ";
    cin >> date_de_naissance1;
    cout << "Le salaire de l'employe : ";
    cin >> salaire;

    cout << "Le nom du chef : ";
    cin >> nom2;
    cout << "Prenom du chef : ";
    cin >> prenom2;
    cout << "La date de naissance du chef : ";
    cin >> date_de_naissance2;
    cout << "Le salaire du chef : ";
    cin >> salaire1;
    cout << "Le service du chef : ";
    cin >> service;

    cout << "Le nom du directeur : ";
    cin >> nom3;
    cout << "Prenom du directeur : ";
    cin >> prenom3;
    cout << "La date de naissance du directeur : ";
    cin >> date_de_naissance3;
    cout << "Le salaire du directeur : ";
    cin >> salaire2;
    cout << "La societe du directeur : ";
    cin >> service1;

    Personne p(nom, prenom, date_de_naissance);
    Employe e(nom1, prenom1, date_de_naissance1, salaire);
    Chef c(nom2, prenom2, date_de_naissance2, salaire1, service);
    Directeur d(nom3, prenom3, date_de_naissance3, salaire2, service1,Societe);

    cout << "\nPersonne:" << endl;
    p.afficher();

    cout << "\nEmploye:" << endl;
    e.afficher();

    cout << "\nChef:" << endl;
    c.afficher();

    cout << "\nDirecteur:" << endl;
    d.afficher();

    return 0;
}


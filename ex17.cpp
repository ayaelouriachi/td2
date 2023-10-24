#include <string>
#include <cstdlib>
using namespace std;

string dateHeure(string dateH) {
    cout << "Entrez la date et l'heure (JJMMAAAAHHNN) : ";
    cin >> dateH;

    if (dateH.length() != 12) {
        cout << "Format de date et d'heure invalide. Assurez-vous d'utiliser JJMMAAAAHHNN." << endl;
        exit(0);
    }
    return dateH;
}

int main() {
    string dateH;

    cout << "Entrez la date et l'heure (JJMMAAAAHHNN) : ";
    cin >> dateH;

    dateH = dateHeure(dateH);

    string jour = dateH.substr(0, 2);
    string mois = dateH.substr(2, 2);
    string annee = dateH.substr(4, 4);
    string heure = dateH.substr(8, 2);
    string minute = dateH.substr(10, 2);

    int n = stoi(mois);

    cout << jour;
    if (jour == "01" || jour == "21" || jour == "31") {
        cout << "er";
    } else {
        cout << "eme";
    }

    switch (n) {
        case 1:
            cout << " Janvier " << annee << " à " << heure << "h" << minute;
            break;
        case 2:
            cout << " Février " << annee << " à " << heure << "h" << minute;
            break;
        case 3:
            cout << " Mars " << annee << " à " << heure << "h" << minute;
            break;
        case 4:
            cout << " Avril " << annee << " à " << heure << "h" << minute;
            break;
        case 5:
            cout << " Mai " << annee << " à " << heure << "h" << minute;
            break;
        case 6:
            cout << " Juin " << annee << " à " << heure << "h" << minute;
            break;
        case 7:
            cout << " Juillet " << annee << " à " << heure << "h" << minute;
            break;
        case 8:
            cout << " Aout " << annee << " à " << heure << "h" << minute;
            break;
        case 9:
            cout << " Septembre " << annee << " à " << heure << "h" << minute;
            break;
        case 10:
            cout << " Octobre " << annee << " à " << heure << "h" << minute;
            break;
        case 11:
            cout << " Novembre " << annee << " à " << heure << "h" << minute;
            break;
        case 12:
            cout << " Decembre " << annee << " à " << heure << "h" << minute;
            break;
        default:
            break;
    }

    return 0;
}"

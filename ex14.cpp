#include <iostream>
#include <vector>
using namespace std;

class Pile {
private:
    vector<int> nombres;

public:
    Pile() {
    }

    void push(int n) {
        nombres.push_back(n);
    }

    void pop() {
        if (!nombres.empty()) {

            nombres.pop_back();
        }
    }

    void afficher() {
        if (!nombres.empty()) {
            cout << "element en haut de la pile : " << nombres.back() << endl;
        } else {
            cout << "La pile est vide." << endl;
        }
    }
};

int main() {
    Pile pile1;
    Pile pile2;

    pile1.push(6);
    pile1.push(11);
    pile1.push(7);

    pile2.push(14);
    pile2.push(100);
    pile2.push(99);

    cout << "Pile 1 avant depilement : " << endl;
    pile1.afficher();
     cout << "Apres depilement de pile1 : " << endl;
    pile1.pop();
    pile1.afficher();

    cout << "Pile 2 avant depilement : " << endl;
    pile2.afficher();
   cout << "Apres depilement de pile2 : " << endl;
pile2.pop();
pile2.afficher();


    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int a = 100;
    int &ref_a = a;
    int *p_a = &a;

    cout << "a = " << a <<endl;
  cout << "Adresse de a: " << &a<< endl;
   cout << "reference de a = " << ref_a << endl;
   cout << "Adresse de ref_a : " << &ref_a << endl;
   cout << "p_a = " << *p_a << endl;
   cout << "Adresse stockee dans p_a : " << p_a <<endl;

    return 0;
}

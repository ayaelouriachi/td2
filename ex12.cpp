#include <iostream>

using namespace std;
 class Test {
  public:
      static int cpt;
 void call(){
 cpt++;}
 };
 int Test ::cpt=0;
int main()
{
    Test  t;
    t.call();
    t.call();
    cout << "La fonction call a ete applee" <<t.cpt<<"fois"<< endl;
    return 0;
}

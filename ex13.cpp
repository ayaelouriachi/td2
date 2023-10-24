#include <iostream>

using namespace std;
class Point {
private: float x,y,z;
public : Point(float a,float b,float c):x(a),y(b),z(c){};
void deplace(float dx, float dy,float dz){
 x+=dx;
 y+=dy;
 z+=dz;
 }
 void afficher(){
 cout<<x<<endl<<y<<endl<<z<<endl;
 }
};
int main()
{
  Point P(1,7,11);
  P.afficher();
  P.deplace(2,-1,2);
  P.afficher();
    return 0;
}


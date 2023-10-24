#include <cstdlib>
#include <iostream>

using namespace std;
int fonct1(int n){
  return n%3;
}
int fonct2(int n){
    return n%2;
}
int main()
{int x;
 cout<<"donner un entier";
 cin>>x;
 if(fonct1(x)==0){
 cout<<"il est multiple de 3";
}
if(fonct2(x)==0){
    cout<<"il est pair"<<endl;
     if(fonct1(x)==0){
         cout<<"il est multiple de 3"<<endl;
         cout<<"il est divisible par 6"<<endl;
     }
}
 return 0;
}

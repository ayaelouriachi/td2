#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
int T[10],min=T[0],max=T[0];
for(int i=0;i<10;i++){
    cout<<"entrer un nombre";
    cin>>T[i];
    if(max<T[i]){
    max=T[i];}
     if(min>T[i]){
    min=T[i];}
};
 cout<<"le maximum est"<<max<<"et le minimum est"<<min;
return 0:}

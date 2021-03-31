#include <iostream>

int f( int a);
using namespace std;
int main(){
    int a;
   cin >>a ;

    cout << f(a);
 return 0;
}
int f(int a){
if (a==0||a==1)
return a;
else 
return a*f(a-1);
}
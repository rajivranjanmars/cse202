#include <iostream>

using namespace std;
int main(){
    char a=65;
    char *c=&a;
    while (   *c<=90 )
    {
        cout  << *c<< " " ;
        *c=*c+1;
    }
    cout << endl;
    *c=*c+6;
    while (  *c<=122 )
    {
        cout  << *c<< " " ;
        *c=*c+1;
    }



 return 0;
}
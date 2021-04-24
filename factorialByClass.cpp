#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

class Factorial{
private :
int n ;

public :
 int getfactorial(){
    cin >> n; 
    int fact[n];
    fact[0] = 0;
    fact[1]=1;
    for (int i = 2; i <= n; i++)
    {
        fact[i] =i* fact[i-1] ;
    }
    return fact[n];
      
}



};

int main(){
 Factorial factorial;

cout << " enter the number to calculate the factorial" << endl;
 cout <<factorial.getfactorial();




 return 0;
}
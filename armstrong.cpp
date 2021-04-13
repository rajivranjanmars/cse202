#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
int main(){
 int a,b;
 cin >> a;
 b=a;
 int arm=0;
 while( a/10 >0){
    int t= a%10;
        arm=arm+t*t*t;
        a=a/10;

 }
 
 arm+=a*a*a;  

if (arm==b)  
 cout<< " armstrong number";
 else 
 cout<< "not armstrong number";       
 return 0;
}
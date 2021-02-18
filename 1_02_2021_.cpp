#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
  // program of greatest of 3   
int a,b,c;
cout << " enter three numbers a,b,c " << endl;
cin >> a >> b >> c;

if (a > b){
if (a > c)
cout << "1st number is the greatest among three.";
}
else
if (b>c)
cout << "2nd number is the greatest among three.";
else
cout << "3rd number  is the greatest among three.";
return 0;
}
// program for swap of two  variable
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
int a=1, b=2;
cout << "Before swap " << a  << " "<< b << endl;
a=a+b; // a= 3 =2+1
b=a-b; // b= 1 =2-1
a=a-b; // a= 2 =3-1
 cout << " after swap " <<  a <<" " << b << endl;
 return 0;
}
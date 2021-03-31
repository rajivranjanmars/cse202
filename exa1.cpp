#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


class A{

public:
~A(){
  int  i=10;
}

};


int foo(){
 int   i=3;
    A ob;
    return i;
}

int main(){
       cout<< foo();       
 return 0;
}
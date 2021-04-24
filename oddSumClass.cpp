#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

class oddSumClass
{
public:
    oddSumClass(/* args */);
    ~oddSumClass();

   void number(){
       int n;
       cin >>n;
       cout<< ((n/2))* ((n/2));
   }
};

oddSumClass::oddSumClass(/* args */)
{
}

oddSumClass::~oddSumClass()
{
}



int main(){

oddSumClass number;
number.number();
    

 return 0;
}

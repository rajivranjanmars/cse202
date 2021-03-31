#include <iostream>
#include <cstdio>
#include <string>

using namespace std; 


class mars
{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string name , game; 
    int a,b,c;
    float t,r,p; 
  
    // Member Functions() 
    void print() 
    { 
       cout << "name is: " << name  <<endl
            << "game is: " << game  <<endl
            << "a is: " << a <<endl
            << "b is: " << b <<endl
            << "c is: " << c <<endl
            << "t is: " << t <<endl
            << "r is: " << r <<endl
            << "p is: " << p <<endl;
            
    } 
    mars(string x, string y, int i,int j,int k, float m, float n , float o){
name= x;
game= y;
a=i;
b=j;
c=k;
t=m;
r=n;
p=o;
}
}; 
  
int main() { 
  
    // Declare an object of class geeks 
   /* mars obj1("","",0,0,0,0,0,0) ;
  
    // accessing data member 
    obj1.name = "Abhi"; 
  
    // accessing member function 
    obj1.print();    */


    string name , game; 
    int a,b,c;
    float t,r,p;


     cout << "name is: " << name  <<endl
            << "game is: " << game  <<endl
            << "a is: " << a <<endl
            << "b is: " << b <<endl
            << "c is: " << c <<endl
            << "t is: " << t <<endl
            << "r is: " << r <<endl
            << "p is: " << p <<endl;

 c 
    return 0; 
} 
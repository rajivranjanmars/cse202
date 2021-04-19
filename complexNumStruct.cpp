#include <iostream>

using namespace std;


struct Complex
{
    int real,imaginary;

   



};
 void addition(Complex a, Complex b){
          cout <<a.real +b.real  << " + i " << a.imaginary + b.imaginary << endl;
    }
    void subtraction(Complex a, Complex b){
          cout <<a.real -b.real  << " + i " << a.imaginary - b.imaginary << endl;
    }


    void multiplication(Complex a, Complex b){
          cout <<a.real *b.real  << " + i " << a.imaginary *b.imaginary << endl;
    }
    void division(Complex a, Complex b){
          cout <<float(a.real )/b.real  << " + i " << float(a.imaginary) /b.imaginary << endl;
    }


int main(){  
    Complex num1 ,num2;
    cin >> num1.real >> num1.imaginary >> num2.real >> num2.imaginary;
    addition(num1 ,num2);
    subtraction(num1 ,num2);
    multiplication(num1 ,num2);
    division(num1 ,num2);
        
return 0;    
  }
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
// program for creating function
class factorial
}
        private:
                        int n,n1,f=1;
        public:
                void input(); //  taking input 
                void calc();  // doing calculation
                void display();  // output result
};
 
void factorial::input()
{
        cout<<"\nEnter any number :: ";
        cin>>n;
}
 
void factorial::calc()
{
        n1=n;
        if(n==0||n==1)
        cout<<"\nFactorial of Number [ "<<n<<" ] is :: 1\n";
        else
        {
                while(n>0)
                {
                        f=f*n;
                        n--;
                }
        }
 
}
 
void factorial::display()
{
                cout<<"\nFactorial of [ "<<n1<<" ] is :: "<<f<<"\n";
}
 

int main(){

        factorial f;
        f.input();
        f.calc();
        f.display();
}
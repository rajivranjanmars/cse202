#include <iostream>

using namespace std;

class Employee 
{

public:
    int Ecode;
   Employee(int code);
   ~Employee();
   Employee(){

   };
};

Employee ::Employee (int code){
   Ecode = code;
}

Employee ::~Employee (){

}





int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int Ecode; 
   cin >> Ecode;
    Employee emp(Ecode);
    Employee imp;
    imp.Ecode = Ecode;

        cout << emp.Ecode << endl;
        cout << imp.Ecode << endl;     
 return 0;
}
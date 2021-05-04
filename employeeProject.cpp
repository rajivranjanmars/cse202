#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

class Employee{
    private:
    string empname,department;
    int empno,salary;
    public:
    void get(){
        cin >> empname >> department >> empno >> salary ;
    }
    void display(){
        cout << empname << " - " << empno << endl;
        cout << " " << department << " : " << salary << endl;
    }


};
class Project: public Employee
{
private: 
    string projectname;
public:

   
};




int main(){
                 
    Project p1;
    p1.get();
    p1.display();

              
              
              
 return 0;
}
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Bill{
private:
string name;
int units;
int totalCost;

public:
void get()
{
cout << endl << endl;
cout << "Enter the name of customer: ";
cin >> name;
cout << "Enter the units: ";
cin >> units;
calcBill();
}
void calcBill()
{
if(units <= 100)
totalCost = 1.20*units;
else if(units <= 200)
totalCost = 1.20*100 + 2*(units-100);
else
totalCost = 1.20*100 + 2*100 + 3*(units-200);
}
void put()
{
cout << endl;
cout << "-------------------------------------------------------\n";
cout << "Customer Name: " << setw(13) <<"| " << name << endl;
cout << "Total units consumed: " <<setw(6) <<"| " << units << endl;
cout << "Bill : " << setw(21) <<"| " << totalCost<< endl;
cout << "-------------------------------------------------------\n";
}

};

int main()
{
Bill P1;
P1.get();
P1.put();
return 0;
}
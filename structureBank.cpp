#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
Account account[15];

struct Account
{
    int balance;
    unsigned long long number;
    string name;
};

int main()
{
    Account account[15];

    for (int i = 0; i < 15;i++)
    {
        
            cin >> account[i].name;
            cin >> account[i].balance;
            cin >> account[i].number;
           
    }
    cout << " account with less balance" << endl;
  leesbalnce();
  cout << " account with bonus balance" << endl;
  void bonus();
    return 0;
}
void leesbalnce(){
    for (int i = 0; i < 15;i++)
    {
        if (account[i].balance <200)
        {
        cout << account[i].name << ": " << account[i].number << endl;
        }
        
    }
}

void bonus(){
    for (int i = 0; i < 15;i++)
    {
        if (account[i].balance >1000)
        {
            account[i].balance+=200;
        cout << account[i].name << ": " << account[i].balance << endl;
        }
        
    }
}
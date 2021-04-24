#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

class electricityBill
{
private:
    int unit , bill;
public:
    electricityBill(/* args */);
    ~electricityBill();

    void get(){
        cin >> unit;
    }

     int calc_bill(){
         get();
         if (unit< 100/1.2)
         {
        bill=unit*1.2;
         }
         if (unit > 100/ 1.2 && unit < (100/1.2) +50)
         {
            bill= 100 +(unit-(100/1.2))*2 ;/* code */
         }
         else
         {
            bill= unit*3;
         } 
         return bill;
    }
        void put(){
            cout << calc_bill();
        }
};

electricityBill::electricityBill(/* args */)
{
}

electricityBill::~electricityBill()
{
}


int main(){
    electricityBill a;
    a.put();
              
 return 0;
}
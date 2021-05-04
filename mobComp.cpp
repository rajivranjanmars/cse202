#include <iostream>

using namespace std;

class computer
{
private:
  int price;
  string model;
  int charger;
public:
    computer(/* args */);
    ~computer();
   computer operator=( mobile &mob){
   price=mob.price;
   model=mob.model;
   charger=mob.charger;

}

};

computer::computer(/* args */)
{
}

computer::~computer()
{
}

class mobile
{
public:
    /* data */
    int price;
  string model;
  int charger;

    mobile(/* args */);
    ~mobile();
   
};

mobile::mobile(/* args */)
{
}

mobile::~mobile()
{
}



int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);               
     computer comp;
     mobile mob; 
     comp=mob;  

 return 0;
}
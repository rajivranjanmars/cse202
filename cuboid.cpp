#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

class cuboid{

public:
int length , width , height;
void display(){
    cout <<  length << " " << width << " " << height << endl;

}


};

class CuboidVol : public cuboid
{
   
public:
   void read_input(){
       cin >> length >> width >> height;
   }
   void displayVol(){
       cout << length* width * height << endl;
   }
};



int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);               
              
CuboidVol C;
    C.read_input();
    C.displayVol();       
              
 return 0;
}
#include <iostream>
using namespace std;

class Shape{
    public:
float l,b;

void get(){
    cin >> l >> b;
}
};
class Rectangle : public Shape{
public:
void display(){
    cout << "Rectangle's area =" << l*b << endl;
}
};
class Circle : public Shape{
public:
void display(){
    cout << "Circle's area =" << l*l*3.14 << endl;
}
};
using namespace std;
int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);               
   Rectangle r1;
   r1.get();
   r1.display();   
   Circle c1;
   c1.get();
   c1.display();      
 return 0;
}
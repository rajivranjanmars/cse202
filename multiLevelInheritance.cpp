#include <iostream>

using namespace std;

class Student{
    

};

class Test :public Student{
private:
int m[5];
public:
void test(){
for(int i = 0; i < 5;i++){
    cin >> m[i];
}
}
};
class Result :public Test{

public:
void test(){
for(int i = 0; i < 5;i++){
    cin >> m[i];
}
}
};

int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);               
              
     Student roll         
              
 return 0;
}
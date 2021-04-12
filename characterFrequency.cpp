#include <iostream>
#include <string>
using namespace std;
int main(){
string str;
cin >> str;
for(int i=65; i<125;i++) {
      int a=0;
     for (int j = 0; j < str.size(); j++)
     {
       
         if (str[j] ==  i)
            a++;
     }
       if(a>0) 
       cout << char(i)   << " occured "  << a << "times"<< endl;
    }

 return 0;
} 
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
int main(){
     string str;
     cin >> str;
       int vowel=0;      
       for(int i=0; i <str.length();i++){
          int t= str.find_first_of("aeiouAEIOU");
          if (t==i){
              vowel++;
              str[i]='h';
          }  
       }  
       cout << vowel;    
 return 0;
}
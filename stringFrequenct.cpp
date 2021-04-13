#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
int main(){
         string str;
        cin >> str;

        int vowel =0;
        int consonant =0;
        int digit =0;
        int whitespace =0;
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i]== 'a'||str[i]=='e' || str[i]=='i'   || str[i]=='o' || str[i]=='u') 
            vowel++;
            if(str[i]== 'A'||str[i]=='E' || str[i]=='I'   || str[i]=='O' || str[i]=='U') 
            vowel++;
            if(str[i]== '1'||str[i]=='2' || str[i]=='3'   || str[i]=='4' || str[i]=='5') 
            digit++;
            if(str[i]== '6'||str[i]=='7' || str[i]=='8'   || str[i]=='9' || str[i]=='0') 
            digit++;
        if(str[i]==' ')
        whitespace++;
        else 
        consonant++;
        }
        
       cout << "vowel " << vowel << endl;
       cout << "consonant " << consonant << endl;
        cout << "digit " << digit << endl;
        cout << " whitespace " << whitespace << endl; 
             
 return 0;
}
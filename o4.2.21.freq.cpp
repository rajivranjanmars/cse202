#include <iostream>
using namespace std;

int main() {
   char str[100] = "this string contains many alphabets";
   int i = 0, alphabet[26] = {0}, j;
   while (str[i] != '\0') {
      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         ++alphabet[j];
      }
      ++i;
   }
   cout<<"Frequency of all alphabets in the string is:"<<endl;
   for (i = 0; i < 26; i++)
   cout<< char(i + 'a')<<" : "<< alphabet[i]<< endl;
   return 0;
}
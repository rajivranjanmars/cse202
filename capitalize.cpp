#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(std::cin, str);
    putchar(toupper(str[0]));
    for (int i = 1; i < str.length(); i++){
        cout << str[i];
        if (str[i] == 32){
            char c = str[i + 1];
            putchar(toupper(c));
            str[i + 1] = c;
            i = i + 1;
        }
    }
    return 0;
}
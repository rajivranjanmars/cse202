#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{

    string str;
    getline(cin, str);
    cout << "the reverse of string by general method > ";

    for (int i = str.length()-1; i >=0;  i--){
        cout << str[i];
    }

    cout << endl;
    reverse(str.begin(), str.end());
    cout <<  "reverse of string by reverse function in algorithm STL > " << str;

    return 0;
}
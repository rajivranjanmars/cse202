#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str;
    cin >> str;

    reverse(str.begin(), str.end());
    cout << str;

    return 0;
}
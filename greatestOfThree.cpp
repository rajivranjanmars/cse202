#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << "a is biggest of three number";
    else if (b > c)
        cout << "b is greatest of three number";
    else
        cout << "c is largest of three number";
    return 0;
}
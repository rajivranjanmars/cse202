#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << " value of a and b  before swap is " << a << " and " << b << " respectively \n"
         << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << " value of a and b  after swap is " << a << " and " << b << " respectively " << endl;

    return 0;
}
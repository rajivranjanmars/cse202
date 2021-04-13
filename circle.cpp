#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int circle(int r)
{
    cout << " the circumference is " << 2 * 3.14 * r << endl;
    cout << " the area is " << r * 3.14 * r << endl;
}

int main()
{

    int r;
    cin >> r;
    circle(r);
    return 0;
}
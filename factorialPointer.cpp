#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

    int n;
    cin >> n;
    
    int fact[n];
    fact[1] = 1;
    for (int i = 2; i <= n; i++)
        *(fact + i) = i * (*(fact + i - 1));

    cout << *(fact + n);

    return 0;
}

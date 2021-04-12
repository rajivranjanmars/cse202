#include <iostream>

using namespace std;
int main()
{
    int p;
    cin >> p;
    if (p == 1)
        cout << " p is neither prime nor composite";

    if (p == 2 || p == 3)
        cout << "p is prime number" << endl;

    if (p > 3)
    {
        for (int i = 2; i < p; i++)
        {
            if (p % i == 0)
            {
                cout << p << " is not a prime number";
                break;
            }
            if (p - 1 == i)
                cout << p << " is prime number";
        }
    }

    return 0;
}
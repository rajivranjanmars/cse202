#include <iostream>
using namespace std;
int lcm(int a, int b);
int main()
{
    int a, b;
    cin >> a >> b;

    cout << lcm(a, b); //function creation

    return 0;
}

int lcm(int a, int b)
{
    int p = 1;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    } /// made a smaller int
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0 && b % i == 0)  // if both arre divisible by i
        {
            a = a / i;
            b = b / i;
            p = p * i;
            i = 2;
        }
    }
    return a * b * p;
}
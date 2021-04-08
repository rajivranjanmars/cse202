#include <iostream>

using namespace std;

void swap(int* xp, int* yp)
{
 
    // Check if the two addresses are same
    if (xp == yp)
        return;
    *xp = *xp + *yp;
    *yp = *xp - *yp;
    *xp = *xp - *yp;
}
 
// Driver Code
int main()
{
    int x = 10;
    swap(&x, &x);
    cout << "After swap(&x, &x): x = " << x;
    return 0;
}


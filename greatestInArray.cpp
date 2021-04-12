#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int temp = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (temp < arr[i])
            temp = arr[i];
    }

    cout << temp << " is the largest element in array" << endl;

    return 0;
}
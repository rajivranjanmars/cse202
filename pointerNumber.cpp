#include <iostream>
using namespace std;

void display(int *num)
{
    cout << *num << endl;
}
int main()
{
    int num;
    cin >> num;
    display(&num);
    return 0;
}
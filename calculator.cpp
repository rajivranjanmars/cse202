#include <cstdio>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void opr(int fun);

void f()
{
    cout << "please enter your operation : ";
    int fun;
    cin >> fun;

    opr(fun);
}

void menu()
{
    cout << "\n \nplease  choose the number of your operation \n\n\n"
         << endl;
    cout << " press 1 for addition" << endl;
    cout << " press 2 for subtraction" << endl;
    cout << " press 3 for multiplication" << endl;
    cout << " press 4 for division" << endl;
    cout << " press 5 for square root" << endl;
    cout << " press 6 for factorial" << endl;
    cout << " press 7 for exponential" << endl;
    cout << " press 8 for menu" << endl;
    cout << " press 9 to quit" << endl;
}

void addition()
{
    cout << "please  enter your numbers : ";
    int a, b;
    cin >> a >> b;
    cout << " addition of " << a << " and " << b << " is " << a + b << endl
         << endl;

    f();
}

void subtraction()
{
    cout << "please  enter your numbers : ";
    int a, b;
    cin >> a >> b;
    cout << " diffrence of " << a << " and " << b << " is " << a - b << endl
         << endl;

    f();
}

void multiplication()
{
    cout << "please  enter your numbers : ";
    int a, b;
    cin >> a >> b;
    cout << " product of " << a << " and " << b << " is " << a * b << endl
         << endl;

    f();
}

void division()
{
    cout << "please  enter your numbers : ";
    int a, b;
    cin >> a >> b;
    cout << " division of " << a << "  and " << b << " is " << a / b << endl
         << endl;

    f();
}

void squareRoot()
{
    cout << "please  enter your number : ";
    int a;
    cin >> a;
    cout << " square root of " << a << " is " << sqrt(a) << endl
         << endl;
    f();
}

void factorial()
{
    cout << "please  enter your number : ";
    int a, p = 1;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        p *= i;
    }
    cout << " factorial of " << a << " is " << p << endl
         << endl;

    f();
}

void exponential()
{
    cout << "please  enter your number  and the power: ";
    int a, b, c = 1;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        c *= a;
    }

    cout << a << " to the power of " << b << " is " << c << endl
         << endl;

    f();
}

void opr(int fun)
{
    switch (fun)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    case 5:
        squareRoot();
        break;
    case 6:
        factorial();
        break;
    case 7:
        exponential();
        break;
    case 8:
        menu();
        f();
        break;
    case 9:
        break;
    default:
        cout << "E.R.R.O.R  : Please choose an option from menu only" << endl;
        menu();
    }
}

int main()
{
    menu();
    f();

    return 0;
}
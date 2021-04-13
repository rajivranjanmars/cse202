#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void grade(int grade)
{
    if (grade > 90)
        cout << " grade is AA";
    else if (grade > 80)
        cout << " grade is Ab";
    else if (grade > 70)
        cout << " grade is BB";
    else if (grade > 60)
        cout << " grade is CC";
    else if (grade > 50)
        cout << " grade is CD";
    else if (grade > 40)
        cout << " grade is DD";
    else if (grade <= 40)
        cout << " FAIL";
}
int main()
{
    int g;

    cin >> g;

    grade(g);

    return 0;
}

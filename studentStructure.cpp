#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student
{
    int age, rollnum;
    string name, adress;
};

int main()
{
    Student student[3];
    int a;

    for (int i = 0; i < 3;)
    {
        cin >> a;
        if (a >= 11 && a <= 14)
        {
            student[i].age = a;
            cin >> student[i].rollnum;
            cin >> student[i].name;
            cin >> student[i].adress;
            i++;
        }
        else
        {
            cout << "put a number between 10 and 14" << endl;
        }
    }
    cout << "Student with age 14" << endl;
    for (int i = 0; i < 3; i++)
    {
        if (student[i].age == 14)
        {
            cout << student[i].name << endl; /* code */
        }
    }
    cout << "Student with even roll number " << endl;
    for (int i = 0; i < 3; i++)
    {
        if (student[i].rollnum % 2 == 0)
        {
            /* code */
            cout << student[i].name << endl;
        }
        /* code */
    }
    int t;
    cin >> t;
    for (int i = 0; i < 3; i++)
    {
        if (student[i].rollnum == t)
        {
            /* code */
            cout << student[i].name << " " << student[i].age << " " << student[i].adress << endl;
        }
    }

    return 0;
}
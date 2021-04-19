#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Student student[15];

struct Student
{
    int age, rollnum;
    string name, adress;
};

int main()
{
    Student student[15];
    int a;

    for (int i = 0; i < 15;)
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
    void agedata();

    cout << "Student with even roll number " << endl;
    rollnum();
    int t;
    cin >> t;
    roll(t);

    return 0;
}
void roll(int t)
{
    for (int i = 0; i < 15; i++)
    {
        if (student[i].rollnum == t)
        {
            /* code */
            cout << student[i].name << " " << student[i].age << " " << student[i].adress << endl;
        }
    }
}

void agedata()
{
    for (int i = 0; i < 15; i++)
    {
        if (student[i].age == 14)
        {
            cout << student[i].name << endl; /* code */
        }
    }
}

void rollnum()
{
    for (int i = 0; i < 15; i++)
    {
        if (student[i].rollnum % 2 == 0)
        {
            /* code */
            cout << student[i].name << endl;
        }
        /* code */
    }
}
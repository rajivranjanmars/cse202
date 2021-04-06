#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct student
{

    int roll;
    string name;
    int m1, m2, m3;

    void getdata()
    {

        cin >> roll;
        cin >> name;
        cin >> m1 >> m2 >> m3;
    }
    void result()
    {
        if ((m1 < 40 && m2 < 40) || (m1 < 40 && m3 < 40) || (m2 < 40 && m3 < 40))
            cout << " roll no. " << roll << " " << name << " "
                 << " is failed" << endl;
    }
};

int main()
{
    student s1;
    s1.getdata();
    s1.result();

    return 0;
}
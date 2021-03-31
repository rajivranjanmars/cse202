#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout << "2" << endl
       << "3" << endl;
  for (int i = 4; i < 100; i++) {
    int b=2;
    while (i %b != 0)  {
      b++;
      if (b==i)    {
       cout<< i<< endl; /* code */
      }   
    }
  }
  return 0;
}
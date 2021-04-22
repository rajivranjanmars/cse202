#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int vowel = 0, consonant = 0;
    for (int i = 0; i < str.size(); i++)
    {
        char *a = &str[i];
        tolower(*a);

        if (*a != 'a' && *a != 'e' && *a != 'i' && *a != 'o' && *a != 'u')
        {
            consonant++;
        }
        else
        {
            cout << *a << " v" << endl;
            vowel++;
        }
    }
    cout << "Consonant = " << consonant << endl;
    cout << "Vowel = " << vowel << endl;
}
#include <iostream>
using namespace std;
int main(){
    int n, j = 0, k = 0;
    cin >> n;

    int a[50];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int b[50];
    for (int i = 0; i < n; i++){
        if (a[i] == 0)
            j++;
        else
         b[k++] = a[i];        
    }

    for (int i = 0; i <= j; i++)
        a[2 * i] = b[i];

    for (int i = 0; i < j; i++)
        a[2 * i + 1] = 0;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    return 0;
}
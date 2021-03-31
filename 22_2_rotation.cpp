#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
     int arr[]= {1,2,3,4,5,6};
       
     int temp;
     int n;
     cout << " enter   by how much point u want to rotate" << endl;
     cin >> n;

     temp=arr[6];
     
     for (int  i = 0; i < n; i++)
     {
         for (int j = 0; i < 6; j++)
         {
             //1temp=arr[6];
             arr[j]=arr[j+1];
         }
         
     }
     
for (int i = 0; i < 6; i++)
{
    /* code */
    cout << arr[i] << endl ;
}


 return 0;
}
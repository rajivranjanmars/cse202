#include <iostream>

using namespace std;
int main(){
 int arr[5]={1,2,3,4,5};

 int sum =0;
 for (int i = 0; i < 5; i++)
 {
     sum+=arr[i];
 }
 cout <<  "sum of elements of array is "<< sum << endl;

int products =1;
 for (int i = 0; i < 5; i++)
 {
     products*=arr[i];
 }

 cout <<  "products of elements of array is "<< products << endl;


 return 0;
}
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
int main(){

 int arr[10]={0,1,2,3,4,5,6,7,8,9};
 
for (int i = 0; i < 10; i++){
     cout <<*(arr+i) <<" "; 
}
       
 return 0;
}
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int *maxOf3(int *a, int *b , int * c){
    if (*a>= *b && *a>=*c)  return a;
    else if (*b>= *c) return b;
    else return c;

}



int main(){

 int a,b,c;
 cin >> a >> b >> c;
 cout <<  *maxOf3(&a,&b,&c);

 return 0;
}
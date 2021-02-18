 // in c it is saying to declare r first but works fine in cpp
#include <stdio.h>

using namespace std;
int main(){
int i=1024;
int &r =i ;
//cout <<  "r= " << r <<  " i= "<< i << " &r =" <<  r;

printf( " i=%d   r=%d &r= %d ", i, r, &r);

 return 0;
}
 
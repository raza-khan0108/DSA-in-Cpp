#include<stdio.h>
#include <iostream>
using namespace std;

int main(){
 int A[5]={2,4,6,8,10};
 for (int i=0;i<5;i++){
    cout<<A[i] ;
 }

cout <<endl;
int *p;
 p = new int[5] ;
 p[0]=1;
 p[1]=2;
 p[2]=3;
 p[3]=4;
 p[4]=5;

for (int i=0;i<5;i++){
    cout<<p[i] ;
}
return 0;

}
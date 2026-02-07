#include<stdio.h>
#include <iostream>
using namespace std;

int power(int m,int n){
    if(n==0){
        return 1;
    }
    else {
        return power(m,n-1)*m;
    }
}

int power1(int m,int n){
    int a ;
    int i;
    for (i=1;i<=n;i++)
    a = m * m;
    return s;
}

int main(){
    int r = power1(2,9);
    cout << r ;
    return 0;
}
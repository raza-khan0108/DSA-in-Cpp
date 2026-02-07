#include<stdio.h>
#include <iostream>
using namespace std;

int fact(int n){
    if (n==0){
        return  1;
    }
    else {
        return fact(n-1)*n;
    }
}

int Ifact(int n){
    int i;
    int s = 1;
    for (i=1;i<=n;i++)
    s = s * i;
    return s;
}

int main(){
    int r;
    r = Ifact(5);
    cout << r ;
    return 0;
}
#include<stdio.h>
#include <iostream>
using namespace std;

int sum(int n){                       //using recursion
    if (n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}

int Isum(int n){                       //using for loop
    int s = 0;
    int i;
    for (i=1;i<=n;i++)
    s = s + i;
    return s;
}

int main(){
    int r;
    r=Isum(5);
    cout<<r ;
    return 0;
}
#include<stdio.h>
#include <iostream>
using namespace std;

int C(int n,int r){
    if(n==r || r == 0){
        return 1;
    }
    else {
        return C(n-1,r-1) + C(n-1,r);
    }
}

int main(){
    cout<<C(5,2);
    return 0    ;
}
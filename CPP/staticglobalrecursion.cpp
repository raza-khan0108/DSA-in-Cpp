#include<stdio.h>
#include <iostream>
using namespace std;

int fun(int n){
    static int x;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int a = fun (5);
    cout<<a<<endl;
    return 0;
}
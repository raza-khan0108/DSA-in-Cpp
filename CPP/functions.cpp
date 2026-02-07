#include<stdio.h>
#include<iostream>
using namespace std;

int add(int a , int b){
    int c = a + b ;
    return c;
}

int main(){
    int x = 10;
    int y = 15;

    int sum = add(x,y);
    cout<<"Sum is "<<sum<<endl;

}
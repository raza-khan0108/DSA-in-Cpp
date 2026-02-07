#include<stdio.h>
#include <iostream>
using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y =temp;
};

void Bubble(int A[],int n){
    int j;
    int flag;
    for(int i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }  
        if(flag==0){
            break;
        }      
    }
};

int main(){
    int A[] = {5,2,8,1,9};
    int n = 5;
    Bubble(A,5);

    for(int i=0;i<5;i++){
        cout<< A[i]<<" ";
    }

    return 0;
}
#include<stdio.h>
#include <iostream>
using namespace std;

void Insertion(int A[],int n){
    int i,j,x;
    for(i=1;i<n;i++){
        x=A[i];
        j=i-1;
        while(j>-1 && A[j]>x){
            A[j+1]=A[j];
            j-- ;
        }
        A[j+1]=x;
    }
};

int main(){
    int A[] = {5,2,8,1,9};
    int n = 5;
    Insertion(A,n);

    for(int i=0;i<5;i++){
        cout<< A[i]<<" ";
    }
    return 0;
};    

 
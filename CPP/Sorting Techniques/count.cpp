#include<stdio.h>
#include <iostream>
using namespace std;

int FindMax(int A[],int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        max=A[i];
    }
    return max;
};

void CountSort(int A[],int n){
    int i,j,*C;
    int max = FindMax(A, n);
    C = new int[max+1];
    for (i = 0; i < max+1; i++){
        C[i] = 0;
    }
    for(i=0;i<n;i++){
        C[A[i]]++;
    }
    i=0;
    j=0;
    while(i<max+1){
        if(C[i]>0){
            A[j++]=i;
            C[i]--;}
        else{
            i++;
        }    
    }
};

int main(){
    int A[] = {5,2,8,1,9,7,11};
    int n = 7;
    CountSort(A,n);

    for(int i=0;i<n;i++){
        cout<< A[i]<<" ";
    }

    return 0;
};
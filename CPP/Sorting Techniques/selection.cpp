#include<stdio.h>
#include <iostream>
using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y =temp;
};

void SelectionSort(int A[],int n){
    int i; 
    int j;
    int k;
    for(i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(A[j]<A[k]){
                k=j;
            }
        } 
        swap(&A[i],&A[k]);
    }
};    



int main(){
    int A[] = {5,2,8,1,9};
    int n = 5;
    SelectionSort(A,5);

    for(int i=0;i<5;i++){
        cout<< A[i]<<" ";
    }

    return 0;
}
#include<stdio.h>
#include <iostream>
using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y =temp;
};

int partition(int A[],int l,int h){
    int pivot = A[l];
    int i =l;
    int j = h;
    do{
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<=j){
            swap(&A[i],&A[j]);
        }
    }while(i<j);
    swap(&A[l],&A[j]);
    return j;
};

void QuickSort(int A[],int l,int h){
    if(l<h){
        int j = partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h); }
};

int main(){
    int A[] = {5,2,8,1,9,7,__INT32_MAX__};
    int n = 7;
    QuickSort(A,0,n-1);

    for(int i=0;i<7;i++){
        cout<< A[i]<<" ";
    }

    return 0;
};
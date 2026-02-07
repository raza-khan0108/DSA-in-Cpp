#include<stdio.h>
#include <iostream>
using namespace std;

void Merge(int A[],int l,int mid,int h){
    int i=l;
    int j=mid+1;
    int k=l;
    int B[h-1+1];
    while(i<=mid && j<=h){
        if(A[i]<A[j]){
            B[k++]=A[i++]; }
        else{
            B[k++]=A[j++]; }
    }

    for( ;i<=mid;i++){
        B[k++]=A[i];
    }
    for( ;j<=h;j++){
        B[k++]=A[j];
    }
    for(i=l;i<=h;i++){
        A[i]=B[i]; 
    }
};

void MergeSort(int A[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
};


int main(){
    int A[] = {5,2,8,1,9,7,11};
    int n = 7;
    MergeSort(A,0,n-1);

    for(int i=0;i<n;i++){
        cout<< A[i]<<" ";
    }

};
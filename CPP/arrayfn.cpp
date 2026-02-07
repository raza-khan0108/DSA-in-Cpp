#include<stdio.h>
#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size = 10;
    int length = 9;
};

void swap(struct Array *arr, int x,int y){
    int temp = arr->A[x];
    arr->A[x] = arr->A[y];
    arr->A[y] = temp;
}

//to insert element in sorted array
void InsertSort(struct Array *arr, int x){
    int i = arr->length - 1;
    if(arr->length == arr->size){
        return ; }  

    while(i>=0 && arr->A[i]>x){
        arr->A[i+1] = arr->A[i];
        i--;
        arr->A[i+1]=x;
    }
    
    
};

//to check if array is sorted or not
int isSorted(struct Array arr){
    int i;
    for(i=0;i<arr.length-1;i++)
        if(arr.A[i]>arr.A[i+1]){
            return 0;}
        return 1;
    
}

//to arrange +ve and -ve numbers
void Rearrange(struct Array *arr){
    int i = 0, j = arr->length - 1;
    while(i<j){
        while(arr->A[i]<0) i++;
        while(arr->A[j]>0) j--;
        if(i<j){
            swap(arr->A[i], arr->A[j]);
        }
    }
}

void Display(struct Array arr)
 {
 int i;
 cout<<"Elements are:" ;
 for(i=0;i<arr.length;i++){
 cout<<" "<<arr.A[i];
 }
 };

int main(){
    struct Array arr = {2,4,6,-8,10,-12,14,-16,18} ;
    InsertSort(&arr,11);
    cout<<isSorted(arr)<<endl;
    Rearrange(&arr);
    Display(arr);
    return 0;
}
#include<stdio.h>
#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size = 10;
    int length = 10;
};

void reverse(struct Array *arr){
    int i, j;
    int temp;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
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
    struct Array arr = {2,4,6,8,10,12,14,16,18,20} ;
    reverse(&arr);
    Display(arr);
    return 0;
}
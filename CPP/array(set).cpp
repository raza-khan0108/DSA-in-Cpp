#include<stdio.h>
#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size = 10;
    int length = 5;
};

struct Array* Intersection(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0 ;
    struct Array *arr3 = new Array ;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            i++;
            k++; }
            else if(arr2->A[j]<arr1->A[i]){
                j++;
                k++; }
            else if(arr1->A[i]==arr2->A[j]){
                arr3->A[k++] = arr1->A[i++];
                j++;
            }    
    }
        arr3->length = k ;
        arr3->size = 10;
        return arr3;
}

struct Array* Union(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0 ;
    struct Array *arr3 = new Array ;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
             }
            else if(arr2->A[j]<arr1->A[i]){
                arr3->A[k++] = arr2->A[j++];
                 }
            else {
                arr3->A[k++] = arr1->A[i++];
                j++;
            }    
    }
        arr3->length = k ;
        return arr3;
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
    struct Array arr1 = {2,6,10,15,25};
    struct Array arr2 = {3,6,7,15,20};
    struct Array *arr3;
    arr3 =  Union(&arr1,&arr2);
    Display(*arr3);
    return 0;
}
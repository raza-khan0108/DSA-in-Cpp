#include<stdio.h>
#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size = 10;
    int length = 5;
};

struct Array* Merge(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0 ;
    struct Array *arr3 = new Array ;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k] = arr1->A[i];
            i++;
            k++; }
            else{
                arr3->A[k] = arr2->A[j];
                j++;
                k++; }
    }
    while(i<arr1->length){
        arr3->A[k++] = arr1->A[i++];}
    while(j<arr2->length){
        arr3->A[k++] = arr2->A[j++];} 

        arr3->length = arr1->length+arr2->length;
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
    struct Array arr1 = {3,8,16,20,25};
    struct Array arr2 = {4,10,12,22,23};
    struct Array *arr3;
    arr3= Merge(&arr1,&arr2);
    Display(*arr3);
    return 0;
}
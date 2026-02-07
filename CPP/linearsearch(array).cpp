#include<stdio.h>
#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size = 10;
    int length = 10;
};

//improving linear search  
void swap( int *x,int *y){
    int temp = *x ; 
    *x = *y ;
    *y = temp ;
}

int search(struct Array *arr, int key){          //call by value because we only search not modify
    for(int i=0; i < arr->length; i++){         //call by add can also be used to improve LS
        if (key== arr->A[i]){
        swap(&arr->A[i] , &arr->A[0]) ;           // Move to front and transposition &arr->A[i-1]
        return i ;
        }
    }
        return -1;
};

void Display(struct Array arr)
 {
 int i;
 cout<<"Elements are:" ;
 for(i=0;i<arr.length;i++){
 cout<<" "<<arr.A[i];
 }
 };

int main(){
    struct Array arr = {8,9,4,7,6,3,10,5,14,2} ;
    cout << search(&arr,2) << endl;
    Display(arr);
    return 0;
}
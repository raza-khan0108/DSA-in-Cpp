#include<stdio.h>
#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size = 10;
    int length = 10;
};

int get(struct Array arr,int index){
    if(index>=0 && index< arr.length){
        return arr.A[index];
    }
    return -1;
};

void set(struct Array *arr, int index , int x){
    if(index>=0 && index< arr->length){
        arr->A[index] = x;
    }
};

int max(struct Array arr){
    int max = arr.A[0];
    for(int i=1; i<arr.length;i++){
        if(arr.A[i]>max){
            max = arr.A[i];
            return max;
        }
    }
};

int min(struct Array arr){
    int min = arr.A[0];
    for(int i=1; i<arr.length;i++){
        if(arr.A[i]< min){
            min = arr.A[i];
            return min;
        }
    }
};

int sum(struct Array arr){
    int sum = 0;
    for (int i = 0; i<arr.length;i++){
        sum = sum + arr.A[i];
        return sum ; 
    }
};

float avg(struct Array arr){
    return sum(arr)/arr.length ;
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
    struct Array arr = {2,4,6,8,10,12,14,16,18,20} ;
    cout << sum(arr) << endl;
    Display(arr);
    return 0;
}
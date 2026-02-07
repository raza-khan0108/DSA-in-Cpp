#include<stdio.h>
#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size = 10;
    int length = 10;
};

int search(struct Array arr, int key){
    int low = 0;
    int high = arr.length-1;
    int mid;

    while(low<=high){
        mid = (low+high)/2 ;
        if(key == arr.A[mid]){
            return mid;
        }
        else if(key < arr.A[mid]){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
        
    }
return -1;
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
    cout << search(arr,18) << endl;
    Display(arr);
    return 0;
}
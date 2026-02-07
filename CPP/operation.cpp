#include<stdio.h>
#include <iostream>
using namespace std;
#include<stdio.h>

struct Array
{
 int A[10];
 int size;
 int length;
};

 void Display(struct Array arr)
 {
 int i;
 cout<<"Elements are:" ;
 for(i=0;i<arr.length;i++){
 cout<<" "<<arr.A[i];
 }
 };

 void Append(struct Array *arr,int x)
 {
 if(arr->length<arr->size){              //length(5) = size(10) ya greater hogi toh value add nhi krskte in last
 arr->A[arr->length++]=x;
 }
 };

 void Insert(struct Array *arr,int index,int x)
 {
 int i;
 if(index>=0 && index <=arr->length)     //
 {
 for(i=arr->length;i>index;i--)
 arr->A[i]=arr->A[i-1];
 arr->A[index]=x;
 arr->length++;
 }
 }

int Delete(struct Array *arr,int index){
    int x=0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(int i=index;i<arr->length;i++){
            arr->A[i]= arr->A[i+1];
            arr->length-- ;
        }
        return x;
    }
}

int main()
{
struct Array arr1={{2,3,4,5,6},10,5};

Append(&arr1,10);
Insert(&arr1,0,12);
Delete(&arr1,4);
Display(arr1);
 return 0;
}
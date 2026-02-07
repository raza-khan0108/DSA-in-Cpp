#include<stdio.h>
#include <iostream>
using namespace std;

void Insert(int A[],int n){
    int i=n;
    int temp;
    temp=A[i];
    while(i>1 && temp>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
        }
        A[i]=temp;
};

int Delete(int A[],int n){
    int i,j,x,temp,val;
    val=A[1];
    x=A[n];
    A[1]=A[n];
    A[n]=val;
    i=1;
    j=i*2;
    while(j<=n-1){
        if(A[j+1]>A[j]){
            j=j+1;}
            if(A[j]>A[i]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
                i=j;
                j=j*2;
            }
            else{
                break;
      
      }     }
    return val;
};

int main(){
    int A[]={0,10,20,30,25,5,40,35};
    Insert(A,1);
    Insert(A,2);
    Insert(A,3);
    Insert(A,4);
    Insert(A,5);
    Insert(A,6);
    Insert(A,7);

    cout<<"Deleted value is "<<Delete(A,7)<<endl;

    for(int i=1;i<=7 ;i++){
        cout<<A[i]<<" ";
    }
};
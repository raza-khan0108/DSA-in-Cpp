#include <iostream>
using namespace std;

void sortArray (int arr[],int n){
    int left = 0;
    int right = n-1;

    while(left<right){
        if(arr[left]==0){left++;}
        else if(arr[right]==1){right--;}
        else{swap(arr[left],arr[right]);}
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int T;
    cin>>T;

    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sortArray(arr,n);
        printArray(arr,n);
    }
    return 0;
}

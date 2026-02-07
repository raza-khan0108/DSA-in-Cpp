#include <iostream>
using namespace std;

int longestZeroSumSubarray(int arr[],int n){
    int maxlen = 0;

    for (int i=0;i<n;i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            if (sum == 0){
                maxlen = max(maxlen,j-i+1);
            }
        }
    }
    return maxlen;
}

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int n;
        cin >> n;  
        
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i]; 

        cout << "Longest subarray with sum 0 is:  "<< longestZeroSumSubarray(arr, n) << endl;
    }

    return 0;
}

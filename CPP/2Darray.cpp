#include<stdio.h>
#include <iostream>
using namespace std;

int main(){
    int A[3][4] = {{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    for(int i=0;i<3;i++){                           //for  rows
      for(int j=0;j<4;j++){                         // for columns
        cout<<A[i][j]<<endl;
      }
    }

    int *B[3];

    B[0] = new int [4];
    B[1] = new int [4];
    B[2] = new int [4];

    B[1][2] = 15;
    cout<<B[1][2];

    int **C;
    C = new int*[3];
    C[0] = new int [4];
    C[1] = new int [4];
    C[2] = new int [4];
    
}
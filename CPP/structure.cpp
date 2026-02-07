#include <stdio.h>
#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int area (struct rectangle &r1){
    r1.length = 20;
    int a = r1.length * r1.breadth;
    return a;
}

int main(){
    struct rectangle r = {10,5};
    int p = area(r);
    cout<<p<<endl;
}

#include<stdio.h>
#include <iostream>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

int area(struct rectangle r){
    return r.length*r.breadth;
};

int perimeter(struct rectangle r){
    int p = 2*(r.length+r.breadth);
    return p;
};

int main(){
    struct rectangle r = {0,0};
    cout<<"enter length and breadth"<<endl;
    cin>>r.length>>r.breadth;

    int a = area(r);
    int p = perimeter(r);

    cout<<"Area is "<<a<<endl;
    cout<<"Perimeter is "<<p<<endl;
}


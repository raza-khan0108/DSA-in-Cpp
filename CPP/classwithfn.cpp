#include<stdio.h>
#include <iostream>
using namespace std;

class rectangle {
    public :
    int length;
    int breadth;

    void initialize(int l , int b){
        length = l;
        breadth =b;

    }
    
int area(){
    return length*breadth;
};

int perimeter(){
    int p = 2*(length+breadth);
    return p;
};
};

int main(){
     class rectangle r = {0,0};
    int l;
    int b;
    cout<<"enter length and breadth"<<endl;
    cin>>l>>b;

    r.initialize(l,b);
    int a = r.area();
    int p = r.perimeter();

    cout<<"Area is "<<a<<endl;
    cout<<"Perimeter is "<<p<<endl;
}


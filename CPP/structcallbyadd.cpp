#include <stdio.h>
#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void changelength (struct rectangle *p, int l ){
    p->length = l;
}

int area (struct rectangle r1){
    int a = r1.length * r1.breadth;
    return a;
}

int main(){ ;pppppppp;pp;;p;;;;
    struct rectangle r = {10,5};
    changelength(&r,20);
    int p = area(r);
    cout<<p<<endl;       

    return 0;
}
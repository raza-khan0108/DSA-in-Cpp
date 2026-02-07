#include <stdio.h>
#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;
public:
 rectangle(){                            //Default constructor
    length = 0;
    breadth = 0;
 }    
 rectangle(int l,int b){                //Parameterized constructor
    length = l;
    breadth = b;
 }
 int area(){                           //Facilitators
    return length * breadth;
 }
 int perimeter(){                     //Facilitators
    return 2*(length+breadth);
 }
 int getLength(){                    //Accessors
    return length;
 }
 int getBreadth(){                  //Accessors
    return breadth;
 }
 void setLength(int l){            //Mutuators
    length = l;
 }
 void setBreadth(int b){          //Mutuators
    breadth = b;
 }
 ~rectangle(){                   //Destructor
    cout<<"destructor"<<endl;
 }
};

int main(){
    rectangle r (10,5);
    cout<<"area is "<<r.area()<<endl;
    cout<<"perimeter is "<<r.perimeter()<<endl;

    return 0;
};
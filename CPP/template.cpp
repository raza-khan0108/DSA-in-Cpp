#include<stdio.h>
#include <iostream>
using namespace std;

template <class T>
class arithmetic{
 private:
 T a;
 T b;

 public:
 arithmetic(T a,T b);
  T add();
  T subtract();                            
};

template <class T>
arithmetic<T>::arithmetic(T a,T b){
    this->a=a;
    this->b =b;
}

template <class T>
T arithmetic<T>::add(){
    T c = a + b;
    return c;
}

template <class T>
T arithmetic<T>::subtract(){
    T c = a - b;
    return c;
}

int main(){
    arithmetic<float> ar(5.6 ,4.9 );
    cout<<"Addition is "<<ar.add()<<endl;
    cout<<"Subtraction is "<<ar.subtract()<<endl; 
}
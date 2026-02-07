#include<iostream>
#include<stdio.h>
using namespace std;

 struct Stack{
    int size;
    int top;
    int *s;
};

void display(struct Stack st){
    for(int i=st.top;i>=0;i--){
        cout<<st.s[i]<<endl;
    }
};

void push(struct Stack *st,int x){
    if(st->top==st->size-1){
        cout<<"Stack is full"<<endl;
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}

int pop(struct Stack *st){
    int x=-1;
    if(st->top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
    x=st->s[st->top];
    st->top--; }

    return x;
};

int peek(struct Stack st, int pos){
    int x=-1;
    if(st.top-pos+1<0){
        cout<<"Invalid position"<<endl;}
    else{
        x=st.s[st.top-pos+1];}
        return x;
    };

int StackTop(struct Stack st){
    if(st.top==-1){
       return -1;
    }
    else{
        return st.s[st.top];}
};    

int isEmpty(struct Stack st){
    if(st.top==-1){
        return 1;}
        else{
            return 0;}
};

int isFull(struct Stack st){
    if(st.top==st.size-1){
        return 1;}
    else{
        return 0;}
};

int main(){
    Stack st;
    cout<<"Enter size of stack"<<endl ;
    cin>> st.size;
    cout << endl;
    st.s=new int [st.size];
    st.top=-1;

    push(&st,5);
    push(&st,10);
    push(&st,15);
    push(&st,40);
    cout<<isFull(st)<<endl;
    
}
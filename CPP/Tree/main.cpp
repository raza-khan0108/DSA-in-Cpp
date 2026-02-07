#include <iostream>
#include "Queue.h"
using namespace std;

struct Node *root=NULL;
void Treecreate(){
    struct Node *t,*p;
    int x;
    struct Queue q;
    create(&q,100);
    cout<<"Enter root value"<<endl;
    cin>>x;
    root=new Node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);

    while(!isEmpty(&q)){
        p=dequeue(&q);

        cout<<"Enter left child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);

        }
        cout<<"Enter right child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
};

void preorder(struct Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
};

void inorder(struct Node *p){
    if(p!=NULL){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
};

void postorder(struct Node *p){
    if(p!=NULL){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
};

int count(struct Node *p){
    if(p!=NULL){
        return 1+count(p->lchild)+count(p->rchild);
    }
    else{
        return 0;
    }
};

int height(struct Node *root){
    int x=0,y=0;
    if(root==NULL){
        return 0;
    }
    else{
        x=height(root->lchild);
        y=height(root->lchild);
        if(x>y){
            return x+1;
        }
        else{
            return y+1;
        }

    }
};

int main(){
    Treecreate();
    cout<<"Count: "<<count(root)<<endl;
    cout<<"Height: "<<height(root)<<endl;
};
#include <iostream>
#include <stdio.h>
using namespace std;

struct Node{
    int data;
    struct Node* lchild;
    struct Node* rchild;
} *root=NULL;

struct Node *Insert(struct Node *p,int key){
    struct Node *t=NULL;
    if(p==NULL){
        t=new Node;
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }

    else{
        if(key<p->data){
            p->lchild=Insert(p->lchild,key);
        }
        else if(key>p->data){
            p->rchild=Insert(p->rchild,key);
        }
        else{
            return p;
        }
        return p;
    }

};

void inorder(struct Node *p){
    if(p!=NULL){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
};

int height(struct Node *p){
    int x=0;
    int y=0;
    if(p==NULL){
        return 0;
    }
    else{
        x=height(p->lchild);
        y=height(p->rchild);
        if(x>y){
        return x+1;}
        else{
            return y+1;
        }
    }
};

int InorderPre(struct Node*p){
    while(p&&p->rchild!=NULL){
        p=p->rchild;
    }
    return p->data;
};

int InorderSucc(struct Node*p){
    while(p&&p->lchild!=NULL){
        p=p->lchild;  
    }
    return p->data;
};



void preorder(struct Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
};

int main(){
    root=Insert(root, 10);
    Insert(root, 1);
    Insert(root, 3);
    Insert(root, 5);
    Insert(root, 15);
    Insert(root, 12);
    Insert(root, 16);

    inorder(root);
    cout<<endl;
    cout<<height(root)<<endl;


}
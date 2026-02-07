#include <iostream>
#include <stdio.h>
using namespace std;

struct Node{
    int data;
    struct Node* lchild;
    struct Node* rchild;
} *root=NULL;

void insert(int key){
// pointer T on root, pointer R on node before P and pointer P where new node to create.
    struct Node* t=root;
    struct Node* r=NULL;
    struct Node* p=NULL;

// Creation of root node
    if(root==NULL){
        p=new Node;
        p->data=key;
        p->lchild=NULL;
        p->rchild=NULL;
        root=p;
        return;
    }

//Search if element is already present in the BST
    while(t!=NULL){
        r=t;
        if(key==t->data){
            return;
        }
        else if(key<t->data){
            t=t->lchild;
        }
        else{
            t=t->rchild;}
    }

//If not then T becomes null and P is where new node is to be created. 
    p=new Node;
        p->data=key;
        p->lchild=NULL;
        p->rchild=NULL;

//Link the new node with the help of R pointer in the BSt
    if(p->data<r->data){
        r->lchild=p;
    }
    else{
        r->rchild=p;
    }
};

void inorder(struct Node *p){
    if(p!=NULL){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
};

struct Node * Search(int key){
    struct Node* t=root;
    while(t!=NULL){
        if(key==t->data){
            return t;
    }
        else if(key<t->data){
            t=t->lchild;
        }
        else{
            t=t->rchild;}
        }
    return NULL ;    
};

struct Node * Rinsert(struct Node *p,int key){
    //Creation of new node using t
    struct Node *t=NULL; 
    if(p==NULL){                      //If root is null
        t=new Node;
        t->data=key;
        t->lchild=NULL;
        t->rchild=NULL;
        return t;
    }
    else{
    if(key<p->data){
        p->lchild=Rinsert(p->lchild,key);
    }
    else if(key>p->data){
        p->rchild=Rinsert(p->rchild,key);
    }
    else{
        return p;
    }
    }
};

int main(){
    struct Node *temp;
    insert(10);
        insert(20);
            insert(8);
                insert(5);
                    insert(15);


    inorder(root);
    cout<< endl;

    temp=Search(15);
    if(temp){
        cout<<"Element found in BST : "<< temp->data <<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
};

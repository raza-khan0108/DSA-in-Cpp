#include <iostream>
#include <stdio.h>
using namespace std;

struct Node{
    int data;
    int height;
    struct Node* lchild;
    struct Node* rchild;
} *root=NULL;

int NodeHeight(struct Node *p){
    int Hl;
    int Hr;
    if(p!=NULL && p->lchild){
        Hl = NodeHeight(p->lchild);
    }
    else{
        Hl = 0;
    }

    if(p!=NULL && p->rchild){
        Hr = NodeHeight(p->rchild);
    }
    else{
        Hr = 0;
    }

    if(Hl>Hr){
        return Hl+1;
    }  
    else{
        return Hr+1;
    }
};

int BalanceFactor(struct Node *p){
    int Hl;
    int Hr;
    if(p!=NULL && p->lchild){
        Hl = NodeHeight(p->lchild);
    }
    else{
        Hl = 0;
    }

    if(p!=NULL && p->rchild){
        Hr = NodeHeight(p->rchild);
    }
    else{
        Hr = 0;
    }

    return Hl-Hr;
};

struct Node *LLRotation(struct Node *p){
    struct Node *pl=p->lchild;
    struct Node *plr=pl->rchild;

    pl->rchild=p;
    p->lchild=plr;
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);

    if(root==p){
        root=pl;
    }
    return pl;
};    

struct Node *LRRotation(struct Node *p){
    struct Node *pl=p->lchild;
    struct Node *plr=pl->rchild;

    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;
    plr->rchild=p;
    plr->lchild=pl;

    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);
    plr->height=NodeHeight(plr);

    if(root==p){
        root=plr;
    }
    return plr;
};

struct Node *Insert(struct Node *p,int key){
    struct Node *t=NULL;
    if(p==NULL){
        t=new Node;
        t->data=key;
        t->height=1;
        t->lchild=NULL;
        t->rchild=NULL;
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
    } 

       if (p != NULL) {
    p->height = NodeHeight(p);
}

    if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1){
        return LLRotation(p);
    }
    else if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1){
        return LRRotation(p);
    }
    return p;
};

int main(){
    root=Insert(root,10);
    Insert(root,5);
    Insert(root,2);

    return 0;

};


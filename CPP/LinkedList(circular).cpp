#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node
{
 int data;
 struct Node *next;
}*Head;

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 Head= new (Node);
 Head->data=A[0];
 Head->next=Head;
 last=Head;

 for(i=1;i<n;i++)
 {
    t= new (Node);
 t->data=A[i];
 t->next=last->next;
 last->next=t;
 last=t;
 }
};

void Display(struct Node *h)
{
 do
 {
    cout<<h->data<<" ";
 h=h->next;
 }while(h!=Head);
 cout<< endl;
};

//Insert in Circular linked list
void Insert(struct Node *p,int index,int x){
   struct Node *t;
   if(index==0){
      t=new Node;
      t->data=x;
      if(Head==NULL){
         Head=t;
         Head->next=Head;
      }
      else{
         p=Head;
         while(p->next!=Head){
         p=p->next;}
      }
      p->next=t;
      t->next=Head;
   }
   else{
      p=Head;
      for(int i=0;i<index-1;i++){
         p=p->next;}
         t=new Node;
         t->data=x;
         t->next=p->next;
         p->next=t;
   }
   };

//Delete in circular LInked List
void Delete(struct Node *p,int index){
struct Node *q;
int x;
if(index==0){
   while(p->next!=Head){
      p=p->next;
      x=Head->data;
   }
   if(p==Head){
      delete Head;
      Head=NULL;
   }
   else{
      p->next=Head->next;
      delete Head;
      Head=p->next;
   }
}
else{
   p=Head;
   for(int i=0;i<index-1;i++){
      p=p->next;}
      q=p->next;
      p->next=q->next;
      x=q->data;
      delete q;
}
};

int main()
{
 int A[]={2,3,4,5,6};
 create(A,5);
 Insert(Head,3,10);
 Delete(Head,5);
 Display(Head);
 return 0;
}
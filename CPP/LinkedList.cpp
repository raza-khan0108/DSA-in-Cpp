#include<stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
 int data;
 struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }

}
void Display(struct Node *p)            //Using Loop
{
 while(p!=NULL)
 {
 cout<<p->data<<" ";
 p=p->next;
 }
}

void RDisplay(struct Node *p)          //Using Recursion
{
 if(p!=NULL)
 {
   cout<< p->data<<" " ;
   RDisplay(p->next);
 }
}

//counting nodes using loop
int count(struct Node *p){
   int count=0;
   while(p!=0){
      count++;
      p=p->next;
   }
   return count;
}

//counting nodes using recursion
int rcount(struct Node *p){
   if(p==0){
      return 0;
   }
   else{
      return rcount(p->next)+1;
   }
}

//sum of all elements using loop
int sum(struct Node *p){
   int sum=0;
   while(p!=0){
      sum=sum+p->data;
      p=p->next;
   }
   return sum;
}

//sum of all elements using recursion
int rsum(struct Node *p){
   if(p==0){
      return 0;
   }
   else{
      return rsum(p->next) + p->data ;
   }
};   

//finding max element using loop
int max(struct Node *p){
   int max=INT_MIN;
   while(p) {
      if(p->data>max){
      max=p->data;
      p=p->next;}
   }
   return max;
};   

//Linear search in linked list
Node * search(struct Node *p,int key){
   while(p!=0){ 
      if(p->data==key){
       cout<<"Key is found "<< p->data << endl;
      }
      else{
         p=p->next;
      }
   } 
   return nullptr; 
};

//Insert element in linked list
void insert(struct Node *p,int index,int x){
   struct Node *t;
   if(index==0){
      t=new Node;
      t->data=x;
      t->next=first;
      first=t;
   }
   else if(index>0){
      p=first;
      for(int i=0;i<index-1;i++){
         p=p->next;
      }
      if(p){
         t=new Node;
         t->data=x;
         t->next=p->next;
         p->next=t;
      }
   }
}

//Inserting element in sorted Linked List
void SortedInsert(struct Node *p,int x){
   struct Node *t,*q=NULL;
   t=new Node;
   t->data=x;
   t->next=NULL;
   if(first==NULL){
      first=t;
   }
   else{
      while(p && p->data<x){
         q=p;
         p=p->next;
      }
      if(p==first){
         t->next=first;
         first=t;}
      else{
         t->next=q->next;
         q->next=t;}
      }   
   };

//to check if linked list is sorted
int sorted(struct Node *p){
   int x=-9999;
   while(p){
      if(p->data<x){
         return 0;
      }
      else{
         x=p->data;
         p=p->next;
      }
   }
   return 1;
}

//Reverse a linked list
void Reverse(struct Node *p){
   struct Node *q=NULL,*r=NULL;
   while(p){
      r=q;
      q=p;
      p=p->next;
      q->next=r;
   }
   first=q;
}


int main(){
 struct Node *temp;
 int A[]={3,5,7,10,25,8};
 create(A,6);

 cout<<endl;
 cout<<"Length is "<< rcount(first)<<endl;
 cout<<"sum is "<< rsum(first)<<endl;
 insert(first,0,1);
 SortedInsert(first,22);
 cout<<sorted(first)<<endl;
 Reverse(first);
 RDisplay(first);
 return 0;
}
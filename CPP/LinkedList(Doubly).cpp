#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node
{
 int data;
 struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

void Display(struct Node *p)
{
 while(p!=NULL)
 {
 cout<<p->data<<" ";
 p=p->next;
 }
}

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=new Node;
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=new Node;
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }

}
int main()
{

 int A[]={10,20,40,50,60};
 create(A,5);

 Display(first);

 return 0;
}
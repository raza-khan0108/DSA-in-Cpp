#include <iostream>
#include <iostream>

using namespace std;

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue {
    int size;
    int front;
    int rear;
    Node **Q;
};

void create(struct Queue *q,int size){
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new Node* [size];
};


void enqueue (struct Queue *q, Node* x){
    if (q->rear == q->size - 1){
        cout<<"Queue is full"<<endl;
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
};

Node* dequeue(struct Queue *q){
    Node* x = NULL;
    if (q->front == q->rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
};

int isEmpty(struct Queue *q){
    if (q->front == q->rear){
        return 1;}
    else{
        return 0;}
};
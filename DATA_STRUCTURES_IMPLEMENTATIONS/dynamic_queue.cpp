#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct 
{
    Node *front;
    Node *rear;
}qu;

void __init(qu*q){
    q->front=q->rear=NULL;
}

bool empty(qu*q){
    return q->front==NULL;
}
void push(qu*q,int val){
    Node *nwnode=(Node*)malloc(sizeof(Node));
    if(nwnode==NULL){
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    nwnode->data=val;
    nwnode->next=NULL;
    if(empty(q)){
        q->front=q->rear=nwnode;
    }
    else{
        q->rear->next=nwnode;
        q->rear=nwnode;
        // q->rear=q->rear->next;
    }

}
int pop(qu*q){
    if(empty(q)){
        printf("Queue is empty\n");
        exit(EXIT_FAILURE);
    }
    Node *temp=q->front;
    q->front=q->front->next;
    int val=temp->data;
    free(temp);
    if(q->front==NULL){
        q->rear=NULL;
    }
    return val;
}
void display(qu*q){
// qu *temp=q;
    Node *t=q->front;
    while(t!=NULL){
        printf("%d ",t->data);
        t=t->next;
    }    
    printf("\n");
}

int main(){
    qu q;
    __init(&q);
    push(&q,1);
    push(&q,2);
    push(&q,3);
    display(&q);
    printf("%d",pop(&q));
    printf("\n");
    display(&q);
}




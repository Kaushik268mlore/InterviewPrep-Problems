#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
typedef struct{
    int data[MAX_SIZE];
    int front,rear;
}Q;

void __init(Q*q){
    q->front=q->rear=-1;
}
bool empty(Q*q){
    return q->front==-1;
}
bool full(Q*q){
    return (q->rear+1)%MAX_SIZE==q->front;
}
void push(Q*q,int val){
    if(!full(q)){
        if(empty(q)){
            q->front=q->rear=0;
        }
        else{
            q->rear=(q->rear+1)%MAX_SIZE;
        }
        q->data[q->rear]=val;
    }

}
int pop(Q*q){
    if(!empty(q)){
        // if(full())
        int val=q->data[q->front];
        if(q->front==q->rear){
            q->front=q->rear=-1;
        }
        else{
            q->front=(q->front+1)%MAX_SIZE;
        }
        return val;
    }
    return -1;
}
int peek(Q*q){
    return q->data[q->front];
}
int main(){
    Q q;
    __init(&q);
    push(&q,1);
    push(&q,2);
    push(&q,3);
    for(int i=0;i<3;i++){
        printf("%d ",pop(&q));
    }
    printf("%d",empty(&q));
}


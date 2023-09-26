#include<stdio.h>
#include<stdlib.h>
// This is the Dynamic Stack implementation , as done in the C++ STL.
typedef struct Node{
    int data;
    Node *next;
}Node;
typedef struct{
    Node*top;
}stack;

void __init(stack*st){
    st->top=NULL;
}
bool empty(stack*st){
    return st->top==NULL;
}
void push(stack*st,int val){
    Node * newnode=(Node*)malloc(sizeof(Node));
    if(newnode==NULL){
        printf("Memory Allocation Failed!!\n");
        exit(EXIT_FAILURE);
    }
    newnode->data=val;
    newnode->next=st->top;
    st->top=newnode;
}
int pop(stack*st){
    if(empty(st)){
            printf("Pop Failure\n");
            exit(EXIT_FAILURE);
    }
    int val=st->top->data;
    Node *temp=st->top;
    st->top=temp->next;
    free(temp);
    return val;
}
int peek(stack*st){
    if(empty(st)){
        printf("Peek Failure\n");
            exit(EXIT_FAILURE);
    }
    return st->top->data;
}
void print(stack*st){
    Node*temp=st->top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    stack st;
    __init(&st);
    push(&st,3);
    push(&st,2);
    push(&st,3);
    print(&st);
    pop(&st);
    print(&st);
    printf("Peek val: %d",peek(&st));
    return 0;
}
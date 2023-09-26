#include<stdio.h>
#include<stdlib.h>
// This is a static stack, where there's a predefined size.
#define MAX_SIZE 100
typedef struct{
    int arr[MAX_SIZE];
    int top;
}stack;
void init(stack*st){
    st->top=-1;
}
bool empty(stack*st){
    return st->top==-1;
}
bool full(stack*st){
    return st->top==MAX_SIZE-1;
}
void push(stack*st,int val){
    if(!full(st))st->arr[++st->top]=val;
}
int pop(stack*st){
    if(!empty(st)){
        return st->arr[st->top--];
    }
    return -1;
}
int peek(stack*st){
    if(!empty(st)){
        return st->arr[st->top];
    }
    return -1;
}
void print(stack*st){
    int sz=st->top;
    for(int i=0;i<=sz;i++)printf("%d ",st->arr[i]);
    printf("\n");
}

int main(){
    stack st;
    init(&st);
    push(&st,1);
    push(&st,2);
    push(&st,3);
    print(&st);
    printf("popped %d\n",pop(&st));
    print(&st);
    printf("Peek %d\n",peek(&st));
    print(&st);
}
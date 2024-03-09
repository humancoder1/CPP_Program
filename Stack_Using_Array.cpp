#include<bits/stdc++.h>
using namespace std;

//Structure of stack
typedef struct Stack{
    int top;
    unsigned Capacity;
    int * array;
} Stacks ;

// function to creste a stack   
Stacks* create_structure(int capacity){
    Stacks* stack = (Stacks*) malloc(sizeof ( Stacks));
    stack->Capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->Capacity*sizeof(int));
    return stack;
}

void push(Stacks* stack , int item){
    if(isFull(stack)) return ;
    stack->top = stack->top+1;
    stack->array[stack->top] = item;
    cout << "item assigend" << endl;
}


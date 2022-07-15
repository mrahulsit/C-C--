#include <stdio.h>
#include <string.h>
 
int stack[100],top=-1,size;
int isFull() {   
    if(top >= size-1)
        return 1;
    else
        return 0;
}
int isEmpty() {
 if(top == -1)
     return 1;
 else
     return 0;
}
void push(int num) {
    if (isFull())
        printf("Stack is Full...\n");
    else {
        stack[top] = num;
        top++;
    }
}
int pop() {
    if (isEmpty())
        printf("Stack is Empty...\n");
    else {
     top = top - 1;
    }
}
 
int main() {
    char inputString[100], c;
    int i, length;
    initialize();
    printf("Enter a string of paranthesis\n");
    gets(inputString);
    length = strlen(inputString);
    for(i = 0; i < length; i++){
        if(inputString[i] == '{')
            push(inputString[i]);
        else if(inputString[i] == '}')
            pop();
        else {
            printf("Error : Invalid Character !! \n");
            return 0;
        }
    }
     
    if(isEmpty())
        printf("Valid Paranthesis Expression\n");
    else
        printf("InValid Paranthesis Expression\n");
         
    return 0;
}
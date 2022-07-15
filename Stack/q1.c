#include<stdio.h>
#include<stdlib.h>
int stack[30],size,top=-1;
int isFull(){
    if(top==size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int value){
    if(isFull()==1){
        printf("Stack Overflow\n");
    }
    else{
        top++;
        stack[top]=value;
    }
}
int pop(){
    if (isEmpty()==1)
    {
        printf("Stack Underflow");
    }
    else{
        top--;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        printf("Elements of Stack are : \n");
        for(i=top;i>=0;i--){
            printf(" %d ",stack[i]);
        }
    }
}
int main()
{
    int ch,value;
    printf("Enter Size of Stack : ");
    scanf("%d",&size);
    while(1){
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value to Push : ");
            scanf("%d",&value);
            push(value);
            display();
            break;
        case 2:pop();
            display();
            break;
        case 3:display();
        break;
        case 4:exit(0);
        default:printf("Wrong Choice");
            break;
        }
    }
    return 0;
}

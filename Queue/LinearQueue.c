#include<stdio.h>
#include<stdlib.h>
int queue[100],size,front=-1,rear=-1;
int isFull(){
    if (rear==size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(front==-1 || front==rear+1){
        return 1;
    }
    else{
        return 0;
    }
}
void insert(){
    int value;
    if(isFull()==1){
        printf("\n  Queue Overflow");
    }
    else{
        printf("\nEnter value to insert in queue : ");
        scanf("%d",&value);
        if(rear==-1){
            front++;
        }
        rear++;
        queue[rear]=value;
    }
}
void delete(){
    if(isEmpty()==1){
        printf("Queue Underflow");
    }
    else{
        front++;
    }
}
void display(){
    int i;
     if(isEmpty()==1){
        printf("Queue Underflow");
    }
    else{
        printf("Elements of Queue are : \n");
        for(i=front;i<=rear;i++){
            printf(" %d ",queue[i]);
        }
    }
}
int main(){
    int ch;
    printf("Enter Size of Queue : ");
    scanf("%d",&size);
    while (1){
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your Choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("Wrong Choice");
        }
    }
}

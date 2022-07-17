#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node *next ;
}node;
node *front=NULL,*rear=NULL;

void insert(){
    node*newnode;
    int value;
    node*temp;
    newnode=(node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("\nQueue is Full");
    }
    else{
        printf("\nEnter Value to Insert  : ");
        scanf("%d",&value);
        newnode->info=value;
        newnode->next=NULL;
        if(front==NULL){
            front=newnode;
        }
        else{
            temp=front;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
}

void delete(){
    node*temp;
        if(front==NULL){
            printf("\nQueue is Empty\n");
        }
        else{
            temp=front;
            front=front->next;
            free(temp);
        }
    }

void display(){
    node*temp;
    if(front==NULL){
        printf("\nQueue is Empty\n");
    }
    else{
        temp=front;
        printf("\nElements of Queue are : ");
        while(temp!=NULL){
            printf(" %d\n ",temp->info);
            temp=temp->next;
        }
    }
}

int main(){
    int ch;
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

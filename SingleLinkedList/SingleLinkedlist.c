#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node*next;
}node;
node*start=NULL;

void insertAtfirst(){
    node*newnode;
    int value;
    newnode=(node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("\nMemory not Allocated");
    }
    else{
        printf("\nEnter Value to Insert at Beginning  : ");
        scanf("%d",&value);
        newnode->info=value;
        newnode->next=NULL;
        if(start==NULL){
            start=newnode;
        }
        else{
            newnode->next=start;
            start=newnode;
        }
    }
}

void insertAtend(){
    node*newnode;
    int value;
    node*temp;
    newnode=(node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("\nMemory not Allocated");
    }
    else{
        printf("\nEnter Value to Insert at Beginning  : ");
        scanf("%d",&value);
        newnode->info=value;
        newnode->next=NULL;
        if(start==NULL){
            start=newnode;
        }
        else{
            temp=start;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
}

void insertAfternode(){
    node*newnode;
    int value;
    node*temp;
    newnode=(node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("\nMemory not Allocated");
    }
    else{
        printf("\nEnter the value to insert : ");
        scanf("%d",&value);
        newnode->info=value;
        newnode->next=NULL;
        if(start==NULL){
            start=newnode;
        }
        else{
            printf("Enter the value after which you want to Insert : ");
            scanf("%d",&value);
            temp=start;
            while(temp !=NULL && temp->info!=value){
                temp=temp->next;
            }
            if(temp==NULL){
                printf("\nNode not present\n");
            }
            else{
                newnode->next=temp->next;
                temp->next=newnode;
            }
        }
    }
}

void insertLocation(){
    node*newnode,*temp,*ctr;
    int value,loc,c=1;
    newnode=(node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("\nMemory not Allocated");
    }
    else{
        printf("\nEnter the value to insert : ");
        scanf("%d",&value);
        newnode->info=value;
        newnode->next=NULL;
        if(start==NULL){
            start=newnode;
        }
        else{
            printf("Enter the value after which you want to Insert : ");
            scanf("%d",&loc);
            temp=start;
            while(temp!=NULL && c!=loc ){
                c++;
                ctr=temp;
                temp=temp->next;
            }
            if(temp==NULL){
                printf("\nNode not present\n");
            }
            else{
                ctr->next=newnode;
                newnode->next=temp;
            }
        }
    }
}

void Deletefirst(){
    node*temp;
        if(start==NULL){
            printf("\nList is Empty\n");
        }
        else{
            temp=start;
            start=start->next;
            free(temp);
        }
    }

void DeleteEnd(){
    node*temp,*ptr;
    if(start==NULL){
            printf("\nList is Empty\n");
        }
        else{
            temp=start;
                if(start->next==NULL){
                    start=NULL;}
                else{
                    while(temp->next!=NULL){
                        ptr=temp;
                        temp=temp->next;}
                    ptr->next=NULL;
                    free(temp);
                }
        }
}

void DeleteAfterNode(){
    node*temp,*ptr;
    int value;
    if(start==NULL){
        printf("\nList is Empty\n");
    }
    else{
        ptr=start;
        printf("Enter Value after which to Enter : ");
        scanf("%d",&value);
        while(ptr !=NULL && ptr->info!=value){
            ptr=ptr->next;
        }
        if(ptr==NULL){
            printf("\nNode is not present");
        }
        else if(ptr->next==NULL){
            printf("\nNo Node present after this Node");
        }
        else{
            temp=ptr->next;
            ptr->next=temp->next;
            free(temp);
        }
    }
}

void DeleteAtLocation(){
    node*temp,*ctr;
    int loc,c=1;
    if(start==NULL){
        printf("\nList is Empty\n");
    }
    else{
        temp=start;
        printf("Enter Location at which to Delete : ");
        scanf("%d",&loc);
        while(temp!=NULL && c!=loc){
            c++;
            ctr=temp;
            temp=temp->next;
        }
        if(temp==NULL && temp->next==NULL){
            printf("\nNode is not Present");
        }
        else if (loc==1)
        {
            start=start->next;
            free(temp);
        }
        else{
            ctr->next=temp->next;
            free(temp);
        }
    }
}

void traverse(){
    node*temp;
    if(start==NULL){
        printf("\nList is Empty\n");
    }
    else{
        temp=start;
        printf("\nValues of Linked List are : ");
        while(temp!=NULL){
            printf(" %d ",temp->info);
            temp=temp->next;
        }
    }
}

int main(){
    int ch;
    while (1)
    {
        printf("\nEnter Your Choice\n1.EXIT\n2.Traverse the List\n");
        printf("3.Insert at Beginning\n4.Insert at End\n");
        printf("5.Insert after Node\n6.Insert at a Given Location\n");
        printf("7.Delete First Node\n8.Delete the last Node\n");
        printf("9.Delete after Node\n10.Delete at a Given Location\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:exit(0);
        case 2:traverse();
            break;
        case 3:insertAtfirst();
            break;
        case 4:insertAtend();
            break;
        case 5:insertAfternode();
            break;
        case 6:insertLocation();
            break;
        case 7:Deletefirst();
            break;
        case 8:DeleteEnd();
            break;
        case 9:DeleteAfterNode();
            break;
        case 10:DeleteAtLocation();
            break;
        default:printf("\nWrong Choice!!");
            break;
        }
    }
}

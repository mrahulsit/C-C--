#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node *next;
}node;
node*top=NULL;
void push();
void pop();
void display();

void push(int value)
{
	node *newnode;
	newnode = (node *)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("\nStack Overflow\n");
	}
	else
	{
		newnode->info = value;
		newnode->next = NULL;
		if(top == NULL)
		{
			top = newnode;
		}
		else
		{
			newnode->next = top;
			top = newnode;
		}
	}	
}

void pop(){
    node*temp;
        if(top==NULL){
            printf("\nStack is Empty\n");
        }
        else{
            temp=top;
            top=top->next;
            printf("Deleted Value : %d",temp->info);
            free(temp);
        }
    }

void display(){
    node*temp;
    if(top==NULL){
        printf("\nStack is Empty\n");
    }
    else{
        temp=top;
        printf("\nValues of Linked List are : ");
        while(temp!=NULL){
            printf(" %d ",temp->info);
            temp=temp->next;
        }
    }
}

int main()
{
    int ch,value;
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
            break;
        case 2:pop();
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
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *top =0;

void push(int x){
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void pop(){
    struct node *temp;
    temp =top;
    if(top==0){
        printf("Stack is empty");
    }else{
        printf("Pop element %d", temp->data);
        top=top->link;
        free(temp);
    }
}

void display(){
    struct node *temp;
    temp=top;
    if(top==0){
        printf("list is empty");
    }else{
        while (temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->link;
        }
        
    }
}


int main(){
    push(5);
    
    push(4);
    display();
}
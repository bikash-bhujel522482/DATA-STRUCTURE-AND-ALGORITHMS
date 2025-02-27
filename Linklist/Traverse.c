#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head)
{
    int count = 0;
    if(head==NULL)
        printf("Linked List is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("%d",count);
}
int main ()
{
     //head = (struct node*)malloc(sizeof(struct node)); Or
    struct node *head =malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current =malloc(sizeof(struct node));
    current->data = 98;
    current->link=NULL;
    head->link = current;

    /*current =malloc(sizeof(struct node));
    current->data = 3;
    current->link =NULL;

    head->link->link = current;*/

    count_of_nodes(head);

    // Free the allocated memory
    current = head;
    struct node *temp; 
    while(current != NULL){
        temp = current;
        current = current->link;
        free(temp);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int val;
    struct node* next;
};


void reverseList (struct node** head)
{
    struct node* current = *head;
    struct node* prev = NULL;
    struct node* next;
    
    
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;

}
struct node* Build()
{
    struct node* head;
    struct node* two;
    head = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    head->val = 2;
    head->next = two;
    two->val = 3;
    two->next = NULL;
    return head;
}
int main()
{
    struct node* head = Build();
    struct node* newNode;
    struct node* tail;
    struct node* temp;

    /* Before reversing */
    printf("List Before reversing\n");
    temp = head;
    while(temp !=NULL) {
        printf("value = %d\n", temp->val);
        temp = temp->next;
    }
    
    /* Reverse list */
    reverseList(&head);
    
    /* After reversing */
    printf("List After reversing\n");
    temp = head;
    while(temp !=NULL) {
        printf("value = %d\n", temp->val);
        temp = temp->next;
    }
 
    return 0;
}

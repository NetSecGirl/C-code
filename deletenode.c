#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int val;
    struct node* next;
};

void deleteNode(struct node* node) {
    struct node* temp;
    
    temp = node->next;
    /* copy next node val */
    node->val = temp->val;
    /* point next of next node to current next */
    if(temp->next == NULL)
        node->next = NULL;
    else
        node->next = temp->next;
    /* free next */
    free(temp);
    
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
    int count = 0;
    newNode = malloc(sizeof(struct node));
    tail = malloc(sizeof(struct node));
    
    /* Push node to head*/
    newNode->val = 1;
    newNode->next = head;
    
    head = newNode;
    
    /*push node to tail */
    tail->val = 4;
    tail->next = NULL;
    temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = tail;
    
    deleteNode(head);
    temp = head;
    while(temp !=NULL) {
        printf("value = %d\n", temp->val);
        temp = temp->next;
        count ++;
    }
        
    printf("Count = %d", count);
    return 0;
}

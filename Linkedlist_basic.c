#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};

/* Compute length of the linked list */
int length_of_ll (struct node* head)
{
    struct node* current = head;
    int count = 0;

    while (current !=NULL)
    {
        count++;
        printf ("val %d\n", current->val);
        current = current->next;
    }
    return count;
}

int main()
{
    /* initialize the structures */
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    
    int total_elem = 0;

    /* Allocate memory to the linked list structure */
    head = malloc (sizeof(struct node));
    second = malloc (sizeof(struct node));
    third = malloc (sizeof(struct node));

    head->val = 10;
    head->next = second;

    second->val = 15;
    second->next = third;

    third->val = 28;
    third->next = NULL;

    /* Compute length of the linked list */
    total_elem = length_of_ll(head);

    printf("total elem = %d\n", total_elem);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};

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
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    int total_elem = 0;

    head = malloc (sizeof(struct node));
    second = malloc (sizeof(struct node));
    third = malloc (sizeof(struct node));

    head->val = 10;
    head->next = second;

    second->val = 15;
    second->next = third;

    third->val = 28;
    third->next = NULL;

    total_elem = length_of_ll(head);

    printf("total elem = %d\n", total_elem);
    return 0;
}
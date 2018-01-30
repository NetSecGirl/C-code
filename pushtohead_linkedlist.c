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

struct node* pushtohead (struct node* head)
{
    /* Allocat */
    struct node* new_elem;
    new_elem = malloc (sizeof(struct node));
    new_elem->val = 100;

    /* link next */
    new_elem->next = head;

    /* link head */
    head = new_elem;

    return head;
}
struct node* Buildlist ()
{
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = malloc (sizeof(struct node));
    second = malloc (sizeof(struct node));
    third = malloc (sizeof(struct node));

    head->val = 10;
    head->next = second;

    second->val = 15;
    second->next = third;

    third->val = 28;
    third->next = NULL;

    return head;
}

int main()
{
    struct node* head = NULL;
    int total_elem = 0;


    head = Buildlist();
    /* push new element to head of the list */
    head = pushtohead(head);
    total_elem = length_of_ll(head);

    printf("total elem = %d\n", total_elem);
    return 0;
}

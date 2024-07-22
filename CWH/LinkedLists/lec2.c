#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element :  %d \n", ptr->data);
        ptr = ptr->next;
    }
}

// insert at first.....................

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// insert at index

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// insert at the end

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// insert after a node

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;

    return ptr;
}

// deleting the first element from the linked list

struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// deleting the element at a gibven index

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// deleting at the last

struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// deleting the element witha given value

struct Node *deleteByValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

    return head;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second nodes
    head->data = 7;
    head->next = second;

    // link second and third nodes
    second->data = 11;
    second->next = third;

    // link second and fourth nodes
    third->data = 41;
    third->next = fourth;

    // terminate the list at the 4th note

    fourth->data = 66;
    fourth->next = NULL;

    // LinkedListTraversal(head);

    // head = insertAtFirst(head, 204);
    // LinkedListTraversal(head);

    // insertAtFirst

    // head = insertAtIndex(head,505, 2);
    // LinkedListTraversal(head);

    // insert at the end

    // head = insertAtEnd(head, 1022);
    // LinkedListTraversal(head);

    // isert after a node

    head = insertAfterNode(head, second, 450);
    head = insertAfterNode(head, third, 4500);

    // LinkedListTraversal(head);

    // deletion..................

    printf("Linked list before deletion\n");
    LinkedListTraversal(head);

    // head = deleteFirst(head); // for deleting the first element in the list

    // head = deleteAtIndex(head, 2);   // deletion at index

    // head = deleteAtLast(head);

    // head = deleteByValue(head, 41);

    printf("Linked List after deletion\n");
    LinkedListTraversal(head);

    return 0;
}
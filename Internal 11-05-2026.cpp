#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *prev, *next;
};

struct Node* newNode(int data) 
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data; node->prev = node->next = NULL;
    return node;
}

void insertBegin(struct Node **head, int data) 
{
    struct Node* node = newNode(data);
    if (*head) 
    { 
     node->next = *head; (*head)->prev = node; 
    }
    *head = node;
}

void insertEnd(struct Node **head, int data) 
{
    struct Node* node = newNode(data);
    if (!*head) 
    { 
        *head = node; 
    return; 
        
    }
    struct Node* temp = *head;
    while (temp->next) temp = temp->next;
    temp->next = node; node->prev = temp;
}

void insertPos(struct Node **head, int data, int pos) 
{
    if (pos == 1) { insertBegin(head, data); 
    return; 
        
    }
    struct Node* temp = *head;
    for (int i = 1; i < pos - 1 && temp; i++) temp = temp->next;
    if (!temp) 
    { 
    printf("Position out of range\n"); 
    return; 
    }
    struct Node* node = newNode(data);
    node->next = temp->next;
    if (temp->next) temp->next->prev = node;
    temp->next = node; node->prev = temp;
}

void display(struct Node *head) 
{
    printf("List: ");
    while (head) 
    { 
    printf("%d ", head->data); head = head->next; }
    printf("\n");
}

int main() {
    struct Node *head = NULL;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    display(head);
    insertBegin(&head, 5);
    display(head);
    insertPos(&head, 15, 3);
    display(head);
    return 0;
}


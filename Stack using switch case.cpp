#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;
struct stack *temp;


void push()
{
    struct stack *newnode;
    newnode = (struct stack *)malloc(sizeof(struct stack));

    printf("\nEnter data: ");
    scanf("%d", &newnode->data);

    newnode->next = top;
    top = newnode;
}


void pop()
{
    if (top == NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        temp = top;
        top = top->next;
        printf("\nThe popped element is %d", temp->data);
        free(temp);
    }
}


void peek()
{
    if (top == NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nTop value is %d", top->data);
    }
}


void display()
{
    if (top == NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        temp = top;
        printf("\nStack elements:\n");
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}


int main()
{
    int choice;

    while (1)
    {
        printf("\n\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid option");
        }
    }
    return 0;
}

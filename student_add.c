
#include "student.h"

void addStudent(void)
{
    struct student *newnode, *temp;

    newnode = malloc(sizeof(struct student));

    if (newnode == NULL)
    {
        printf("\nMemory allocation failed!");
        return;
    }

    newnode->roll = nextRoll++;

    printf("\nGenerated Roll Number: %d", newnode->roll);

    printf("\nEnter Student Name: ");
    scanf(" %99[^\n]", newnode->name);

    printf("Enter Marks: ");

    if (scanf("%f", &newnode->marks) != 1 ||
        newnode->marks < 0 || newnode->marks > 100)
    {
        printf("\nInvalid marks! Enter marks between 0 and 100.");
        while (getchar() != '\n');
        free(newnode);
        return;
    }

    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
    }

    printf("\nStudent added successfully!");
}

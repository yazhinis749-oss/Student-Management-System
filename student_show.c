
#include "student.h"

void displayRecursive(struct student *temp)
{
    if (temp == NULL)
        return;

    printf("\n%-10d %-25s %-10.2f",
           temp->roll, temp->name, temp->marks);

    displayRecursive(temp->next);
}

void displayStudent(void)
{
    if (head == NULL)
    {
        printf("\nNo student records found!");
        return;
    }

    printf("\n%-10s %-25s %-10s",
           "ROLL", "NAME", "MARKS");

    printf("\n------------------------------------------------");

    displayRecursive(head);
}

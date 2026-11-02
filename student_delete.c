
#include "student.h"

void deleteStudent(void)
{
    struct student *temp, *prev = NULL;

    int roll;
    char choice;

    if (head == NULL)
    {
        printf("\nNo records available!");
        return;
    }

    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &roll);

    temp = head;

    while (temp != NULL && temp->roll != roll)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("\nStudent not found!");
        return;
    }

    printf("\nRoll Number: %d", temp->roll);
    printf("\nName: %s", temp->name);

    printf("\nAre you sure you want to delete? (Y/N): ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y')
    {
        if (prev == NULL)
            head = temp->next;
        else
            prev->next = temp->next;

        free(temp);

        printf("\nStudent deleted successfully!");
    }
    else
    {
        printf("\nDeletion cancelled!");
    }
}

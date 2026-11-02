
#include "student.h"

void searchStudent(void)
{
    struct student *temp = head;
    int roll;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    while (temp != NULL)
    {
        if (temp->roll == roll)
        {
            printf("\nStudent Found!");

            printf("\nRoll Number: %d", temp->roll);
            printf("\nName: %s", temp->name);
            printf("\nMarks: %.2f", temp->marks);

            return;
        }

        temp = temp->next;
    }

    printf("\nStudent not found!");
}

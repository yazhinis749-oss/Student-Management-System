
#include "student.h"

void updateStudent(void)
{
    struct student *temp = head;

    int roll;
    char choice;
    char newName[100];
    float newMarks;

    printf("\nEnter Roll Number to Update: ");
    scanf("%d", &roll);

    while (temp != NULL && temp->roll != roll)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("\nStudent not found!");
        return;
    }

    printf("\nRoll Number: %d", temp->roll);
    printf("\nName: %s", temp->name);
    printf("\nMarks: %.2f", temp->marks);

    printf("\nDo you want to update? (Y/N): ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y')
    {
        printf("\nEnter New Name: ");
        scanf(" %99[^\n]", newName);

        printf("Enter New Marks: ");

        if (scanf("%f", &newMarks) != 1 ||
            newMarks < 0 || newMarks > 100)
        {
            printf("\nInvalid marks!");
            while (getchar() != '\n');
            return;
        }

        strcpy(temp->name, newName);
        temp->marks = newMarks;

        printf("\nRecord updated successfully!");
    }
    else
    {
        printf("\nUpdate cancelled!");
    }
}

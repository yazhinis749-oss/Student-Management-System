
#include "student.h"

void loadFile(void)
{
    struct student *newnode, *temp;
    FILE *fp;

    int roll;
    char name[100];
    float marks;

    fp = fopen("students.dat", "rb");

    if (fp == NULL)
        return;

    while (fread(&roll, sizeof(int), 1, fp) == 1)
    {
        if (fread(name, sizeof(name), 1, fp) != 1)
            break;

        if (fread(&marks, sizeof(float), 1, fp) != 1)
            break;

        name[99] = '\0';

        newnode = malloc(sizeof(struct student));

        if (newnode == NULL)
        {
            printf("\nMemory allocation failed!");
            break;
        }

        newnode->roll = roll;
        strcpy(newnode->name, name);
        newnode->marks = marks;
        newnode->next = NULL;

        if (roll >= nextRoll)
            nextRoll = roll + 1;

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
    }

    fclose(fp);
}

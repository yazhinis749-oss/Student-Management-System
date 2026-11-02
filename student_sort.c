
#include "student.h"

void sortStudent(void)
{
    struct student *i, *prevI;
    struct student *temp;

    if (head == NULL || head->next == NULL)
    {
        printf("\nNot enough records to sort!");
        return;
    }

    struct student *sorted = NULL;

    while (head != NULL)
    {
        struct student *min = head;
        struct student *minPrev = NULL;

        prevI = head;
        i = head->next;

        while (i != NULL)
        {
            if (strcmp(i->name, min->name) < 0)
            {
                min = i;
                minPrev = prevI;
            }

            prevI = i;
            i = i->next;
        }

        if (minPrev == NULL)
            head = min->next;
        else
            minPrev->next = min->next;

        min->next = NULL;

        if (sorted == NULL)
        {
            sorted = min;
        }
        else
        {
            temp = sorted;

            while (temp->next != NULL)
                temp = temp->next;

            temp->next = min;
        }
    }

    head = sorted;

    printf("\nStudents sorted alphabetically!");
}

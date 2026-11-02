
#include "student.h"

void saveFile(void)
{
    struct student *temp = head;
    FILE *fp;

    fp = fopen("students.dat", "wb");

    if (fp == NULL)
    {
        printf("\nFile opening failed!");
        return;
    }

    while (temp != NULL)
    {
        fwrite(&temp->roll, sizeof(int), 1, fp);
        fwrite(temp->name, sizeof(temp->name), 1, fp);
        fwrite(&temp->marks, sizeof(float), 1, fp);

        temp = temp->next;
    }

    fclose(fp);

    printf("\nRecords saved successfully!");
}

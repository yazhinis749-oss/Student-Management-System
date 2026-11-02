
#include "student.h"

struct student *head = NULL;
int nextRoll = 1;

int main(void)
{
    int ch;
    struct student *temp;

    loadFile();

    do
    {
        printf("\n\n===== STUDENT MANAGEMENT SYSTEM =====");

        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Update Student");
        printf("\n4. Search Student");
        printf("\n5. Sort Students");
        printf("\n6. Delete Student");
        printf("\n7. Save and Exit");
        printf("\n8. Exit Without Saving");

        printf("\n\nEnter your choice: ");

        if (scanf("%d", &ch) != 1)
        {
            printf("\nInvalid input!");
            while (getchar() != '\n');
            continue;
        }

        switch (ch)
        {
            case 1:
                addStudent();
                displayStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                updateStudent();
                displayStudent();
                break;

            case 4:
                searchStudent();
                break;

            case 5:
                sortStudent();
                displayStudent();
                break;

            case 6:
                deleteStudent();
                displayStudent();
                break;

            case 7:
                saveFile();
                break;

            case 8:
                printf("\nExiting without saving changes!");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while (ch != 7 && ch != 8);

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int roll;
    char name[100];
    float marks;
    struct student *next;
};

extern struct student *head;
extern int nextRoll;

void addStudent(void);
void displayStudent(void);
void updateStudent(void);
void searchStudent(void);
void sortStudent(void);
void deleteStudent(void);

void saveFile(void);
void loadFile(void);

void displayRecursive(struct student *temp);

#endif

CC = gcc

CFLAGS = -Wall -Wextra

TARGET = student

SOURCES = mainfile.c student_add.c student_show.c student_modify.c student_search.c student_sort.c student_delete.c student_load.c student_save.c

all:
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET) $(TARGET).exe

#ifndef SERVER_H
#define SERVER_H

typedef struct {
    int year;
    int month;
    int day;
} DATE;

typedef struct {
    char name[50];
    char tele[20];
    DATE birth;
} NOTE;

void sortNotes(NOTE notes[], int size);
int findByPhone(NOTE notes[], int size, char phone[]);

#endif

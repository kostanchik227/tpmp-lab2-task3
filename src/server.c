#include <string.h>
#include "server.h"

void sortNotes(NOTE notes[], int size)
{
    NOTE temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {

            int d1 =
                notes[i].birth.year * 10000 +
                notes[i].birth.month * 100 +
                notes[i].birth.day;

            int d2 =
                notes[j].birth.year * 10000 +
                notes[j].birth.month * 100 +
                notes[j].birth.day;

            if (d1 > d2) {
                temp = notes[i];
                notes[i] = notes[j];
                notes[j] = temp;
            }
        }
    }
}

int findByPhone(NOTE notes[], int size, char phone[])
{
    for (int i = 0; i < size; i++) {
        if (strcmp(notes[i].tele, phone) == 0) {
            return i;
        }
    }

    return -1;
}

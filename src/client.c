#include <stdio.h>
#include <string.h>

#include "client.h"
#include "server.h"
#include "interface.h"

void processNotes(NOTE notes[], int size)
{
    char phone[20];

    sortNotes(notes, size);

    printf("\nEnter phone number: ");

    fgets(phone, 20, stdin);

    phone[strcspn(phone, "\n")] = '\0';

    int index = findByPhone(notes, size, phone);

    if (index >= 0) {
        printNote(notes[index]);
    } else {
        printf("Person not found\n");
    }
}

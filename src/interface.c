#include <stdio.h>
#include "interface.h"
#include <string.h>

void inputNotes(NOTE notes[], int size)
{
    for (int i = 0; i < size; i++) {

        printf("Person %d\n", i + 1);

        printf("Name: ");
        fgets(notes[i].name, 50, stdin);
	notes[i].name[strcspn(notes[i].name, "\n")] = '\0';

	printf("Phone: ");

	fgets(notes[i].tele, 20, stdin);
	notes[i].tele[strcspn(notes[i].tele, "\n")] = '\0';

        printf("Birth year month day: ");

        scanf(
            "%d %d %d",
            &notes[i].birth.year,
            &notes[i].birth.month,
            &notes[i].birth.day
        );

        getchar();
    }
}

void printNote(NOTE note)
{
    printf("\nFound person:\n");

    printf("Name: %s\n", note.name);

    printf("Phone: %s\n", note.tele);

    printf(
        "Birth: %d.%d.%d\n",
        note.birth.day,
        note.birth.month,
        note.birth.year
    );
}

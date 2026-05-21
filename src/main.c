#include "client.h"
#include "interface.h"

#define SIZE 10

int main()
{
    NOTE notes[SIZE];

    inputNotes(notes, SIZE);

    processNotes(notes, SIZE);

    return 0;
}

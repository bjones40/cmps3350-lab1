// CMPS 3350 - lab 1
// Prints each command-line argument passed into the program, one per line
#include <stdio.h>
#include <stdlib.h>
// *Default Dances in conflict*
int main(int argc, char ** argv)
{
    if(argc > 1)
    {
    for(int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    }
    else
    {
        perror("Usage: ./filename <arguments>\n");
        exit(EXIT_FAILURE);
    }
    return 0;
}


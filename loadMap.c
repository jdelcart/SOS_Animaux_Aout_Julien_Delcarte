#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "loadMap.h"
#include "globales.h"

bool loadMap(int mX, int mY)		//fonction qui ouvre le fichier txt et charge la carte dans le tableau
{
    map = malloc(sizeof(char *) * mX);
    if (map == NULL)
    {
        printf("Memory allocation failed");
        return false;
    }

    FILE *f = fopen("map_renversee.txt", "r");
    if(f == NULL)
    {
        printf("file empty");
        return false;
    }

    char c;
    int i = 0;
    int j = 0;


    for (i = 0; i < mX; i++)
    {
        *(map + i) = malloc(sizeof(char) * mY); // Use sizeof(char), not sizeof(char *)
        if (*(map + i) == NULL) // Check if memory allocation succeeded
        {
            printf("Memory allocation failed");
            return false;
        }
        for (j = 0; j < mY; j++)
        {
            c = fgetc(f);
            *(*(map + i) + j) = c;
        }
        fgetc(f); // Read the newline character after each row
    }

    fclose(f);

    printf("\n");

    for (i = 0; i < mX; i++)
    {
        for (j = 0; j < mY; j++)
        {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }

		
 return true;
 }		


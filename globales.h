#ifndef _GLOBALES_H_
#define _GLOBALES_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MaxX 48
#define MaxY 81
#define Square_size 10.0

char **map = NULL;
int mX = MaxX;
int mY = MaxY;
struct position
{
	int x;
	int y;
};

struct play
{
	int vie;
	struct position pos;
};

typedef struct play *player;
player p;
#endif
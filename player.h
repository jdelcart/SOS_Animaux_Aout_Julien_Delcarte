#ifndef _PLAYER_H_
#define _PLAYER_H_
#include "globales.h"

player createPlayer(int mX, int mY);
void moveLeft(player p);
void moveRight(player p);
void moveUp(player p);
void moveDown(player p);

#endif
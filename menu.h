#ifndef _MENU_H
#define _MENU_H

#include <stdio.h>
#include <stdlib.h>
#include <GLUT/glut.h> 

void AffichageMenu();
void menu(int option);
void drawMenu();
void AffichagePartie();
void handleMouse(int button, int state, int x, int y);
void affichage_texte(void* police, const char* chaine);
void creation_menu(void);

#endif
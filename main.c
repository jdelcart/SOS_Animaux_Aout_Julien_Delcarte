#ifdef __APPLE_CC__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <stdio.h>

#include "loadMap.h"
#include "drawMap.h"
#include "game.h"
#include "menu.h"
#include "globales.h"

char fileContent[15000000] = {0}; //Variable pour les règles


void initRendering()
{
	glEnable(GL_DEPTH_TEST);
}

void handleResize(int width,int heigth)
{
	glViewport(0, 0, width, heigth);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, width, heigth, 0);
}



int main(int argc, char *argv[])
{
	loadMap(mX, mY);     //Charge la carte
	//p = createPlayer(mX, mY);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

	glutInitWindowSize(mX*Square_size, mY*Square_size);

	glutCreateWindow("Test carte étendue");

	initRendering();

	creation_menu();
	glutDisplayFunc(AffichagePartie); //Attention! Dans "menu.c"!
	glutMouseFunc(handleMouse);
	glutReshapeFunc(handleResize);

	glutMainLoop();

	return 0;
}
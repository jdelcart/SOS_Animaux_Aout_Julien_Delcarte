#ifdef __APPLE_CC__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include "loadMap.h"
#include "drawMap.h"
#include "game.h"
#include "globales.h"

void drawWall(int mX, int mY)			// fonction qui affiche les murs et les plateformes
{
	for (int j = 0; j < mX; j++) //Inversion mX/mY par rapport à l'original.
	{
		for (int i = 0; i < mY; i++)
		{
			if(*(*(map + j) + i) == '#')
			{
				glMatrixMode(GL_MODELVIEW);
				glLoadIdentity();

				glColor3f(1.0f,1.0f,1.0f);

				glBegin(GL_QUADS);
				glVertex3f(0.0f, 0.0f, 0.0f);
				glVertex3f(Square_size, 0.0f, 0.0f);
				glVertex3f(Square_size,Square_size, 0.0f);
				glVertex3f(0.0f,Square_size, 0.0f);

				glEnd();
			}
			if (*(*(map + j) + i) == '|')
			{
				glColor3f(1.0f,1.0f,0.0f);

				glMatrixMode(GL_MODELVIEW);
				glLoadIdentity();
				glTranslatef(j*Square_size,i*Square_size,0.0f);// Pour le scrolling horizontal
				glBegin(GL_QUADS);
				glVertex3f(0.0f, 0.0f, 0.0f);
				glVertex3f(Square_size, 0.0f, 0.0f);
				glVertex3f(Square_size,Square_size, 0.0f);
				glVertex3f(0.0f,Square_size, 0.0f);

				glEnd();
			}
			
			if(*(*(map + j) + i) == 'e')
			{	
				glColor3f(1,0,0);

				glMatrixMode(GL_MODELVIEW);
				glLoadIdentity();
				
				glTranslatef(j*Square_size,i*Square_size,0.0f);// Pour le scrolling horizontal
			
				glBegin(GL_QUADS);

				glVertex3f(0.0f, 0.0f, 0.0f);
				glVertex3f(Square_size, 0.0f, 0.0f);
				glVertex3f(Square_size,Square_size, 0.0f);
				glVertex3f(0.0f,Square_size, 0.0f);

				glEnd();
			
			}
			
			if(*(*(map + j) + i) == 'b')
			{	
				glColor3f(0.3,0.3,1);

				glMatrixMode(GL_MODELVIEW);
				glLoadIdentity();
				
				glTranslatef(j*Square_size,i*Square_size,0.0f);// Pour le scrolling horizontal
			
				glBegin(GL_QUADS);

				glVertex3f(0.0f, 0.0f, 0.0f);
				glVertex3f(Square_size, 0.0f, 0.0f);
				glVertex3f(Square_size,Square_size, 0.0f);
				glVertex3f(0.0f,Square_size, 0.0f);

				glEnd();
			
			}
			
			if(*(*(map + j) + i) == '-')
			{	
				glColor3f(0,0,1);

				glMatrixMode(GL_MODELVIEW);
				glLoadIdentity();
				
				glTranslatef(j*Square_size,i*Square_size,0.0f);// Pour le scrolling horizontal
			
				glBegin(GL_QUADS);

				glVertex3f(0.0f, 0.0f, 0.0f);
				glVertex3f(Square_size, 0.0f, 0.0f);
				glVertex3f(Square_size,Square_size, 0.0f);
				glVertex3f(0.0f,Square_size, 0.0f);

				glEnd();
			
			}
			
			if(*(*(map + j) + i) == 'h')
			{	
				glColor3f(0.8,0.8,0.2);

				glMatrixMode(GL_MODELVIEW);
				glLoadIdentity();
				
				glTranslatef(j*Square_size,i*Square_size,0.0f);// Pour le scrolling horizontal

				glBegin(GL_QUADS);

				glVertex3f(0.0f, 0.0f, 0.0f);
				glVertex3f(Square_size, 0.0f, 0.0f);
				glVertex3f(Square_size,Square_size, 0.0f);
				glVertex3f(0.0f,Square_size, 0.0f);

				glEnd();
			}
			if(*(*(map + j) + i) == ' '){
				glColor3f(0.5,0.5,0.5);
				
				glMatrixMode(GL_MODELVIEW);
				glLoadIdentity();
				
				glTranslatef(j*Square_size,i*Square_size,0.0f);// Pour le scrolling horizontal
				
				glBegin(GL_POLYGON);         //draw road
				glVertex3f(0.0f, 0.0f, 0.0f);
				glVertex3f(Square_size, 0.0f, 0.0f);
				glVertex3f(Square_size, Square_size, 0.0f);
				glVertex3f(0, Square_size, 0.0f);
				glEnd();
				
			}
		
		
		}
	}

	

}

void drawPlayer(player p)
{
	int i, j;
	i = p->pos.x;
	j = p->pos.y;
	printf("Bientôt ici: un (1) renard téméraire.\n");
}
#include <GL/glut.h>
#include <GL/gl.h>
#include <stdio.h>
#include <iostream>
#include <irrKlang.h>

using namespace std;
using namespace irrklang;

void init() {
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,500.0,0.0,300.0);//l,r,t,b
 }

void drawl1(int x) {
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(125,0);
	glVertex2d(125,150);
	glVertex2d(0,150);
	glEnd();
	glFlush();
}

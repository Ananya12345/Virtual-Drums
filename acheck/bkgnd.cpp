#include <GL/glut.h>
#include <GL/gl.h>
//#include <iostream.h>

using namespace std;

void init() {
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,500.0,0.0,300.0);
 }

void drawl1() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(125,0);
	glVertex2d(125,150);
	glVertex2d(0,150);
	glEnd();
	glFlush();
}

void drawl2() {
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(125,0);
	glVertex2d(250,0);
	glVertex2d(250,150);
	glVertex2d(125,150);
	glEnd();
	glFlush();
}

void drawl3() {
	glColor3f(0.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(250,0);
	glVertex2d(375,0);
	glVertex2d(375,150);
	glVertex2d(250,150);
	glEnd();
	glFlush();
}

void drawl4() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(375,0);
	glVertex2d(500,0);
	glVertex2d(500,150);
	glVertex2d(375,150);
	glEnd();
	glFlush();
}

void drawu1() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(0,150);
	glVertex2d(125,150);
	glVertex2d(125,300);
	glVertex2d(0,300);
	glEnd();
	glFlush();
}

void drawu2() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(125,150);
	glVertex2d(250,150);
	glVertex2d(250,300);
	glVertex2d(125,300);
	glEnd();
	glFlush();
}

void drawu3() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
	glVertex2d(250,150);
	glVertex2d(375,150);
	glVertex2d(375,300);
	glVertex2d(250,300);
	glEnd();
	glFlush();
}

void drawu4() {
//	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.5,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(375,150);
	glVertex2d(500,150);
	glVertex2d(500,300);
	glVertex2d(375,300);
	glEnd();
	glFlush();
}


void display() {
	drawl1();
	drawl2();
	drawl3();
	drawl4();
	drawu1();
	drawu2();
	drawu3();
	drawu4();
	glFlush();
}

int main(int argc, char ** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(500,300);
    glutCreateWindow("LINE-LOOP");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
}


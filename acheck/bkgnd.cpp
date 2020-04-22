#include <GL/glut.h>
#include <GL/gl.h>
//#include <iostream.h>

using namespace std;

void init() {
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,3000.0,0.0,700.0);//l,r,t,b
 }

void drawl1() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(750,0);
	glVertex2d(750,350);
	glVertex2d(0,350);
	glEnd();
	glFlush();
}

void drawl2() {
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(750,0);
	glVertex2d(1500,0);
	glVertex2d(1500,350);
	glVertex2d(750,350);
	glEnd();
	glFlush();
}

void drawl3() {
	glColor3f(0.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(1500,0);
	glVertex2d(2250,0);
	glVertex2d(2250,350);
	glVertex2d(1500,350);
	glEnd();
	glFlush();
}

void drawl4() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(2250,0);
	glVertex2d(3000,0);
	glVertex2d(3000,350);
	glVertex2d(2250,350);
	glEnd();
	glFlush();
}

void drawu1() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(0,350);
	glVertex2d(750,350);
	glVertex2d(750,700);
	glVertex2d(0,700);
	glEnd();
	glFlush();
}

void drawu2() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(750,350);
	glVertex2d(1500,350);
	glVertex2d(1500,700);
	glVertex2d(750,700);
	glEnd();
	glFlush();
}

void drawu3() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
	glVertex2d(1500,350);
	glVertex2d(2250,350);
	glVertex2d(2250,700);
	glVertex2d(1500,700);
	glEnd();
	glFlush();
}

void drawu4() {
//	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.5,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(2250,350);
	glVertex2d(3000,350);
	glVertex2d(3000,700);
	glVertex2d(2250,700);
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
    glutInitWindowSize(3000,700);//width,height
    glutCreateWindow("LINE-LOOP");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
}


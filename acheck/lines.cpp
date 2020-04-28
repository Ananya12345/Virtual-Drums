#include <GL/glut.h>
#include <GL/gl.h>

void init() {
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,3000.0,0.0,700.0);//l,r,t,b
    glEnable(GL_LINE_STIPPLE);
 }

void line(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(1.0f);
glColor3f(1.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2d(0,350);
glVertex2d(3000,350);
glVertex2d(750,0);
glVertex2d(750,700);
glVertex2d(1500,0);
glVertex2d(1500,700);
glVertex2d(2250,0);
glVertex2d(2250,700);
glEnd();
glFlush();
}

int main(int argc, char ** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(3000,700);//width,height
    glutCreateWindow("LINE-LOOP");
//glEnable(GL_LIGHTING);
//glEnable(GL_LIGHT0);
    init();
    glutDisplayFunc(line);
    glutMainLoop();
}

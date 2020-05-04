#include <GL/glut.h>
#include <GL/gl.h>

void init() {
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,500.0,0.0,300.0);//l,r,t,b
    glEnable(GL_LINE_STIPPLE);
 }

void drawString(int x,int y,char *string)
{
char *c;
glRasterPos2i(x,y);
for(c=string;*c!='\0';c++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,*c);
}

void fstscreen(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,1.0,1.0);
drawString(200,100,"Virtual Drumpad");
glEnd();
glFlush();
}

int main(int argc, char ** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(300,500);//width,height
    glutCreateWindow("LINE-LOOP");
//glEnable(GL_LIGHTING);
//glEnable(GL_LIGHT0);
    init();
    glutDisplayFunc(fstscreen);
    glutMainLoop();
}

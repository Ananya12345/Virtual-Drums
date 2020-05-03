#include <GL/glut.h>
#include <GL/gl.h>
#include <iostream>

#include <irrKlang.h>

using namespace irrklang;

void init() {
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,300.0,0.0,500.0);//l,r,t,b
}
void drawl1() {
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(125,0);
	glVertex2d(125,250);
	glVertex2d(0,250);
	glEnd();
	glFlush();
}

void drawl2() {
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(125,0);
	glVertex2d(250,0);
	glVertex2d(250,250);
	glVertex2d(125,250);
	glEnd();
	glFlush();
}

void display()
{
drawl1();
drawl2();
}
void delay(){
	int m,n;
	for(m=0;m<20000;m++)
		for(n=0;n<9000;n++);
}	

void mouse(int button, int state, int x, int y)
    {   char var; 

	ISoundEngine* engine = createIrrKlangDevice();

  	if (!engine)
    		return;
   //do{
	if (button==GLUT_LEFT && state==GLUT_DOWN)
	    {
		if (x>0 && x<125 && y<500 && y>250)
		    {
		    engine->play2D("bassf.wav", false);delay();            
			//std::cin>>var;		
	
		    }
else if (x>125 && x<250 && y<500 && y>250)
			{
	
				
			engine->play2D("rightcymbol.wav", false);delay();
	
			}
		else
		    {
		    std::cout<<"outside";
		    }
		//glutPostRedisplay();

		
	    }
   // }while (var!='q');
   

 engine->drop(); // delete engine
		return;
  }

int main(int argc, char ** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(300,500);
    glutCreateWindow("VIRTUALlll-DRUM");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    //glutKeyboardFunc(keys);
    glutMainLoop();
}


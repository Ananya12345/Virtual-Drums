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
    gluOrtho2D(0.0,3000.0,0.0,700.0);//l,r,t,b
 }

void line(void)
{
//glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(1.0f);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
//glVertex2d(0,350);
//glVertex2d(3000,350);//horizontal
glVertex2d(600,0);
glVertex2d(600,700);//1st line from left
glVertex2d(1200,0);
glVertex2d(1200,700);//2nd
glVertex2d(1800,0);
glVertex2d(1800,700);//3rd
glVertex2d(2400,0);
glVertex2d(2400,700);//4th
glEnd();
glFlush();
}

void drawl1(int x) {
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(1,1);
	glVertex2d(599,1);
	glVertex2d(599,349);
	glVertex2d(1,349);
	glEnd();
	
}
	

void drawl2(int x) {
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(601,1);
	glVertex2d(1199,1);
	glVertex2d(1199,349);
	glVertex2d(601,349);
	glEnd();
	glFlush();
}

void drawl3(int x) {
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(1201,1);
	glVertex2d(1799,1);
	glVertex2d(1799,349);
	glVertex2d(1201,349);
	glEnd();
	glFlush();
}

void drawl4(int x) {
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(1801,1);
	glVertex2d(2399,1);
	glVertex2d(2399,349);
	glVertex2d(1801,349);
	glEnd();
	glFlush();
}

void drawl5(int x) {
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(2401,1);
	glVertex2d(2999,1);
	glVertex2d(2999,349);
	glVertex2d(2401,349);
	glEnd();
	glFlush();
}

void drawu1(int x) {
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(1,351);
	glVertex2d(599,351);
	glVertex2d(599,699);
	glVertex2d(1,699);
	glEnd();
	glFlush();
}

void drawu2(int x) {
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(601,351);
	glVertex2d(1199,351);
	glVertex2d(1199,699);
	glVertex2d(601,699);
	glEnd();
	glFlush();
}

void drawu3(int x) {
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(1201,351);
	glVertex2d(1799,351);
	glVertex2d(1799,699);
	glVertex2d(1201,699);
	glEnd();
	glFlush();
}

void drawu4(int x) {
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(1801,351);
	glVertex2d(2399,351);
	glVertex2d(2399,699);
	glVertex2d(1801,699);
	glEnd();
	glFlush();
}

void drawu5(int x) {
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(2401,351);
	glVertex2d(2999,351);
	glVertex2d(2999,699);
	glVertex2d(2401,699);
	glEnd();
	glFlush();
}


void display() {
	drawl1(1);
	drawl2(1);
	drawl3(1);
	drawl4(1);
	drawl5(1);
	drawu1(1);
	drawu2(1);
	drawu3(1);
	drawu4(1);
	drawu5(1);
	line();
	glFlush();
}

void delay(){
	int m,n;
	for(m=0;m<9000;m++)
		for(n=0;n<9000;n++);

}

void mouse1(int button, int state, int x, int y)

    {   char var; 
	std::cout<<x<<"\n";
	std::cout<<y;

	ISoundEngine* engine = createIrrKlangDevice();

  	if (!engine)
    		return;
  // do{
	if (button==GLUT_LEFT && state==GLUT_DOWN)
	    {
		if (x>1 && x<599 && y<349 && y>1)
		    {
			drawu1(0);
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/leftcymbol.wav", false);
			delay();std::cout<<"lcy";
		    }
		else if (x>601 && x<1199 && y<349 && y>1)
			{drawu2(0);
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/snarec.wav", false);	
			delay();std::cout<<"sc";	
			}
		else if (x>1201 && x<1799 && y<349 && y>1)
			{ drawu3(0);
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/lefttom.wav", false);	
			delay();std::cout<<"lt";
			}
		else if (x>1801 && x<2399 && y<349 && y>1)
			{drawu4(0);
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/righttom.wav", false);	
			delay();std::cout<<"rt";	
			}
		 else if (x>2401 && x<2999 && y<349 && y>1)
			{drawu5(0);
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/rightcymbol.wav", false);	
			delay();	std::cout<<"rc";
			}
		/*else if (x>0 && x<750 && y<700 && y>350)
			{ drawu1(0);
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/cymbolo.wav", false);	
			delay();	
			}
		 else if (x>750 && x<1500 && y<700 && y>350)
			{drawu2(0);
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/snareo.wav", false);	
			delay();	
			}
		 else if (x>1500 && x<2250 && y<700 && y>350)
			{drawu3(0);
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/bottomtom.wav", false);	
			delay();	
			}
		 else if (x>2250 && x<3000 && y<700 && y>350)
			{drawu4(0);
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/bassf.wav", false);	
			delay();	
			}
		else
		    {
		    std::cout<<"outside";
		    }
		//glutPostRedisplay();

		
	    }
	if (button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
	{
		
		 else if (x>0 && x<750 && y<700 && y>350)
			{drawu1(0);
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/cymbolc.wav", false);	
			delay();	
			}
		*/else
		    {
		    std::cout<<"outside";
		    }
		//glutPostRedisplay();
	}display();
   
  }

void keys(unsigned char key,int x,int y)
 {
   char var; 
   std::cout<<x<<"\n";
   std::cout<<y;

   ISoundEngine* engine = createIrrKlangDevice();

  if (!engine)
  return;
  
	if (key== 'q')
		{
		 engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/leftcymbol.wav", false);
		}
	
	else if (key== 't')		{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/lefttom.wav", false);
		}	
	else if (key== 'r')
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/righttom.wav", false);
		}	
	else if (key== 'p')
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/rightcymbol.wav", false);	
			//std::cin>>var;	
			}
		else if (key== 'o')
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/cymbolo.wav", false);	
			//std::cin>>var;	
			}
		else if (key== 's')
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/snareo.wav", false);	
			//std::cin>>var;	
			}
		else if (key== 'h')
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/bottomtom.wav", false);	
			//std::cin>>var;	
			}
		else if (key== 'm')
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/bassf.wav", false);	
			//std::cin>>var;	
			}
	else if (key== 'd')
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/snarec.wav", false);	
			//std::cin>>var;	
			}
		else if (key== 'c')
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/cymbolc.wav", false);	
			//std::cin>>var;	
			}
		else
		    {
		    std::cout<<"outside";
		    }
		//glutPostRedisplay();
	display();
   // }while (var!='q');

  //  engine->drop();
 // delete engine
		//return;
  
 } 

int main(int argc, char ** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(3000,700);
    glutCreateWindow("VIRTUAL-DRUM");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse1);
    glutKeyboardFunc(keys);
    glutMainLoop();
}


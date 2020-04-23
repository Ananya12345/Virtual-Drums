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
	glFlush();std::cout<<"drawl1\n";
}

void drawl2() {
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(125,0);
	glVertex2d(250,0);
	glVertex2d(250,150);
	glVertex2d(125,150);
	glEnd();
	glFlush();std::cout<<"drawl2\n";
}

void drawl3() {
	glColor3f(0.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(250,0);
	glVertex2d(375,0);
	glVertex2d(375,150);
	glVertex2d(250,150);
	glEnd();
	glFlush();std::cout<<"drawl3\n";
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
	glFlush();std::cout<<"drawl4\n";
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
	glFlush();std::cout<<"drawu1\n";
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
	std::cout<<"drawu2\n";
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
	glFlush();std::cout<<"drawu3\n";
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
	glFlush();std::cout<<"drawu4\n";
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
		if (x>0 && x<125 && y<150 && y>0)
		    {
		    engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/leftcymbol.wav", false);	
			//std::cin>>var;		
		    }
		else if (x>125 && x<250 && y<150 && y>0)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/lefttom.wav", false);	
			//std::cin>>var;	
			}
		else if (x>250 && x<375 && y<150 && y>0)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/righttom.wav", false);	
			//std::cin>>var;	
			}
		 else if (x>375 && x<500 && y<150 && y>0)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/rightcymbol.wav", false);	
			//std::cin>>var;	
			}
		else if (x>0 && x<125 && y<300 && y>150)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/cymbolo.wav", false);	
			//std::cin>>var;	
			}
		 else if (x>125 && x<250 && y<300 && y>150)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/snareo.wav", false);	
			//std::cin>>var;	
			}
		 else if (x>250 && x<375 && y<300 && y>150)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/bottomtom.wav", false);	
			//std::cin>>var;	
			}
		 else if (x>375 && x<500 && y<300 && y>150)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/bassf.wav", false);	
			//std::cin>>var;	
			}
		else
		    {
		    std::cout<<"outside";
		    }
		//glutPostRedisplay();

		
	    }
	if (button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
	{
		if (x>125 && x<250 && y<300 && y>150)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/snarec.wav", false);	
			//std::cin>>var;	
			}
		 else if (x>0 && x<125 && y<300 && y>150)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/cymbolc.wav", false);	
			//std::cin>>var;	
			}
		else
		    {
		    std::cout<<"outside";
		    }
		//glutPostRedisplay();
	}display();
   // }while (var!='q');

  //  engine->drop();
 // delete engine
		//return;
  }

int main(int argc, char ** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(500,300);
    glutCreateWindow("VIRTUAL-DRUM");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse1);
    glutMainLoop();
}


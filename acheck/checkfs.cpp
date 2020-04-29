#include <GL/glut.h>
#include <GL/gl.h>
#include <stdio.h>
#include <iostream>
#include <irrKlang.h>

using namespace std;
using namespace irrklang;
int width,height;
void mouse(int button, int state, int x, int y)
    {   char var; 
	//int y=0;

	ISoundEngine* engine = createIrrKlangDevice();

  	if (!engine)
    		return;
   //do{
	if (button==GLUT_LEFT && state==GLUT_DOWN)
	    {
		if (x>0 && x<width/4 && y<height/2 && y>0)
		    {
		    engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/leftcymbol.wav", false);	
			//std::cin>>var;		
		    }
		else if (x>width/4 && x<2*(width/4) && y<height/2 && y>0)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/lefttom.wav", false);	
			//std::cin>>var;	
			}
		else if (x>2*(width/4) && x<3*(width/4) && y<height/2 && y>0)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/righttom.wav", false);	
			//std::cin>>var;	
			}
		else if (x>3*(width/4) && x<width && y<height/2 && y>0)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/rightcymbol.wav", false);	
			//std::cin>>var;	
			}
		else if (x>0 && x<width/4 && y<height && y>height/2)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/cymbolo.wav", false);	
			//std::cin>>var;	
			}
		else if (x>width/4 && x<2*width/4 && y<height && y>height/2)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/snareo.wav", false);	
			//std::cin>>var;	
			}
		else if (x>2*width/4 && x<3*width/4 && y<height && y>height/2)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/bottomtom.wav", false);	
			//std::cin>>var;	
			}
		else if (x>3*width/4 && x<width && y<height && y>height/2)
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
		if (x>width/4 && x<2*width/2 && y<height && y>height/2)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/snarec.wav", false);	
			//std::cin>>var;	
			}
		else if (x>0 && x<width/4 && y<height && y>height/2)
			{
			engine->play2D("/home/ananyadas/Documents/cgproj/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/musicFiles/cymbolc.wav", false);	
			//std::cin>>var;	
			}
		else
		    {
		    std::cout<<"outside";
		    }
		//glutPostRedisplay();
	}
    //}while (var!='q');
    //engine->drop(); // delete engine
	//	return;
  }

/*void mouse(int button, int state, int x, int y)
    {   char var; 
	//int y=0;

	ISoundEngine* engine = createIrrKlangDevice();

  	if (!engine)
    		return;
  // do{
	if (button==GLUT_LEFT && state==GLUT_DOWN)
	    {std::cout<<"click:"<<x<<"\n";std::cout<<y<<"\n";
		if (x>0 && x<125 && y<150 && y>0)
		    {
		    engine->play2D("/media/sf_ubun2/Virtual-Drums/acheck/musicFiles/leftcymbol.wav", false);	
			//std::cin>>var;		
		    }
		else if (x>125 && x<250 && y<150 && y>0)
			{
			engine->play2D("/media/sf_ubun2/Virtual-Drums/acheck/musicFiles/lefttom.wav", false);	
			//std::cin>>var;	
			}
		else if (x>250 && x<375 && y<150 && y>0)
			{
			engine->play2D("/media/sf_ubun2/Virtual-Drums/acheck/musicFiles/righttom.wav", false);	
			//std::cin>>var;	
			}
		else if (x>375 && x<500 && y<150 && y>0)
			{
			engine->play2D("/media/sf_ubun2/Virtual-Drums/acheck/musicFiles/rightcymbol.wav", false);	
			//std::cin>>var;	
			}
		else if (x>0 && x<125 && y<300 && y>150)
			{
			engine->play2D("/media/sf_ubun2/Virtual-Drums/acheck/musicFiles/cymbolo.wav", false);	
			//std::cin>>var;	
			}
		else if (x>125 && x<250 && y<300 && y>150)
			{
			engine->play2D("/media/sf_ubun2/Virtual-Drums/acheck/musicFiles/snareo.wav", false);	
			//std::cin>>var;	
			}
		else if (x>250 && x<375 && y<300 && y>150)
			{
			engine->play2D("/media/sf_ubun2/Virtual-Drums/acheck/musicFiles/bottomtom.wav", false);	
			//std::cin>>var;	
			}
		else if (x>375 && x<500 && y<300 && y>150)
			{
			engine->play2D("/media/sf_ubun2/Virtual-Drums/acheck/musicFiles/bassf.wav", false);	
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
			engine->play2D("/media/sf_ubun2/Virtual-Drums/acheck/musicFiles/snarec.wav", false);	
			//std::cin>>var;	
			}
		else if (x>0 && x<125 && y<300 && y>150)
			{
			engine->play2D("/media/sf_ubun2/Virtual-Drums/acheck/musicFiles/cymbolc.wav", false);	
			//std::cin>>var;	
			}
		else
		    {
		    std::cout<<"outside";
		    }
		//glutPostRedisplay();
	}
   // }while (var!='q');
    //engine->drop(); // delete engine
	///	return;
  }*/


void myReshape(int w, int h)
{
//glClearColor(0.0,0.0,0.0,0.0);
   // glMatrixMode(GL_PROJECTION);
 gluOrtho2D(0.0,w,0.0,h);
std::cout<<"reshape\n";
    //glViewport(0, 0, w, h);
	std::cout<<w<<"\n";
	std::cout<<h<<"\n";
	width=w;height=h;
   //display();

}

void init() {
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    //gluOrtho2D(0.0,500.0,0.0,300.0);
 }

void drawl1() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(width/4,0);
	glVertex2d(width/4,height/2);//125
	glVertex2d(0,height/2);
	glEnd();
	glFlush();
}

void drawl2() {//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(width/4,0);
	glVertex2d(2*width/4,0);
	glVertex2d(2*width/4,height/2);
	glVertex2d(width/4,height/2);
	glEnd();
	glFlush();std::cout<<width<<"\n";
std::cout<<height<<"\n";std::cout<<"---------------------\n";
}

void drawl3() {//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(2*width/4,0);
	glVertex2d(3*width/4,0);
	glVertex2d(3*width/4,height/2);
	glVertex2d(2*width/4,height/2);
	glEnd();
	glFlush();
}

void drawl4() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(3*width/4,0);
	glVertex2d(width,0);
	glVertex2d(width,height/2);
	glVertex2d(3*width/4,height/2);
	glEnd();
	glFlush();
}

void drawu1() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(0,height/2);
	glVertex2d(width/4,height/2);
	glVertex2d(width/4,height);
	glVertex2d(0,height);
	glEnd();
	glFlush();
}

void drawu2() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(width/4,height/2);
	glVertex2d(2*width/4,height/2);
	glVertex2d(2*width/4,height);
	glVertex2d(width/4,height);
	glEnd();
	glFlush();
}

void drawu3() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
	glVertex2d(2*width/4,height/2);
	glVertex2d(3*width/4,height/2);
	glVertex2d(3*width/4,height);
	glVertex2d(2*width/4,height);
	glEnd();
	glFlush();
}

void drawu4() {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.5,0.0);
	glBegin(GL_POLYGON);
	glVertex2d(3*width/4,height/2);
	glVertex2d(width,height/2);
	glVertex2d(width,height);
	glVertex2d(3*width/4,height);
	glEnd();
	glFlush();
}
/*
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
}*/


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
    glutCreateWindow("VIRTUAL-DRUM");
glutReshapeFunc(myReshape);
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);//reshape,glortho2d,if width<height reshape 2 param,width and height we et the values of that and then reshape,,,,current width aand fs width csw/fsw=cl/fsl  
    glutMainLoop();
}


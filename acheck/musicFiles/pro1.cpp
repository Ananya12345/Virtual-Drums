#include <GL/glut.h>
#include <GL/gl.h>
#include <stdio.h>
#include <iostream>
#include <irrKlang.h>

using namespace std;
using namespace irrklang;
int width,height;

void init() {
    glClearColor(0.0,0.0,0.0,0.0);
   glEnable(GL_LINE_STIPPLE);
    //glMatrixMode(GL_PROJECTION);
    //gluOrtho2D(0.0,500.0,0.0,300.0);
   
 }

void line()
{
glLineWidth(1.0f);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2d(0,height/2);
glVertex2d(width,height/2);
glVertex2d(width/4,0);
glVertex2d(width/4,height);
glVertex2d(2*width/4,0);
glVertex2d(2*width/4,height);
glVertex2d(3*width/4,0);
glVertex2d(3*width/4,height);
glEnd();
glFlush();

}

void drawl1(int x) {
	//glClear(GL_COLOR_BUFFER_BIT);
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(width/4,0);
	glVertex2d(width/4,height/2);//125
	glVertex2d(0,height/2);
	glEnd();
	glFlush();
}

void drawl2(int x) {//glClear(GL_COLOR_BUFFER_BIT);
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(width/4,0);
	glVertex2d(2*width/4,0);
	glVertex2d(2*width/4,height/2);
	glVertex2d(width/4,height/2);
	glEnd();
	glFlush();std::cout<<width<<"\n";
std::cout<<height<<"\n";std::cout<<"---------------------\n";
}

void drawl3(int x) {//glClear(GL_COLOR_BUFFER_BIT);
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(2*width/4,0);
	glVertex2d(3*width/4,0);
	glVertex2d(3*width/4,height/2);
	glVertex2d(2*width/4,height/2);
	glEnd();
	glFlush();
}

void drawl4(int x) {
	//glClear(GL_COLOR_BUFFER_BIT);
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(3*width/4,0);
	glVertex2d(width,0);
	glVertex2d(width,height/2);
	glVertex2d(3*width/4,height/2);
	glEnd();
	glFlush();
}

void drawu1(int x) {
	//glClear(GL_COLOR_BUFFER_BIT);
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(0,height/2);
	glVertex2d(width/4,height/2);
	glVertex2d(width/4,height);
	glVertex2d(0,height);
	glEnd();
	glFlush();
}

void drawu2(int x) {
	//glClear(GL_COLOR_BUFFER_BIT);
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(width/4,height/2);
	glVertex2d(2*width/4,height/2);
	glVertex2d(2*width/4,height);
	glVertex2d(width/4,height);
	glEnd();
	glFlush();
}

void drawu3(int x) {
	//glClear(GL_COLOR_BUFFER_BIT);
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(2*width/4,height/2);
	glVertex2d(3*width/4,height/2);
	glVertex2d(3*width/4,height);
	glVertex2d(2*width/4,height);
	glEnd();
	glFlush();
}

void drawu4(int x) {
	//glClear(GL_COLOR_BUFFER_BIT);
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(3*width/4,height/2);
	glVertex2d(width,height/2);
	glVertex2d(width,height);
	glVertex2d(3*width/4,height);
	glEnd();
	glFlush();
}


void display() {std::cout<<"disp\n";
	drawl1(1);
	drawl2(1);
	drawl3(1);
	drawl4(1);
	drawu1(1);
	drawu2(1);
	drawu3(1);
	drawu4(1);
	line();
	glFlush();
}

void delay(){
	int m,n;
	for(m=0;m<9000;m++)
		for(n=0;n<9000;n++);
}

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
			drawu1(0);
		    engine->play2D("leftcymbol.wav", false);	
			delay();//std::cin>>var;		
		    }
		else if (x>width/4 && x<2*(width/4) && y<height/2 && y>0)
			{
				drawu2(0);
			engine->play2D("lefttom.wav", false);	
			delay();//std::cin>>var;	
			}
		else if (x>2*(width/4) && x<3*(width/4) && y<height/2 && y>0)
			{drawu3(0);
			engine->play2D("righttom.wav", false);	
			delay();//std::cin>>var;	
			}
		else if (x>3*(width/4) && x<width && y<height/2 && y>0)
			{drawu4(0);
			engine->play2D("rightcymbol.wav", false);	
			delay();//std::cin>>var;	
			}
		else if (x>0 && x<width/4 && y<height && y>height/2)
			{drawl1(0);
			engine->play2D("cymbolo.wav", false);	
			delay();//std::cin>>var;	
			}
		else if (x>width/4 && x<2*width/4 && y<height && y>height/2)
			{drawl2(0);
			engine->play2D("snareo.wav", false);	
			delay();//std::cin>>var;	
			}
		else if (x>2*width/4 && x<3*width/4 && y<height && y>height/2)
			{drawl3(0);
			engine->play2D("bottomtom.wav", false);	
			delay();//std::cin>>var;	
			}
		else if (x>3*width/4 && x<width && y<height && y>height/2)
			{drawl4(0);
			engine->play2D("bassf.wav", false);	
			delay();//std::cin>>var;	
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
			{drawl2(0);
			engine->play2D("snarec.wav", false);	
			delay();//std::cin>>var;	
			}
		else if (x>0 && x<width/4 && y<height && y>height/2)
			{drawl1(0);
			engine->play2D("cymbolc.wav", false);	
			delay();
			//std::cin>>var; 	
			}
		else
		    {
		    std::cout<<"outside";
		    }
		//glutPostRedisplay();
	}display();
    //}while (var!='q');
    //engine->drop(); // delete engine
	//	return;
  }

void myReshape(int w, int h)
{
//glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
 gluOrtho2D(0.0,w,0.0,h);
std::cout<<"reshape\n";
    //glViewport(0, 0, w, h);
	std::cout<<w<<"\n";
	std::cout<<h<<"\n";
	width=w;height=h;
   display();

}


int main(int argc, char ** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(1300,700);
    glutCreateWindow("VIRTUAL-DRUM");
    glutReshapeFunc(myReshape);
    init();
    glutDisplayFunc(display);

//
    glutMouseFunc(mouse);//reshape,glortho2d,if width<height reshape 2 param,width and height we et the values of that and then reshape,,,,current width aand fs width csw/fsw=cl/fsl  
    glutMainLoop();
}


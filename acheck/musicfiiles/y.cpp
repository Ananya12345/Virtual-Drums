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
    
 }

void line()
{
glLineWidth(1.0f);
glColor3f(1.0,1.0,0.0);
glBegin(GL_LINES);
glVertex2d(0,height/2);
glVertex2d(width,height/2);
glVertex2d(width/5,0);
glVertex2d(width/5,height);
glVertex2d(2*width/5,0);
glVertex2d(2*width/5,height);
glVertex2d(3*width/5,0);
glVertex2d(3*width/5,height);
glVertex2d(4*width/5,0);
glVertex2d(4*width/5,height);
glEnd();
glFlush();

}

void drawl1(int x) {
	 
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(width/5,0);
	glVertex2d(width/5,height/2);//125
	glVertex2d(0,height/2);
	glEnd();
	glFlush();
}

void drawl2(int x) { 
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(width/5,0);
	glVertex2d(2*width/5,0);
	glVertex2d(2*width/5,height/2);
	glVertex2d(width/5,height/2);
	glEnd();
	glFlush();std::cout<<width<<"\n";
std::cout<<height<<"\n";std::cout<<"---------------------\n";
}

void drawl3(int x) { 
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(2*width/5,0);
	glVertex2d(3*width/5,0);
	glVertex2d(3*width/5,height/2);
	glVertex2d(2*width/5,height/2);
	glEnd();
	glFlush();
}

void drawl4(int x) {
	 
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(3*width/5,0);
	glVertex2d(4*width/5,0);
	glVertex2d(4*width/5,height/2);
	glVertex2d(3*width/5,height/2);
	glEnd();
	glFlush();
}

void drawl5(int x) {
	 
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(4*width/5,0);
	glVertex2d(width,0);
	glVertex2d(width,height/2);
	glVertex2d(4*width/5,height/2);
	glEnd();
	glFlush();
}

void drawu1(int x) {
	 
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(0,height/2);
	glVertex2d(width/5,height/2);
	glVertex2d(width/5,height);
	glVertex2d(0,height);
	glEnd();
	glFlush();
}

void drawu2(int x) {
	 
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(width/5,height/2);
	glVertex2d(2*width/5,height/2);
	glVertex2d(2*width/5,height);
	glVertex2d(width/5,height);
	glEnd();
	glFlush();
}

void drawu3(int x) {
	 
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(2*width/5,height/2);
	glVertex2d(3*width/5,height/2);
	glVertex2d(3*width/5,height);
	glVertex2d(2*width/5,height);
	glEnd();
	glFlush();
}

void drawu4(int x) {
	 
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(3*width/5,height/2);
	glVertex2d(4*width/5,height/2);
	glVertex2d(4*width/5,height);
	glVertex2d(3*width/5,height);
	glEnd();
	glFlush();
}

void drawu5(int x) {
	 
	if (x==1)
		glColor3f(0.1,0.1,0.1);
	else
		glColor3f(0.3,0.1,0.6);
	glBegin(GL_POLYGON);
	glVertex2d(4*width/5,height/2);
	glVertex2d(width,height/2);
	glVertex2d(width,height);
	glVertex2d(4*width/5,height);
	glEnd();
	glFlush();std::cout<<"u5\n";
}


void display() {std::cout<<"disp\n";
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

void delay(){				//for light change
	int m,n;
	for(m=0;m<2000;m++)
		for(n=0;n<9000;n++);
}

void delay1(){				//for music
	int m,n;
	for(m=0;m<20000;m++)
		for(n=0;n<9000;n++);
}	

void delu1(){
int m,n;
	for(m=0;m<20000;m++)
		for(n=0;n<9000;n++);
}
	


void mouse(int button, int state, int x, int y)
    {   char var; 
	ISoundEngine* engine = createIrrKlangDevice();

  	if (!engine)
    		return;

 
	if (button==GLUT_LEFT && state==GLUT_DOWN)
	    {
		if (x>0 && x<width/5 && y<height/2 && y>0)
		    {
			drawu1(0);
			engine->play2D("rightcym.wav", false); //delay1()	
			 delay1();delay(); 
		
		    }

		
		 if (x>width/5 && x<2*(width/5) && y<height/2 && y>0)
			{
				drawu2(0);			
			engine->play2D("F,g_l,r_toptom .wav", false);	 //delay1()
			 delay1();delay(); 
				
			}
		if (x>2*(width/5) && x<3*(width/5) && y<height/2 && y>0)
			{drawu3(0);			
			engine->play2D("H_bottomtom.wav", false); //delay1()	
			 delay1();delay(); 			
			}
		 if (x>3*(width/5) && x<4*width/5 && y<height/2 && y>0)
			{drawu4(0);
 			engine->play2D("Y_bell_rightcymbolmid.wav", false); //delay1()	
			 delay1();delay(); 
				
			}
		 if (x>4*(width/5) && x<width && y<height/2 && y>0)
			{drawu5(0);
    		engine->play2D("u_ride_rightcymbol_edge.wav", false);	 delay1();
			delay(); 
			}
		if (x>0 && x<width/5 && y<height && y>height/2)
			{drawl1(0);			
			engine->play2D("z,m_open_downcym.wav", false); //delay1() //delay1()	
			 delay1();delay(); 				
			}
		if (x>width/5 && x<2*width/5 && y<height && y>height/2)
			{drawl2(0);			
			engine->play2D("x,n _hithat_close_downcym.wav", false);delay1();delay();	 //delay1()
			}		  
			
		if (x>2*width/5 && x<3*width/5 && y<height && y>height/2)
			{drawl3(0);			
			engine->play2D("C,v_left,rightsnare.wav", false); //delay1()	
			 delay1();delay(); 				
			}
		if (x>3*width/5 && x<4*width/5 && y<height && y>height/2)
			{drawl4(0);			
			engine->play2D("B_kick_bass.wav", false); //delay1()	
			 delay1();delay(); 				
			}
		if (x>4*width/5 && x<width && y<height && y>height/2)
			{drawl5(0);
			engine->play2D("snarec.wav", false); //delay1()
			 delay1();delay(); 				
			}
		else
		    {
		    std::cout<<"outside";
		    }

	}//leftdown_mousfunc
	if (button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
	{
		 if (x>0 && x<width/5 && y<height/2 && y>0)
		    {
			drawu1(0);
			ISoundEngine* engine1 = createIrrKlangDevice();

  			if (!engine1)
    				return;
		
		    	//irrklang::ISound* snd=
			engine1->play2D("rightcym.wav", true);delay(); //delay1()
			//snd->setPlaybackSpeed(2.0); 		
			//while true 
				 
		
		    }

		if (x>width/5 && x<2*(width/5) && y<height/2 && y>0)
			{
				drawu2(0);
			ISoundEngine* engine2 = createIrrKlangDevice();

  			if (!engine2)
    				return;
			engine2->play2D("F,g_l,r_toptom .wav", true);delay();	 //delay1()	
			}
		if (x>2*(width/5) && x<3*(width/5) && y<height/2 && y>0)
			{drawu3(0);
			ISoundEngine* engine3 = createIrrKlangDevice();

  			if (!engine3)
    				return;			
			engine3->play2D("H_bottomtom.wav", true); //delay1()	
			 delay(); 			
			}
		 if (x>3*(width/5) && x<4*width/5 && y<height/2 && y>0)
			{drawu4(0);
			ISoundEngine* engine4 = createIrrKlangDevice();

  			if (!engine4)
    				return;
 			engine4->play2D("Y_bell_rightcymbolmid.wav", true); //delay1()	
			 delay(); 
				
			}
		 if (x>4*(width/5) && x<width && y<height/2 && y>0)
			{drawu5(0);
			ISoundEngine* engine5 = createIrrKlangDevice();

  			if (!engine5)
    				return;
    		engine5->play2D("u_ride_rightcymbol_edge.wav", true);	 
			delay(); 
			}
		if (x>0 && x<width/5 && y<height && y>height/2)
			{drawl1(0);
			ISoundEngine* engine6 = createIrrKlangDevice();

  			if (!engine6)
    				return;			
			engine6->play2D("z,m_open_downcym.wav", true); //delay1() //delay1()	
			 delay(); 				
			}
		if (x>width/5 && x<2*width/5 && y<height && y>height/2)
			{drawl2(0);
			ISoundEngine* engine7 = createIrrKlangDevice();

  			if (!engine7)
    				return;			
			engine7->play2D("x,n _hithat_close_downcym.wav", true);delay();	 //delay1();
			}		  
			
		if (x>2*width/5 && x<3*width/5 && y<height && y>height/2)
			{drawl3(0);
			ISoundEngine* engine8 = createIrrKlangDevice();

  			if (!engine8)
    				return;			
			engine8->play2D("C,v_left,rightsnare.wav", true); //delay1();	
			 delay(); 				
			}
		if (x>3*width/5 && x<4*width/5 && y<height && y>height/2)
			{drawl4(0);
			ISoundEngine* engine9 = createIrrKlangDevice();

  			if (!engine9)
    				return;			
			engine9->play2D("B_kick_bass.wav", true); //delay1();	
			 delay(); 				
			}
		if (x>4*width/5 && x<width && y<height && y>height/2)
			{drawl5(0);
			ISoundEngine* engine10 = createIrrKlangDevice();

  			if (!engine10)
    				return;
			engine10->play2D("snarec.wav", true); //delay1();
			 delay(); 				
			}
		else
		    {
		    std::cout<<"outside";
		    }
		
	}display();
  
   engine->drop(); 
  }

void keys(unsigned char key,int x,int y)
 {
   char var; 
   std::cout<<x<<"\n";
   std::cout<<y;

   ISoundEngine* engine = createIrrKlangDevice();

  if (!engine)
  return;
  
	if (key== 'r')
		{drawu1(0);
		 engine->play2D("rightcym.wav", false);delay(); //delay1()
		}
		
	else if (key== 'y')		{drawu4(0);
			engine->play2D("Y_bell_rightcymbolmid.wav", false);delay(); //delay1()
		}	
	else if (key== 'u')
			{drawu5(0);
			engine->play2D("u_ride_rightcymbol_edge.wav", false);delay(); //delay1()
		}	
	else if (key== 'z' || key=='m')
			{drawl1(0);
			engine->play2D("z,m_open_downcym.wav", false);delay(); //delay1()	
			 	
			}
		else if (key== 'x' || key=='n')
			{drawl2(0);
			engine->play2D("x,n _hithat_close_downcym.wav", false);delay(); //delay1()	
			 	
			}
		else if (key== 'b')
			{drawl4(0);
			engine->play2D("B_kick_bass.wav", false);delay(); //delay1()	
			 	
			}
		else if (key== 'c' || key=='v')
			{drawl3(0);
			engine->play2D("C,v_left,rightsnare.wav", false);delay(); //delay1()	
			 	
			}
		else if (key== 'd' || key=='j')
			{drawl5(0);
			engine->play2D("snarec.wav", false);delay();; //delay1() //delay1()	
			 	
			}
	else if (key== 'f' || key=='g')
			{drawu2(0);
			engine->play2D("F,g_l,r_toptom .wav", false);delay(); 	
			 	
			}
		else if (key== 'h')
			{drawu3(0);
			engine->play2D("H_bottomtom.wav", false);delay(); 	
			 	
			}
		else
		    {
		    std::cout<<"outside\n";
		    }
		
	display();
   
  engine->drop();
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
    glutInitWindowSize(500,300);
    glutCreateWindow("VIRTUAL-DRUMmmmm");
    glutReshapeFunc(myReshape);
    init();
    glutDisplayFunc(display);
   glutMouseFunc(mouse);//reshape,glortho2d,if width<height reshape 2 param,width and height we et the values of that and then reshape,,,,current width aand fs width csw/fsw=cl/fsl  
    glutKeyboardFunc(keys);
    glutMainLoop();
}


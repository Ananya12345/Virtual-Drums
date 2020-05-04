#include <GL/glut.h>
#include <GL/gl.h>
#include <stdio.h>
#include <iostream>
#include <irrKlang.h>

using namespace std;
using namespace irrklang;
int width, height;
bool f1=false;
bool f2=false;
bool f3=false;
bool f4=false;
bool f5=false;
bool f6=false;
bool f7=false;
bool f8=false;
bool f9=false;
bool f10=false;

ISoundEngine *engine1 = createIrrKlangDevice();
irrklang::ISound* snd1 =engine1->play2D("rightcym.wav", true,true);

ISoundEngine *engine2 = createIrrKlangDevice();
irrklang::ISound* snd2 =engine2->play2D("F,g_l,r_toptom .wav",true, true);

ISoundEngine *engine3 = createIrrKlangDevice();
irrklang::ISound* snd3 =engine3->play2D("H_bottomtom.wav",true, true);

ISoundEngine *engine4 = createIrrKlangDevice();
irrklang::ISound* snd4 =engine4->play2D("Y_bell_rightcymbolmid.wav",true, true);

ISoundEngine *engine5 = createIrrKlangDevice();
irrklang::ISound* snd5 =engine5->play2D("u_ride_rightcymbol_edge.wav",true, true);

ISoundEngine *engine6 = createIrrKlangDevice();
irrklang::ISound* snd6 =engine6->play2D("z,m_open_downcym.wav",true, true);

ISoundEngine *engine7 = createIrrKlangDevice();
irrklang::ISound* snd7 =engine7->play2D("cymbolc.wav",true, true);

ISoundEngine *engine8 = createIrrKlangDevice();
irrklang::ISound* snd8 =engine8->play2D("C,v_left,rightsnare.wav",true, true);

ISoundEngine *engine9 = createIrrKlangDevice();
irrklang::ISound* snd9 =engine9->play2D("B_kick_bass.wav",true, true);

ISoundEngine *engine10 = createIrrKlangDevice();
irrklang::ISound* snd10 =engine10->play2D("snarec.wav",true, true);

void drawString(int x,int y,char *string)
{
char *c;
glRasterPos2i(x,y);
for(c=string;*c!='\0';c++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,*c);
}

void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glEnable(GL_LINE_STIPPLE);
}

void line()
{
	glLineWidth(3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2d(0, height / 2);
	glVertex2d(width, height / 2);
	glVertex2d(width / 5, 0);
	glVertex2d(width / 5, height);
	glVertex2d(2 * width / 5, 0);
	glVertex2d(2 * width / 5, height);
	glVertex2d(3 * width / 5, 0);
	glVertex2d(3 * width / 5, height);
	glVertex2d(4 * width / 5, 0);
	glVertex2d(4 * width / 5, height);
	glEnd();
	glFlush();
}

void drawl1(int x)
{

	 if (x == 1)
		glColor3f(0.1, 0.1, 0.1);
	else if (x==0)
		glColor3f(0.3, 0.1, 0.6);

	if (f6==true)
		glColor3f(0.07,0.67,0.67);		
	
	glBegin(GL_POLYGON);
	glVertex2d(0, 0);
	glVertex2d(width / 5, 0);
	glVertex2d(width / 5, height / 2); //125
	glVertex2d(0, height / 2);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	drawString(width/20,height/2.857,"Hit-hat");
	drawString(width/16,height/3.334,"Open");
	drawString(width/14.55,height/8.571,"Z/M");
	glFlush();
}

void drawl2(int x)
{
	 if (x == 1)
		glColor3f(0.1, 0.1, 0.1);
	else if (x==0)
		glColor3f(0.3, 0.1, 0.6);
	if (f7==true)
		glColor3f(0.07,0.67,0.67);
	glBegin(GL_POLYGON);
	glVertex2d(width / 5, 0);
	glVertex2d(2 * width / 5, 0);
	glVertex2d(2 * width / 5, height / 2);
	glVertex2d(width / 5, height / 2);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	drawString(width/4,height/2.857,"Hit-hat");
	drawString(width/3.902,height/3.334,"Closed");
	drawString(width/3.721,height/8.571,"X/N");
	glFlush();
	std::cout << width << "\n";
	std::cout << height << "\n";
	std::cout << "---------------------\n";
}

void drawl3(int x)
{
	 if (x == 1)
		glColor3f(0.1, 0.1, 0.1);
	else if (x==0)
		glColor3f(0.3, 0.1, 0.6);
	if (f8==true)
		glColor3f(0.07,0.67,0.67);
	glBegin(GL_POLYGON);
	glVertex2d(2 * width / 5, 0);
	glVertex2d(3 * width / 5, 0);
	glVertex2d(3 * width / 5, height / 2);
	glVertex2d(2 * width / 5, height / 2);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	drawString(width/2.162,height/3,"Snare");
	drawString(width/2.105,height/8.571,"C/V");
	glFlush();
}

void drawl4(int x)
{

	 if (x == 1)
		glColor3f(0.1, 0.1, 0.1);
	else if (x==0)
		glColor3f(0.3, 0.1, 0.6);
	if (f9==true)
		glColor3f(0.07,0.67,0.67);
	glBegin(GL_POLYGON);
	glVertex2d(3 * width / 5, 0);
	glVertex2d(4 * width / 5, 0);
	glVertex2d(4 * width / 5, height / 2);
	glVertex2d(3 * width / 5, height / 2);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	drawString(width/1.509,height/3,"Bass");
	drawString(width/1.468,height/8.571,"B");
	glFlush();
}

void drawl5(int x)
{

	 if (x == 1)
		glColor3f(0.1, 0.1, 0.1);
	else if (x==0)
		glColor3f(0.3, 0.1, 0.6);
	if (f10==true)
		glColor3f(0.07,0.67,0.67);
	glBegin(GL_POLYGON);
	glVertex2d(4 * width / 5, 0);
	glVertex2d(width, 0);
	glVertex2d(width, height / 2);
	glVertex2d(4 * width / 5, height / 2);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	drawString(width/1.212,height/3,"Snare Edge");
	drawString(width/1.143,height/8.571,"D/J");
	glFlush();
}

void drawu1(int x)
{

	 if (x == 1) 
		glColor3f(0.1, 0.1, 0.1);
	else if (x==0)
		glColor3f(0.3, 0.1, 0.6);
	if (f1==true)
		glColor3f(0.7, 0.3, 0.6);
	glBegin(GL_POLYGON);
	glVertex2d(0, height / 2);
	glVertex2d(width / 5, height / 2);
	glVertex2d(width / 5, height);
	glVertex2d(0, height);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	drawString(width/17.778,height/1.2,"Crash");
	drawString(width/13.334,height/1.579,"R");
	glFlush();
}

void drawu2(int x)
{

	 if (x == 1)
		glColor3f(0.1, 0.1, 0.1);
	else if (x==0)
		glColor3f(0.3, 0.1, 0.6);
	if (f2==true)
		glColor3f(0.7, 0.3, 0.6);
	glBegin(GL_POLYGON);
	glVertex2d(width / 5, height / 2);
	glVertex2d(2 * width / 5, height / 2);
	glVertex2d(2 * width / 5, height);
	glVertex2d(width / 5, height);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	drawString(width/3.809,height/1.2,"Tom");
	drawString(width/3.636,height/1.579,"F/G");
	glFlush();
}

void drawu3(int x)
{

	 if (x == 1)
		glColor3f(0.1, 0.1, 0.1);
	else if (x==0)
		glColor3f(0.3, 0.1, 0.6);
	if (f3==true)
		glColor3f(0.7, 0.3, 0.6);
	glBegin(GL_POLYGON);
	glVertex2d(2 * width / 5, height / 2);
	glVertex2d(3 * width / 5, height / 2);
	glVertex2d(3 * width / 5, height);
	glVertex2d(2 * width / 5, height);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	drawString(width/2.319,height/1.2,"Floor Tom");
	drawString(width/2.078,height/1.579,"H");
	glFlush();
}

void drawu4(int x)
{

	 if (x == 1)
		glColor3f(0.1, 0.1, 0.1);
	else if (x==0)
		glColor3f(0.3, 0.1, 0.6);
	if (f4==true)
		glColor3f(0.7, 0.3, 0.6);
	glBegin(GL_POLYGON);
	glVertex2d(3 * width / 5, height / 2);
	glVertex2d(4 * width / 5, height / 2);
	glVertex2d(4 * width / 5, height);
	glVertex2d(3 * width / 5, height);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	drawString(width/1.495,height/1.2,"Bell");
	drawString(width/1.455,height/1.579,"Y");
	glFlush();
}

void drawu5(int x)
{

	 if (x == 1)
		glColor3f(0.1, 0.1, 0.1);
	else if (x==0)
		glColor3f(0.3, 0.1, 0.6);
	if (f5==true)
		glColor3f(0.7, 0.3, 0.6);
	glBegin(GL_POLYGON);
	glVertex2d(4 * width / 5, height / 2);
	glVertex2d(width, height / 2);
	glVertex2d(width, height);
	glVertex2d(4 * width / 5, height);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	drawString(width/1.159,height/1.2,"Ride");
	drawString(width/1.143,height/1.579,"U");
	glFlush();
	std::cout << "u5\n";
}
	

void display()
{
	std::cout << "disp\n";

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

void delay()
{ //for light change
	int m, n;
	for (m = 0; m < 2000; m++)
		for (n = 0; n < 9000; n++)
			;
}

void delay1()
{ //for music
	int m, n;
	for (m = 0; m < 20000; m++)
		for (n = 0; n < 9000; n++)
			;
}


void endthis(int x){
	switch(x){
	case 1:
		snd1->setIsPaused(true);
	case 2:
		snd2->setIsPaused(true);
	case 3:
		snd3->setIsPaused(true);
	case 4:
		snd4->setIsPaused(true);
	case 5:
		snd5->setIsPaused(true);
	case 6:
		snd6->setIsPaused(true);
	case 7:
		snd7->setIsPaused(true);
	case 8:
		snd8->setIsPaused(true);
	case 9:
		snd9->setIsPaused(true);
	case 10:
		snd10->setIsPaused(true);
	
	default:
		return;
	}
}

void mouse(int button, int state, int x, int y)
{
	ISoundEngine *engine = createIrrKlangDevice();
	if (!engine)
		return;	
	
	if (button == GLUT_LEFT && state == GLUT_DOWN)
	{
		if (x > 0 && x < width / 5 && y < height / 2 && y > 0)
		{
			drawu1(0);
			engine->play2D("rightcym.wav", false); //delay1()
			delay1();
			delay();
		}

		if (x > width / 5 && x < 2 * (width / 5) && y < height / 2 && y > 0)
		{
			drawu2(0);
			engine->play2D("F,g_l,r_toptom .wav", false); //delay1()
			delay1();
			delay();
		}
		if (x > 2 * (width / 5) && x < 3 * (width / 5) && y < height / 2 && y > 0)
		{
			drawu3(0);
			engine->play2D("H_bottomtom.wav", false); //delay1()
			delay1();
			delay();
		}
		if (x > 3 * (width / 5) && x < 4 * width / 5 && y < height / 2 && y > 0)
		{
			drawu4(0);
			engine->play2D("Y_bell_rightcymbolmid.wav", false); //delay1()
			delay1();
			delay();
		}
		if (x > 4 * (width / 5) && x < width && y < height / 2 && y > 0)
		{
			drawu5(0);
			engine->play2D("u_ride_rightcymbol_edge.wav", false);
			delay1();
			delay();
		}
		if (x > 0 && x < width / 5 && y < height && y > height / 2)
		{
			drawl1(0);
			engine->play2D("z,m_open_downcym.wav", false); //delay1() //delay1()
			delay1();
			delay();
		}
		if (x > width / 5 && x < 2 * width / 5 && y < height && y > height / 2)
		{
			drawl2(0);
			engine->play2D("cymbolc.wav", false);
			delay1();
			delay(); //delay1()
		}

		if (x > 2 * width / 5 && x < 3 * width / 5 && y < height && y > height / 2)
		{
			drawl3(0);
			engine->play2D("C,v_left,rightsnare.wav", false); //delay1()
			delay1();
			delay();
		}
		if (x > 3 * width / 5 && x < 4 * width / 5 && y < height && y > height / 2)
		{
			drawl4(0);
			engine->play2D("B_kick_bass.wav", false); //delay1()
			delay1();
			delay();
		}
		if (x > 4 * width / 5 && x < width && y < height && y > height / 2)
		{
			drawl5(0);
			engine->play2D("snarec.wav", false); //delay1()
			delay1();
			delay();
		}
		else
		{
			std::cout << "outside";
		}

	} //leftdown_mousfunc
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		if (x > 0 && x < width / 5 && y < height / 2 && y > 0)
		{	f1=true;
			drawu1(0);
			snd1->setIsPaused(false);
			//delay(); //delay1()
		}

		if (x > width / 5 && x < 2 * (width / 5) && y < height / 2 && y > 0)
		{	f2=true;
			drawu2(0);
			snd2->setIsPaused(false);
			delay(); //delay1()
		}
		if (x > 2 * (width / 5) && x < 3 * (width / 5) && y < height / 2 && y > 0)
		{	f3=true;
			drawu3(0);
			snd3->setIsPaused(false);
			delay();
		}
		if (x > 3 * (width / 5) && x < 4 * width / 5 && y < height / 2 && y > 0)
		{	f4=true;
			drawu4(0);
			snd4->setIsPaused(false); //delay1()
			delay();
		}
		if (x > 4 * (width / 5) && x < width && y < height / 2 && y > 0)
		{	f5=true;
			drawu5(0);
			snd5->setIsPaused(false);
			delay();
		}
		if (x > 0 && x < width / 5 && y < height && y > height / 2)
		{	f6=true;
			drawl1(0);
			snd6->setIsPaused(false);
			delay();
		}
		if (x > width / 5 && x < 2 * width / 5 && y < height && y > height / 2)
		{	f7=true;
			drawl2(0);
			snd7->setIsPaused(false);
			delay(); //delay1();
		}

		if (x > 2 * width / 5 && x < 3 * width / 5 && y < height && y > height / 2)
		{	f8=true;
			drawl3(0);
			snd8->setIsPaused(false); //delay1();
			delay();
		}
		if (x > 3 * width / 5 && x < 4 * width / 5 && y < height && y > height / 2)
		{	f9=true;
			drawl4(0);
			snd9->setIsPaused(false); //delay1();
			delay();
		}
		if (x > 4 * width / 5 && x < width && y < height && y > height / 2)
		{	f10=true;
			drawl5(0);
			snd10->setIsPaused(false); //delay1();
			delay();
		}
		else
		{
			std::cout << "outside";
		}
	}

	if (button==GLUT_MIDDLE_BUTTON && state==GLUT_DOWN)
	    {
		if (x>0 && x<width/5 && y<height/2 && y>0)
		    {	f1=false;
			drawu1(0);
			endthis(1);
			delay();
		
		    }
		if (x > width / 5 && x < 2 * (width / 5) && y < height / 2 && y > 0)
		{	f2=false;
			drawu2(0);
			endthis(2);
			delay(); //delay1()
		}

		if (x > 2 * (width / 5) && x < 3 * (width / 5) && y < height / 2 && y > 0)
		{	f3=false;
			drawu3(0);
			endthis(3);
			delay();
		}
		if (x > 3 * (width / 5) && x < 4 * width / 5 && y < height / 2 && y > 0)
		{	f4=false;
			drawu4(0);
			endthis(4);
			delay();
		}
		if (x > 4 * (width / 5) && x < width && y < height / 2 && y > 0)
		{	f5=false;
			drawu5(0);
			endthis(5);
			delay();
		}
		if (x > 0 && x < width / 5 && y < height && y > height / 2)
		{	f6=false;
			drawl1(0);
			endthis(6);
			delay();
		}
		if (x > width / 5 && x < 2 * width / 5 && y < height && y > height / 2)
		{	f7=false;
			drawl2(0);
			endthis(7);
			delay(); //delay1();
		}

		if (x > 2 * width / 5 && x < 3 * width / 5 && y < height && y > height / 2)
		{	f8=false;
			drawl3(0);
			endthis(8);
			delay();
		}
		if (x > 3 * width / 5 && x < 4 * width / 5 && y < height && y > height / 2)
		{	f9=false;
			drawl4(0);
			endthis(9);
			delay();
		}
		if (x > 4 * width / 5 && x < width && y < height && y > height / 2)
		{	f10=false;
			drawl5(0);
			endthis(10);
			delay();
		}

	}

	display();
	engine->drop();
}




void keys(unsigned char key, int x, int y)
{
	char var;
	std::cout << x << "\n";
	std::cout << y;
			
	ISoundEngine *engine = createIrrKlangDevice();

	if (!engine)
		return;

	if (key == 'r' || key == 'R')
	{
		drawu1(0);
		engine->play2D("rightcym.wav", false);
		delay(); delay1();
	}

	else if (key == 'y' || key == 'Y')
	{
		drawu4(0);
		engine->play2D("Y_bell_rightcymbolmid.wav", false);
		delay(); delay1();//delay1()
	}
	else if (key == 'u' || key == 'U')
	{
		drawu5(0);
		engine->play2D("u_ride_rightcymbol_edge.wav", false);
		delay(); delay1();//delay1()
	}
	else if (key == 'z' || key == 'm' || key == 'Z' || key == 'M')
	{
		drawl1(0);
		engine->play2D("z,m_open_downcym.wav", false);
		delay(); delay1();//delay1()
	}
	else if (key == 'x' || key == 'n' || key == 'X' || key == 'N')
	{
		drawl2(0);
		engine->play2D("cymbolc.wav", false);
		delay(); delay1(); //delay1()
	}
	else if (key == 'b' || key == 'B')
	{
		drawl4(0);
		engine->play2D("B_kick_bass.wav", false);
		delay();delay1(); //delay1()
	}
	else if (key == 'c' || key == 'v' || key == 'C' || key == 'V')
	{
		drawl3(0);
		engine->play2D("C,v_left,rightsnare.wav", false);
		delay(); delay1();//delay1()
	}
	else if (key == 'd' || key == 'j' || key == 'D' || key == 'J')
	{
		drawl5(0);
		engine->play2D("snarec.wav", false);
		delay();delay1();
		 //delay1() //delay1()
	}
	else if (key == 'f' || key == 'g' || key == 'F' || key == 'G')
	{
		drawu2(0);
		engine->play2D("F,g_l,r_toptom .wav", false);
		delay();delay1();
	}
	else if (key == 'h' || key == 'H')
	{
		drawu3(0);
		engine->play2D("H_bottomtom.wav", false);
		delay();delay1();
	}
	else
	{
		std::cout << "outside\n";
	}

	display();

	engine->drop();
}

void myReshape(int w, int h)
{

glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
glLoadIdentity();
 gluOrtho2D(0.0,w,0.0,h);
glClear(GL_COLOR_BUFFER_BIT);
std::cout<<"reshape\n";
    //glViewport(0, 0, w, h);
	std::cout<<w<<"\n";
	std::cout<<h<<"\n";
	width=w;height=h;
   display();
}



void fstscreen(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,1.0,1.0);
drawString(width/2.5,height/1.132,"Virtual Drum Pad");
drawString(width/8,height/1.304,"Instructions:");
drawString(width/8,height/1.395,"1. Mentally prepare yourself to Rock!");
drawString(width/8,height/1.5,"2. Press any of the tiles to play their corresponding sounds:");
drawString(width/6.154,height/1.622,"\tFor the Mouse:");
drawString(width/5.334,height/1.765,"\t\tLEFT CLICK-plays one beat");
drawString(width/5.334,height/1.935,"\t\tRIGHT CLICK-plays on loop");
drawString(width/5.334,height/2.143,"\t\tMIDDLE BUTTON CLICK-pauses the sound playing on loop");
drawString(width/6.154,height/2.4,"\tFor the Keyboard:");
drawString(width/5.334,height/2.727,"\t\t Press the corresponding key to play the sound");
drawString(width/8,height/3.158,"3. Click anywhere to start!");
drawString(width/1.334,height/6.667,"By:");
drawString(width/1.334,height/10,"Ananya Das H.N");
drawString(width/1.334,height/20,"Ananya Shivkumar");
glEnd();
glFlush();
}



int main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(10, 10);
	glutInitWindowSize(800, 600);
	glutCreateWindow("VIRTUAL-DRUMS");
	glutDisplayFunc(fstscreen);
	glutReshapeFunc(myReshape);
	init();
	
	glutMouseFunc(mouse); //reshape,glortho2d,if width<height reshape 2 param,width and height we et the values of that and then reshape,,,,current width aand fs width csw/fsw=cl/fsl
	glutKeyboardFunc(keys);
	glutMainLoop();
}

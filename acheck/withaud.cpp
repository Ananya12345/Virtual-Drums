#include <GL/glut.h>
#include <GL/gl.h>
#include <iostream>
#include<SOIL.h>
#include <irrKlang.h>

using namespace irrklang;


void mouse(int button, int state, int x, int y)
    {   char var; 

	ISoundEngine* engine = createIrrKlangDevice();

  	if (!engine)
    		return;
   do{
	if (button==GLUT_LEFT && state==GLUT_DOWN)
	    {
		if (x>0 && x<100 && y<100 && y>0)
		    {
		    engine->play2D("lion2.wav", false);	
			std::cin>>var;		

		    }
		else
		    {
		    std::cout<<"outside";
		    }
		glutPostRedisplay();

		
	    }
    }while (var!='q');
    engine->drop(); // delete engine
		return;
  }



int main(int argc, char** argv)
{
    //create GL context
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA);
    glutInitWindowSize(200, 200);
    glutCreateWindow("windowname");
    glMatrixMode(GL_PROJECTION);
    glOrtho(0, 200, 0, 200, -1, 1);
    glMatrixMode(GL_MODELVIEW);

    //clear and draw quad with texture (could be in display callback)
    glClear(GL_COLOR_BUFFER_BIT);

    GLuint tex = SOIL_load_OGL_texture
	(
		"frog.png",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);
	 
	if( 0 == tex )

		std::cout<<( "SOIL loading error: '%s'\n", SOIL_last_result() );

  
    glBindTexture(GL_TEXTURE_2D, tex);
   // glPushMatrix();
    
    
    glEnable(GL_TEXTURE_2D);
    glBegin(GL_QUADS);
    glTexCoord2i(0, 0); glVertex2i(0, 0);
    glTexCoord2i(0, 1); glVertex2i(100, 0);
    glTexCoord2i(1, 1); glVertex2i(100, 100);
    glTexCoord2i(1, 0); glVertex2i(0, 100);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    
    //glPopMatrix();
    glFlush(); //if you remove this there is a 

    glutMouseFunc(mouse);
    glutMainLoop();

    return 0;
}

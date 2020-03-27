#include <iostream>
#include <irrKlang.h>
using namespace irrklang;
<<<<<<< HEAD
#pragma comment(lib, "irrKlang.lib")
int main(int argc, const char** argv)
=======

int main()
>>>>>>> 35ec0b685cb90ce9527f8e296c230ec12ce682d9
{
  // start the sound engine with default parameters
  ISoundEngine* engine = createIrrKlangDevice();

  if (!engine)
    return 0; // error starting up the engine
 
  // play some sound stream, looped
  engine->play2D("/home/ananyadas/Documents/cg lab/Simple OpenGL Image Library/projects/makefile/Virtual-Drums/acheck/inside.wav", true);

  char i = 0;
  std::cin >> i; // wait for user to press some key

  engine->drop(); // delete engine
  return 0;
}

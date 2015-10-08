#include "SDL2/SDL.h"
#include "GL/glu.h"

using namespace std;

int main()
{
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Window * win = SDL_CreateWindow("Hello World", 100, 100, 640, 640, SDL_WINDOW_SHOWN);
  SDL_Renderer * renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
  SDL_GLContext * context = SDL_GL_CreateContext(win);

  glClearColor(0, 0, 0, 1);
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_TRIANGLES);
    glColor3f(0.1, 0.2, 0.3);
    glVertex2f(0, 0);
    glVertex2f(1, 0);
    glVertex2f(0, 1);
  glEnd();

  glBegin(GL_TRIANGLES);
    glColor3f(0.3, 0.2, 0.1);
    glVertex2f(0, 0);
    glVertex2f(-1, 0);
    glVertex2f(0, -1);
  glEnd();

  SDL_GL_SwapWindow(win);

  SDL_Delay(3000);
  SDL_GL_DeleteContext(context);
  SDL_DestroyWindow(win);

  return 0;
}

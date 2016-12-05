// GLUT header file
#include <GL/glut.h>

// basic windows macro
#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700

// register functions
void onDisplay(void);
void onUpdate(void);
void onKeyboard(unsigned char key, int x, int y);

int main(int argc, char*  argv[]) {

    // init glut with para
    glutInit(&argc, argv);
    // using RGBA mode
    // single buffer or dual buffer windows. Here we use RGBA and dual buffer windows
    glutInitDisplayMode(GLUT_RGBA |  GLUT_DOUBLE);
    // top-left of windows's position
    glutInitWindowPosition(WINDOW_X_POS, WINDOW_Y_POS);
    // width and height of window
    glutInitWindowSize(WIDTH, HEIGHT);
    // the title of window
    glutCreateWindow("Solar System");

    // glutDisplayFunc's orig version is glutDisplayFunc(void (*func)(void))
    // it is a call-back func. every time GLUT confirm a windows's content needed to be updated ,
    // glutDisplayFunc's registered function will be invoked.
    //
    // glutIdleFunc(void (*func)(void)) will specify a function will process loop
    // when idle the function will be called. the call-back function will have a para as pointer
    //
    // glutKeyboardFunc(void (*func)(unsigned char key, int x, int y))
    // link the keyboard key with a function
    //
    // below is register three functions to glut
    glutDisplayFunc(onDisplay);
    glutIdleFunc(onUpdate);
    glutKeyboardFunc(onKeyboard);

    glutMainLoop();
    return 0;
}

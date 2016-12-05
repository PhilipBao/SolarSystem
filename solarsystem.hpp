//
// solarsystem.hpp
// solarsystem
//
#include <GL/glut.h>

#include "stars.hpp"

#ifndef solarsystem_hpp
#define solarsystem_hpp

#define STARS_NUM 10

class SolarSystem {

public:

    SolarSystem();
    ~SolarSystem();

    void onDisplay();
    void onUpdate();
    void onKeyboard(unsigned char key, int x, int y);

private:
    Star *stars[STARS_NUM];

    // observe angle
    GLdouble viewX, viewY, viewZ;
    GLdouble centerX, centerY, centerZ;
    GLdouble upX, upY, upZ;
};
#endif
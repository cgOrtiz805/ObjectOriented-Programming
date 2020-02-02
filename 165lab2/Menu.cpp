#include <iostream>
#include <cmath>

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include "Menu.h"

using namespace std;


void pchoice(){


    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Set background color to black
    glClearColor(0.0, 0.0, 0.0, 1.0);

    // Set up the transformations stack
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();


    // Draw stuff here
glColor3f(1,1,1); //#1
glBegin(GL_POLYGON);
glVertex2f(-.5,-.7);
glVertex2f(-.3,-.7);
glVertex2f(-.3,.6);
glVertex2f(-.5,.6);

glEnd();
//-------------------------------------------
    glColor3f(0.0, 0.0, 1.0); //left Button
    glBegin(GL_POLYGON);
    glVertex2f (-0.8, 0.8);
    glVertex2f(-0.8, -0.8);
    glVertex2f(-.1, -0.8);
    glVertex2f(-.1, 0.8);

    glEnd();
//----------------------------------------------
glColor3f(1,1,1); //#2
glBegin(GL_POLYGON);
glVertex2f(.2,-.7);
glVertex2f(.7,-.7);
glVertex2f(.7,-.5);
glVertex2f(.2,-.5);

glEnd();
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(.2,-.5);
glVertex2f(.4,-.5);
glVertex2f(.4,-.2);
glVertex2f(.2,-.2);

glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(.2,-.2);
glVertex2f(.2,0);
glVertex2f(.7,0);
glVertex2f(.7,-.2);
glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);
    glVertex2f(.7,0);
    glVertex2f(.5,0);
    glVertex2f(.5,.3);
    glVertex2f(.7,.3);
    glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);
    glVertex2f(.7,.3);
     glVertex2f(.7,.5);
     glVertex2f(.2,.5);
     glVertex2f(.2,.3);
    glEnd();



//--------------------------------------------------------
    glColor3f(1,1,0); //right Button
    glBegin(GL_POLYGON);

    glVertex2f(.1,.8);
    glVertex2f(.1,-.8);
    glVertex2f(.8,-.8);
    glVertex2f(.8,.8);
    glEnd();







    glFlush();
    glutSwapBuffers();


}


void menu() {
    pchoice();
}

#include <iostream>
#include <GL/gl.h>
#include <GLUT/glut.h>
#include <cmath>
#include <cstdlib>
using namespace std;

int xa = 100, ya = 100;
int xb = 400, yb = 300;

void drawDDA(int x1, int y1, int x2, int y2)
{
    float dx = x2 - x1;
    float dy = y2 - y1;

    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);
    if (steps == 0)
        return;

    float xInc = dx / (float)steps;
    float yInc = dy / (float)steps;

    float x = x1;
    float y = y1;

    glBegin(GL_POINTS);
    for (int i = 0; i <= steps; i++)
    {
        glVertex2i(round(x), round(y));
        x += xInc;
        y += yInc;
    }
    glEnd();
}

void drawLine()
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawDDA(xa, ya, xb, yb);
    glFlush();
}

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glColor3f(1.0f, 0.5f, 0.0f); // Sunset Orange
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
    glPointSize(2.0f);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("DDA Line Drawing");
    init();
    glutDisplayFunc(drawLine);
    glutMainLoop();
    return 0;
}
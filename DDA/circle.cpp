#include <iostream>
#include <GL/gl.h>
#include <GLUT/glut.h>
#include <cmath>
#include <cstdlib>
using namespace std;

int xc = 250, yc = 250, r = 100;

void drawCirclePoints(int xc, int yc, int x, int y)
{
    glVertex2i(xc + x, yc + y);
    glVertex2i(xc - x, yc + y);
    glVertex2i(xc + x, yc - y);
    glVertex2i(xc - x, yc - y);
    glVertex2i(xc + y, yc + x);
    glVertex2i(xc - y, yc + x);
    glVertex2i(xc + y, yc - x);
    glVertex2i(xc - y, yc - x);
}

void drawMidpointCircle(int xc, int yc, int r)
{
    int x = 0;
    int y = r;
    int p = 1 - r;

    glBegin(GL_POINTS);
    drawCirclePoints(xc, yc, x, y);

    while (x < y)
    {
        x++;
        if (p < 0)
        {
            p += 2 * x + 1;
        }
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }
        drawCirclePoints(xc, yc, x, y);
    }
    glEnd();
}

void drawCircle()
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawMidpointCircle(xc, yc, r);
    glFlush();
}

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glColor3f(1.0f, 0.9f, 0.0f); // Bright Yellow
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
    glutCreateWindow("Midpoint Circle Drawing");
    init();
    glutDisplayFunc(drawCircle);
    glutMainLoop();
    return 0;
}
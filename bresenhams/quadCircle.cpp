#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;

int xc = 0, yc = 0, r = 50;

void plotPixel(int x, int y)
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

void drawCircle()
{
    int x = 0;
    int y = r;
    int d = 3 - 2 * r;

    glBegin(GL_POINTS);
    while (x <= y)
    {
        plotPixel(x, y);

        if (d < 0)
        {
            d = d + 4 * x + 6;
        }
        else
        {
            d = d + 4 * (x - y) + 10;
            y--;
        }
        x++;
    }
    glEnd();
}

void drawAxis()
{
    glColor3f(1.0f, 0.4f, 0.7f); // Hot Pink
    glBegin(GL_LINES);
    glVertex2i(-400, 0);
    glVertex2i(400, 0);
    glVertex2i(0, -400);
    glVertex2i(0, 400);
    glEnd();
    glFlush();
}

void displayCircle()
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawAxis();
    glColor3f(0.0f, 0.8f, 1.0f); // Neon Blue
    xc = 200;
    yc = 200;
    drawCircle();

    glColor3f(1.0f, 0.5f, 0.0f); // Sunset Orange
    xc = -200;
    yc = 200;
    drawCircle();

    glColor3f(0.25f, 0.41f, 0.88f); // Dodger Blue
    xc = -200;
    yc = -200;
    drawCircle();

    glColor3f(0.0f, 1.0f, 0.0f); // Lime Green
    xc = 200;
    yc = -200;
    drawCircle();

    glFlush();
}

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glColor3f(1.0f, 0.9f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-400, 400, -400, 400);
    glPointSize(2.0f);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Bresenham Circle Drawing");
    init();
    glutDisplayFunc(displayCircle);
    glutMainLoop();
    return 0;
}
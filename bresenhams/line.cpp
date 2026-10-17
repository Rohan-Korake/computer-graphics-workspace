#include <iostream>
#include <cmath>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;

int x0_val = 100, y0_val = 100;
int x1_val = 400, y1_val = 350;

void drawLine(int x0, int y0, int x1, int y1)
{
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    int err = dx - dy;

    while (true)
    {
        glVertex2i(x0, y0);

        if (x0 == x1 && y0 == y1)
            break;

        int e2 = 2 * err;
        if (e2 > -dy)
        {
            err -= dy;
            x0 += sx;
        }
        if (e2 < dx)
        {
            err += dx;
            y0 += sy;
        }
    }
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);
    drawLine(x0_val, y0_val, x1_val, y1_val);
    glEnd();

    glFlush();
}

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f); // Green color for the line
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
    glutCreateWindow("Bresenham Line Drawing");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
#include <iostream>
#include <OpenGl/gl.h>
#include <GLUT/glut.h>
#include <cmath>
using namespace std;

// plot the points
void DDA(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = max(abs(dx), abs(dy));

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

// calculate the points
void drawSymmetic()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(6.0f);

    int cx = 400;
    int cy = 400;

    // Line length

    // 360 / 12 = 30 means we have to use 30 degree angle
    for (int i = 0; i < 12; i++)
    {
        float angle = i * 30.0f * (3.14159265f / 180.0f);

        glColor3f(1.0f, 0.0f, 0.5f); // Electric Cyan
        int length = 200;

        // give Bright Yellow for the main vertex
        if (i == 0 || i == 3 || i == 6 || i == 9)
        {
            length = 250;
            glColor3f(0.0f, 1.0f, 1.0f); // Magenta
        }

        int x2 = cx + round(length * cos(angle));
        int y2 = cy + round(length * sin(angle));

        // display line
        DDA(cx, cy, x2, y2);
    }
    glFlush();
}

// set up the 2D coordinate system
void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 800, 0, 800);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("12 Way Symmetry");
    init();
    glutDisplayFunc(drawSymmetic);
    glutMainLoop();
    return 0;
}
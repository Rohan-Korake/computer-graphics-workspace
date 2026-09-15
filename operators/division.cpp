#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void drawDivision()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.9f, 0.0f); // Bright Yellow

    // top reactangle
    glBegin(GL_QUADS);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(0.1f, 0.3f);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(-0.1f, 0.2f);

    // middle reactangle
    glBegin(GL_QUADS);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(0.4f, 0.1f);
    glVertex2f(0.4f, -0.1f);
    glVertex2f(-0.4f, -0.1f);

    // Bottom reactangle
    glBegin(GL_QUADS);
    glVertex2f(-0.1f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(-0.1f, -0.2f);

    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Division");
    glutDisplayFunc(drawDivision);
    glutMainLoop();
    return 0;
}
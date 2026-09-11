#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void drawEqualTo()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glVertex2f(-0.5, 0.2);
    glVertex2f(0.5, 0.2);
    glVertex2f(0.5, 0.1);
    glVertex2f(-0.5, 0.1);

    glBegin(GL_QUADS);
    glVertex2f(-0.5, -0.2);
    glVertex2f(0.5, -0.2);
    glVertex2f(0.5, -0.1);
    glVertex2f(-0.5, -0.1);

    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("EqualTo");
    glutDisplayFunc(drawEqualTo);
    glutMainLoop();
    return 0;
}
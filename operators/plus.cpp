#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void drawPlus()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.8f, 0.1f, 0.1f); // Crimson Red

    // vertical
    glBegin(GL_QUADS);
    glVertex2f(0.1f, 0.6f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(-0.1f, 0.6f);

    // horizontal
    glBegin(GL_QUADS);
    glVertex2f(-0.6f, 0.1f);
    glVertex2f(0.6f, 0.1f);
    glVertex2f(0.6f, -0.1f);
    glVertex2f(-0.6f, -0.1f);

    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Plus");
    glutDisplayFunc(drawPlus);
    glutMainLoop();
    return 0;
}
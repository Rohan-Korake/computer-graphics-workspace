#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void drawCorss()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0f, 0.8f, 1.0f); // Neon Blue

    // First line bottom left to top right
    glBegin(GL_QUADS);
    glVertex2f(-0.6f, -0.5f);
    glVertex2f(0.5f, 0.6f);
    glVertex2f(0.6f, 0.5f);
    glVertex2f(-0.5f, -0.6f);

    // Second line Top left to Bottom right
    glBegin(GL_QUADS);
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(0.6f, -0.5f);
    glVertex2f(0.5f, -0.6f);
    glVertex2f(-0.6f, 0.5f);

    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Cross");
    glutDisplayFunc(drawCorss);
    glutMainLoop();
    return 0;
}
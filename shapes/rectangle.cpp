#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void drawTriangle()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.5f, 0.0f); // Orange
    glBegin(GL_QUADS);
    glVertex2f(-0.5f, -0.3f); // Bottom-left
    glVertex2f(0.5f, -0.3f);  // Bottom-right
    glVertex2f(0.5f, 0.3f);   // Top-right
    glVertex2f(-0.5f, 0.3f);  // Top-left
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);

    // Thematic window title with a greeting
    glutCreateWindow("Orange Reactangle");

    glutDisplayFunc(drawTriangle);
    glutMainLoop();
    return 0;
}
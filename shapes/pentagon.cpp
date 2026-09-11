#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void drawPentagon()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 1.0f, 0.0f); // Lime color

    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.5f);   // Top vertex
    glVertex2f(0.5f, 0.1f);   // Top-right vertex
    glVertex2f(0.3f, -0.5f);  // Bottom-right vertex
    glVertex2f(-0.3f, -0.5f); // Bottom-left vertex
    glVertex2f(-0.5f, 0.1f);  // Top-left vertex
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);

    glutCreateWindow("Lime Pentagon");

    glutDisplayFunc(drawPentagon);
    glutMainLoop();
    return 0;
}
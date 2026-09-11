#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void drawMinus()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.50f, 0.80f, 0.95f); // Sky Blue
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
    glutCreateWindow("Minus");
    glutDisplayFunc(drawMinus);
    glutMainLoop();
    return 0;
}
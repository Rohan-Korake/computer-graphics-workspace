#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
void drawParallelogram()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.8f, 0.0f); // Golden Yellow
    glBegin(GL_QUADS);
    glVertex2f(-0.6f, -0.3f); // Bottom-left
    glVertex2f(0.4f, -0.3f);  // Bottom-right
    glVertex2f(0.2f, 0.5f);   // Top-right
    glVertex2f(-0.8f, 0.5f);  // Top-left
    glEnd();

    glFlush();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);

    glutCreateWindow("Parallelogram");

    glutDisplayFunc(drawParallelogram);
    glutMainLoop();
    return 0;
}
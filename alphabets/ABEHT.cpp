#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void drawEqualTo()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //----- A -----
    glColor3f(1.0f, 0.5f, 0.0f); // Sunset Orange
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.5f, -0.5f);
    glEnd();

    // middle line
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.723f, 0.0f);
    glVertex2f(-0.575f, 0.0f);
    glEnd();

    //----- B -----
    glColor3f(0.0f, 1.0f, 0.0f); // Lime Green
    // Vertical line
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.4f, -0.5f);
    glVertex2f(-0.4f, 0.5f);

    // Top Loop
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.3f, 0.0f);

    // common line
    glVertex2f(-0.4f, 0.0f);

    // Bottom Loop
    glVertex2f(-0.3f, 0.0f);
    glVertex2f(-0.2f, -0.1f);
    glVertex2f(-0.2f, -0.4f);
    glVertex2f(-0.3f, -0.5f);
    glVertex2f(-0.4f, -0.5f);
    glEnd();

    //----- E -----
    glColor3f(1.0f, 0.9f, 0.0f); // Bright Yellow
    // Vertical line
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(-0.1f, 0.5f);

    // top horizontal line
    glVertex2f(0.1f, 0.5f);
    glEnd();

    // Middle horizontal line
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(0.1f, 0.0f);
    glEnd();

    // Bottom horizontal line
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(0.1f, -0.5f);
    glEnd();

    //----- H -----
    glColor3f(0.0f, 1.0f, 0.0f); // Lime Green
    // Vertical line
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.2f, -0.5f);
    glEnd();

    // middle line
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.45f, 0.0f);
    glEnd();

    // Vertical line
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.45f, 0.5f);
    glVertex2f(0.45f, -0.5f);
    glEnd();

    //----- T -----
    glColor3f(1.0f, 0.5f, 0.0f); // Sunset Orange
    // top horizontal line
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(0.8f, 0.5f);
    glEnd();

    // Vertical line
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.65f, 0.5f);
    glVertex2f(0.65f, -0.5f);
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(2900, 2000);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("A B E H T");
    glutDisplayFunc(drawEqualTo);
    glutMainLoop();
    return 0;
}
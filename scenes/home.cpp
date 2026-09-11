#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

// draw home block
void drawHome()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // Top Trapezoid ( roof )
    glColor3f(0.75f, 0.30f, 0.20f); // Terracotta Red
    glBegin(GL_QUADS);
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.7f, 0.0f);
    glVertex2f(-0.7f, 0.0f);

    // Bottom Reactangle ( wall )
    glColor3f(0.92f, 0.88f, 0.78f); // Beige
    glBegin(GL_QUADS);
    glVertex2f(-0.6, 0.0f);
    glVertex2f(0.6f, 0.0f);
    glVertex2f(0.6f, -0.7f);
    glVertex2f(-0.6f, -0.7f);

    // Middle Reactangle ( Door )
    glColor3f(0.45f, 0.25f, 0.12f); // Wood Brown
    glBegin(GL_QUADS);
    glVertex2f(-0.2f, -0.7f);
    glVertex2f(0.2f, -0.7f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(-0.2f, -0.3f);

    // Left Rectangle ( Window )
    glColor3f(0.50f, 0.80f, 0.95f); // Sky Blue
    glBegin(GL_QUADS);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.3f, -0.1f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-0.5f, -0.3f);

    // Right Rectangle ( Window )
    glColor3f(0.50f, 0.80f, 0.95f); // Sky Blue
    glBegin(GL_QUADS);
    glVertex2f(0.5f, -0.1f);
    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(0.5f, -0.3f);

    glEnd();
    glFlush();
}

// main entry block
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Home");
    glutDisplayFunc(drawHome);
    glutMainLoop();
    return 0;
}
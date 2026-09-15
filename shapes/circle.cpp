#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void drawCircle()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.9f, 0.0f); // Bright Yellow
    glBegin(GL_LINE_LOOP);
    float cx = 0.0f;       // Center X position
    float cy = 0.0f;       // Center Y position
    float radius = 0.5f;   // Radius of the circle
    int num_segments = 50; // Smoothness (more segments = smoother circle)

    for (int i = 0; i < num_segments; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * cosf(theta);
        float y = radius * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Circle");
    glutDisplayFunc(drawCircle);
    glutMainLoop();
    return 0;
}
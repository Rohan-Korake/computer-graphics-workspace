#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
        glColor3f(0.0f, 0.8f, 1.0f); // Neon Blue
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(0.5f, -0.5f);
        glVertex2f(0.0f, 0.5f);
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    
    // Thematic window title with a greeting
    glutCreateWindow("Hello! Starting Computer Graphics Lab...");
    
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>

// Program setup to run on Linux(Fedora)


void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSwapBuffers();
};

void init() {
    glClearColor(0.3,0.3,0.3,0);
    gluOrtho2D(0,1024,512,0);
};

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(1024, 512);
    glutCreateWindow("Raycaster");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
};

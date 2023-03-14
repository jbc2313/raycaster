#include <GL/freeglut_std.h>
#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>

// Program setup to run on Linux(Fedora)

// Player Posistion
float px,py;  

void drawPlayer()  {
    glColor3f(1,1,0);
    glPointSize(8);
    glBegin(GL_POINTS);
    glVertex2i(px,py);
    glEnd();
};

void playerControls(unsigned char key, int x, int y) {
    if(key=='a') {
        px-=5;
    };
    if(key=='d') {
        px+=5;
    };
    if(key=='w') {
        py-=5;
    };
    if(key=='s') {
        py+=5;
    };
    glutPostRedisplay();
};


void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    drawPlayer();
    glutSwapBuffers();
};

void init() {
    glClearColor(0.3,0.3,0.3,0);
    gluOrtho2D(0,1024,512,0);
    px=300;
    py=300;
};

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(1024, 512);
    glutCreateWindow("Raycaster");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(playerControls);
    glutMainLoop();
};

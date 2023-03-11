#include <stdio.h>
#include <stdlib.h>
#include <GLFW/glfw3.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glfwSwapBuffers();
};

void init() {
    glClearColor(0.3,0.3,0.3,0);
    gluOrtho2D(0,1024,512,0);
};

int main(int argc, char *argv[]) {
    glfwInit(&argc, argv);
    glfwInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glfwInitWindowSize(1024, 512);
    glfwCreateWindow("Raycaster");
    init();
    glfwDisplayFunc(display);
    glfwMainLoop();
};

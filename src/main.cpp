#include <GL/glut.h>
#include "road.h"
#include "car.h"

Car car;

Road road(0.6f); // road obj


void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    road.draw();
    car.draw();

    glutSwapBuffers();

}

void update(int value){
    car.update();
    glutPostRedisplay(); // request screen refresh
    glutTimerFunc(16, update, 0); // call again after 16 ms
}


void handleKeys(int key, int x, int y){
    switch (key){
        case GLUT_KEY_LEFT:
        //case 'a':
            car.moveLeft();
            break;

        case GLUT_KEY_RIGHT:
        //case 'd' : 
            car.moveRight();
            break;
        case GLUT_KEY_UP:
        //case 'w':
            car.accelerate();
            break;
        case GLUT_KEY_DOWN:
        //case 's':
            car.brake();
            break;
 
    }
    glutPostRedisplay();

}

void handleKeysNormal(unsigned char key, int x, int y){
    switch(key){
        case 'a' :car.moveLeft();break;
        case 'd' :car.moveRight();break;
        case 'w' :car.accelerate();break;
        case 's' :car.brake();break;


    }
    glutPostRedisplay();
}




void init(){
    glClearColor(0.0f, 0.5f, 0.8f, 1.0f); //sky blue bg
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0f, 1.0f, -1.0f, 1.0f);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutCreateWindow("Driving Sim");

    init();
    glutDisplayFunc(display);
    glutSpecialFunc(handleKeys); // register special key handlers
    glutKeyboardFunc(handleKeysNormal);
    glutTimerFunc(16, update, 0);

    
    glutMainLoop();

    return 0;
}
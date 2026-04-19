#ifndef CAR_H
#define CAR_H

#include <GL/glut.h>

class Car{

    private:
    float speed;
    float acceleration;

    public:
    float x, y; // The cars position
    float width;// The cars width
    float height;
    
    
    


    Car();
    void draw();
    void moveLeft();
    void moveRight();
    void update();
    void accelerate();
    void brake();
};  

#endif
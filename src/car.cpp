#include "car.h"

Car::Car(){
    x = 0.0f;// center position 
    y = -0.8f;// near bottom of the screen
    width = 0.1f;
    height = 0.2f;
    speed = 0.005f; // default forward speed
    acceleration = 0.002f;// Acceleration factor
}

void Car::draw(){
    glColor3f(0.0f, 0.0f, 1.0f); // Blue color
    glBegin(GL_QUADS);
    glVertex2f(x - width/ 2, y - height/ 2);
    glVertex2f(x + width/ 2, y - height/ 2);
    glVertex2f(x + width/ 2, y + height/ 2);
    glVertex2f(x - width/ 2, y + height/ 2);


    glEnd();


}

void Car:: moveLeft(){
    if (x - speed > -0.9f)
    x-= speed;

}


void Car :: moveRight(){
    if (x + speed < 0.9f)
    x += speed;

}
void Car::update(){
    y+= speed;
}

void Car::accelerate(){
    speed += acceleration;
}
void Car::brake(){
    speed -= acceleration;
    if (speed < 0) speed = 0;
}
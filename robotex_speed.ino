#include <Servo.h>

Servo leftmotor;
Servo rightmotor;


void setup() {

  leftmotor.attach(7);
  rightmotor.attach(6);
}

void loop() 
{
    
    
    delay(500); 
    goForward();
    delay(242);
    stop();
    turnLeft();

    goForward();
    delay(481);
    stop();

    leftmotor.write(105);
    rightmotor.write(109);
    delay(456);

    leftmotor.write(90);
    rightmotor.write(90);
    delay(50);

    goForward();
    delay(246);
    stop();

    turnRight();
    goForward();
    delay(187);
    stop();
    turnRight();
    
    goForwardTwo();
    delay(809);
    stop();

    leftmotor.write(83);
    rightmotor.write(72);
    delay(436);

    leftmotor.write(90);
    rightmotor.write(90);
    delay(50);

    goForward();
    delay(180);
    stop();
    
    turnLeft();
    goForward();
    delay(170);
    leftmotor.write(90);
    rightmotor.write(90);
    delay(60);

    leftmotor.write(103);
    rightmotor.write(109);
    delay(464);

    leftmotor.write(90);
    rightmotor.write(90);
    delay(50);


    goForwardTwo();
    delay(760);
    stop();

    turnRight();
    goForward();
    delay(244);
    stop();

    turnLeft();
    goForward();
    delay(244);
    stop();

    turnRight();
    goForward();
    delay(800);
    stop();

    turnRight();
    goForward();
    delay(600);
    stop();

}

void goForward()
{
  leftmotor.write(90);
  rightmotor.write(90);
      
  leftmotor.write(43);
  rightmotor.write(135);
  delay(50);
}

void goForwardTwo()
{
  leftmotor.write(90);
  rightmotor.write(90);
      
  leftmotor.write(49);
  rightmotor.write(135);
  delay(50);
}

void turnLeft()
{
  leftmotor.write(105);
  rightmotor.write(109);
  delay(449);

  leftmotor.write(90);
  rightmotor.write(90);
  delay(50);
}

void turnRight() {
  leftmotor.write(75);
  rightmotor.write(72);
  delay(436);

  leftmotor.write(90);
  rightmotor.write(90);
  delay(50);
}

 void goback()
{

  leftmotor.write(111);
  rightmotor.write(71);
  delay(50);
}

void stop() {
  leftmotor.write(90);
  rightmotor.write(90);
  delay(30);
} 
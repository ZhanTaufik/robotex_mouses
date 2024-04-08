#include <Servo.h>

Servo leftmotor;
Servo rightmotor;

int ir1 = 3;
int ir2 = 4;
int ir3 = 5;
int ir4 = 8;
int ir5 = 9;
void setup() {
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);


  leftmotor.attach(7);
  rightmotor.attach(6);
  Serial.begin(9600);
}

void loop() 
{
    int left = digitalRead(ir3);
    int front = digitalRead(ir2);
    int right = digitalRead(ir1);
    int rc = digitalRead(ir4);
    int lc = digitalRead(ir5);
    int closed = 0;
    int open = 1;
    int frl = rc+lc+front;
    if (frl<3)
    {frl=0;}
    else{ frl=1;}
    Serial.print("left: ");
    Serial.print(left);
    Serial.print("  ");
     Serial.print("frl: ");
    Serial.print(frl);
    Serial.print("  ");
     Serial.print("right: ");
    Serial.print(right);
    Serial.println("  ");
    
    delay(900);
    goForward();
    delay(800);
    stop();
    turnLeft();

    goForward();
    delay(1160);
    stop();

    turnLeft();
    goForward();
    delay(500);
    stop();

    turnRight();
    goForward();
    delay(550);
    stop();
    turnRight();
    
    goForward();
    delay(1800);
    stop();

    turnRight();
    goForward();
    delay(500);
    stop();
    
    turnLeft();
    goForward();
    delay(500);
    stop();

    turnLeft();
    goForward();
    delay(2000);
    stop();

    turnRight();
    goForward();
    delay(500);
    stop();

    turnLeft();
    goForward();
    delay(600);
    stop();

    turnRight();
    goForward();
    delay(1000);

}
void goForward()
{
  leftmotor.write(90);
  rightmotor.write(90);
      
  leftmotor.write(75);
  rightmotor.write(110);
  delay(50);
}

void turnLeft()
{
  leftmotor.write(105);
  rightmotor.write(109);
  delay(372);

  leftmotor.write(90);
  rightmotor.write(90);
  delay(50);
}

void turnRight() {
  leftmotor.write(75);
  rightmotor.write(71);
  delay(369);

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
  delay(50);
}
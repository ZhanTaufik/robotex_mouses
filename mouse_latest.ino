#include <Servo.h>

Servo leftmotor;
Servo rightmotor;

int ir1 = 3;
int ir2 = 4;
int ir3 = 5;

void setup() {
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  leftmotor.attach(7);
  rightmotor.attach(6);
  Serial.begin(9600);
}

void loop() 
{
    int left = digitalRead(ir3);
    int front = digitalRead(ir2);
    int right = digitalRead(ir1);
    Serial.print("left: ");
    Serial.print(digitalRead(ir3));
    Serial.print("  ");
     Serial.print("front: ");
    Serial.print(digitalRead(ir2));
    Serial.print("  ");
     Serial.print("right: ");
    Serial.print(digitalRead(ir1));
    Serial.println("  ");

    int closed = 0;
    int open = 1;

    if ((left==open && front==closed && right==closed) || (left==open && front==closed && right==open) || (left==open && front==open && right==closed) || (left==closed && front==closed && right==closed))
    {
      turnLeft();
    }
    
    else
    {
     if (left==closed && front==closed && right==open)
     {
      turnRight();
     }

     else
     {
      goForward();
     }
    }

  
}
void goForward()
{
  leftmotor.write(90);
  rightmotor.write(90);
      
  leftmotor.write(75);
  rightmotor.write(109);
  delay(50);
}

void turnLeft()
{
  leftmotor.write(105);
  rightmotor.write(109);
  delay(350);

  leftmotor.write(90);
  rightmotor.write(90);
  delay(50);
}

void turnRight() {
  leftmotor.write(94);
  rightmotor.write(68);
  delay(175);
  
  leftmotor.write(90);
  rightmotor.write(90);
  delay(800);
}
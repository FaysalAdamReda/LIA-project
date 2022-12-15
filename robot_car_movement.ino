// setting the pins for motors A and B direction and speed
// setting the int x and y for the direction of the joystick

int AIN1 = 7;
int PWMA = 5;
int BIN1 = 8;
int PWMB = 6;
int x;
int y;
///////////////////////////////////////////////
void setup() {
  // setting up the inputs and outputs for the motor and the joystick
for (int i=3; i<9; i++){
pinMode(i, OUTPUT);
  }
  digitalWrite(3,1);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  Serial.begin(9660);
}
// making a function setup for each of the 9 movements/direction and speed
///////////////////////////////////////////////////
void Forward(){
  digitalWrite(AIN1,1);
  digitalWrite(BIN1,1);
  analogWrite(PWMA,255);
  analogWrite(PWMB,255);
}
/////////////////////////////////////////////////
void Stop(){
  digitalWrite(AIN1,1);
  digitalWrite(BIN1,1);
  analogWrite(PWMA,0);
  analogWrite(PWMB,0);
}
///////////////////////////////////////////////////
void Backward(){
  digitalWrite(AIN1,0);
  digitalWrite(BIN1,0);
  analogWrite(PWMA,255);
  analogWrite(PWMB,255);
}
/////////////////////////////////////////////////
void Left(){
  digitalWrite(AIN1,1);
  digitalWrite(BIN1,0);
  analogWrite(PWMA,255);
  analogWrite(PWMB,255);
}
/////////////////////////////////////////////////
void Right(){
  digitalWrite(AIN1,0);
  digitalWrite(BIN1,1);
  analogWrite(PWMA,255);
  analogWrite(PWMB,255);
}
/////////////////////////////////////////////////
void LeftForward(){
  digitalWrite(AIN1,1);
  digitalWrite(BIN1,1);
  analogWrite(PWMA,255);
  analogWrite(PWMB,126);
}
/////////////////////////////////////////////////
void LeftBackward(){
  digitalWrite(AIN1,0);
  digitalWrite(BIN1,0);
  analogWrite(PWMA,255);
  analogWrite(PWMB,126);
}
/////////////////////////////////////////////////
void RightForward(){
  digitalWrite(AIN1,1);
  digitalWrite(BIN1,1);
  analogWrite(PWMA,126);
  analogWrite(PWMB,255);
}
/////////////////////////////////////////////////
void RightBackward(){
  digitalWrite(AIN1,0);
  digitalWrite(BIN1,0);
  analogWrite(PWMA,126);
  analogWrite(PWMB,255);
}
/////////////////////////////////////////////////


void loop() {
  // here we can call any of the movements in the order wanted and for the time required
/*Forward();
delay(2000);
Backward();
delay(2000);
Stop();
delay(2000);
Left();
delay(2000);
Right();
delay(2000);
LeftForward();
delay(2000);
LeftBackward();
delay(2000);
RightForward();
delay(2000);
RightBackward();
delay(2000);
}*/

// setting up the the joystick in the x direction with the movement wanted based on the bit value 

x = analogRead(4);
Serial.println(x);
if (x<490){
  x = map(x,490,0,0,255);
  digitalWrite(AIN1,1);
  digitalWrite(BIN1,1);
  analogWrite(PWMA,255);
  analogWrite(PWMB,255);
}

if (x>520){
  
x= map(x,520,1023,0,255);
  digitalWrite(AIN1,0);
  digitalWrite(BIN1,0);
  analogWrite(PWMA,255);
  analogWrite(PWMB,255);

}
if (x > 498 && x < 515){
  digitalWrite(AIN1,1);
  digitalWrite(BIN1,1);
  analogWrite(PWMA,0);
  analogWrite(PWMB,0);
}

// setting up the the joystick in the y direction with the movement wanted based on the bit value 

y = analogRead(5);
Serial.println(y);
if (y<490){
  y = map(y,490,0,0,255);
 digitalWrite(AIN1,1);
  digitalWrite(BIN1,0);
  analogWrite(PWMA,255);
  analogWrite(PWMB,255);
}

if (y>520){
  
y = map(y,520,1023,0,255);
  digitalWrite(AIN1,0);
  digitalWrite(BIN1,1);
  analogWrite(PWMA,255);
  analogWrite(PWMB,255);

}
if (y > 498 && y < 515){
  digitalWrite(AIN1,1);
  digitalWrite(BIN1,1);
  analogWrite(PWMA,0);
  analogWrite(PWMB,0);
}
}

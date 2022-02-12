
#define Step 7
#define Dir 8

#define MS1 1
#define MS2 2
#define MS3 3


void setup() {
  // put your setup code here, to run once:

  pinMode(Step,OUTPUT);
  pinMode(Dir,OUTPUT);

  pinMode(MS1,OUTPUT);
  pinMode(MS2,OUTPUT);
  pinMode(MS3,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(Dir,HIGH);

  //digitalWrite(MS1,HIGH);
  //digitalWrite(MS2,HIGH);
  //digitalWrite(MS3,HIGH);

  digitalWrite(Step,HIGH);
  delayMicroseconds(600);
  digitalWrite(Step,LOW);
  delayMicroseconds(600);


}

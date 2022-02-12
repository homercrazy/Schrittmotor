
#define Step 13
#define Dir  15

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

  


 
 int delayMillisec=100; 
 int steps=50;

  for(int a1=1;a1<steps;a1++){
    
    digitalWrite(Dir,LOW);
  
    //digitalWrite(MS1,HIGH);
    //digitalWrite(MS2,HIGH);
    //digitalWrite(MS3,HIGH);
  
    digitalWrite(Step,HIGH);
    delay(delayMillisec);
    digitalWrite(Step,LOW);
    delay(delayMillisec);

  }

  delay(1000);

  for(int a1=1;a1<steps;a1++){
    
    digitalWrite(Dir,HIGH);
  
    //digitalWrite(MS1,HIGH);
    //digitalWrite(MS2,HIGH);
    //digitalWrite(MS3,HIGH);
  
    digitalWrite(Step,HIGH);
    delay(delayMillisec);
    digitalWrite(Step,LOW);
    delay(delayMillisec);

  }

  delay(1000);


  

}

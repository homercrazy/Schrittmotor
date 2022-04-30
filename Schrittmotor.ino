
#define Step 13 // D7
#define Dir  15 // D8

#define justFor 4 // D2  # Pin für Vorwärtsjustage
#define justBack 5 // D1  # Pin für Rückwärtsjustage
#define closeDoor 2 // D4 


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

  pinMode(justFor,INPUT_PULLUP);
  pinMode(justBack,INPUT_PULLUP);
  pinMode(closeDoor,INPUT_PULLUP);


}

void loop() {
  // put your main code here, to run repeatedly:

 int delayMillisec=1; // Winkelgeschwindigkeit 1 ms entspricht 17,6°/s bei einem Übersetzungsverhältnis von 51:1
 
 int steps=2550;  // Abgefahrener Winkelbereich 2550 Schritte entspricht 90° (200*51=10200 Schritte pro Umdrehung)



////////////////////////////////////////////////////////////////////////
// Justage der Hebelausrichtung 
////////////////////////////////////////////////////////////////////////

while (digitalRead(justFor)==LOW){

    digitalWrite(Dir,LOW);

    digitalWrite(Step,HIGH);
    delay(delayMillisec*10);
    digitalWrite(Step,LOW);
    delay(delayMillisec*10);
  
}

while (digitalRead(justBack)==LOW){

    digitalWrite(Dir,HIGH);

    digitalWrite(Step,HIGH);
    delay(delayMillisec*10);
    digitalWrite(Step,LOW);
    delay(delayMillisec*10);
  
}

////////////////////////////////////////////////////////////////////////





if (digitalRead(closeDoor)==LOW){


  digitalWrite(Dir,LOW);
  for(int a1=1;a1<steps;a1++){
   
    //digitalWrite(MS1,HIGH);
    //digitalWrite(MS2,HIGH);
    //digitalWrite(MS3,HIGH);
  
    digitalWrite(Step,HIGH);
    delay(delayMillisec);
    digitalWrite(Step,LOW);
    delay(delayMillisec);

  }

  delay(5000);

  digitalWrite(Dir,HIGH);

  for(int a1=1;a1<steps;a1++){
    
    //digitalWrite(MS1,HIGH);
    //digitalWrite(MS2,HIGH);
    //digitalWrite(MS3,HIGH);
  
    digitalWrite(Step,HIGH);
    delay(delayMillisec);
    digitalWrite(Step,LOW);
    delay(delayMillisec);

  }

  
}
  

}

#include <Servo.h>
#define PServo1 2
#define PServo2 3
#define PServo3 4
#define MOTOR 5

#define BlueANGMAX 180
#define BlueANGMIN 110
#define GreenANGMIN 30
#define GreenANGMAX 100
#define RedANGMIN 40
#define RedANGMAX 110 

Servo servos[4];
String Comando;



void setup() {
Serial.begin(9600);

pinMode(MOTOR,OUTPUT);
digitalWrite(MOTOR,HIGH);
delay(400);
pinMode(PServo1,OUTPUT);
servos[0].attach(PServo1);
servos[0].write(BlueANGMIN);
delay(500);

pinMode(PServo2,OUTPUT);
servos[1].attach(PServo2);
servos[1].write(GreenANGMIN);
delay(500);


pinMode(PServo3,OUTPUT);
servos[2].attach(PServo3);
servos[2].write(RedANGMIN);

}

void  LigarServo(int Set,int AnguloFinal,int AnguloDeParada){
    
    int i;
      Serial.println(servos[Set].read());
    if(AnguloFinal > servos[Set].read()){
     Serial.println("UP");
      for(i=servos[Set].read();i<=AnguloFinal;i+=5){
        servos[Set].write(i);
        delay(20);
       }
       
    }else{
      Serial.println("Down");
      for(i=servos[Set].read();i>=AnguloDeParada;i-=5){
        servos[Set].write(i);
        delay(20);
       }
       
    }
}




void loop() {



  if(Serial.available()){
    Comando = Serial.readStringUntil('\n');
    Comando.trim();
    if(Comando == "1" ){
      Serial.println("A");
      delay(50);
      LigarServo(0,BlueANGMAX,BlueANGMIN);
      delay(1500);
   }
    if(Comando == "2" ){
      Serial.println("B");
      delay(50);
      LigarServo(1,GreenANGMAX,GreenANGMIN);
       delay(1500);
   }

   if(Comando == "3" ){
      Serial.println("C");
      delay(50);
      LigarServo(2,RedANGMAX,RedANGMIN);
       delay(1500);
   }
   if(Comando == "4" ){

     if(digitalRead(5) == 1){
   digitalWrite(MOTOR,LOW);}else{
     digitalWrite(MOTOR,HIGH);
    }
    
     
  }}
}



#define SensorMotor 14
#define SensorVermelho 15
#define SensorVerde 17
#define SensorAzul 16

void setup() {
pinMode(SensorMotor,INPUT);// put your setup code here, to run once:
pinMode(SensorVerde,INPUT);
pinMode(SensorVermelho,INPUT);
pinMode(SensorAzul,INPUT);
Serial.begin(9600);
}
int lerSensor(){
  if(digitalRead(SensorVerde)==1){
    Serial.println("VerdeON");
  }else{
   Serial.println("VerdeOFF");
  }
   if(digitalRead(SensorVermelho)==1){
     Serial.println("VermeON");
  }else{
    Serial.println("VermeOFF");
  }
   if(digitalRead(SensorAzul)==1){
    Serial.println("AzulON");
  }else{
   Serial.println("AzulOFF");
  }
  delay(1000);
  Serial.println("----------------");
}

void loop() {
   lerSensor();
  

}

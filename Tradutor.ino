#include <OPC.h>
#include <Bridge.h>
#include <Ethernet.h>
#include <SPI.h>

OPCSerial myArduinoMEGA;

opcAccessRights digital_status_input[54], analog_status_input[16];

bool Sensor[5]={true,true,false,true,false};

bool readwrite_digital(const char *itemID, const opcOperation opcOP, const bool value)
{
  byte port;
    
  OPCItemType aOPCItem = myArduinoMEGA.getOPCItem(itemID);                     

  port = atoi(&itemID[1]);
           
 

  if (opcOP == opc_opread) {
    if ((aOPCItem.opcAccessRight == opc_read) || (aOPCItem.opcAccessRight == opc_readwrite)) {
      
      if (digital_status_input[port] != opc_read) {
        pinMode(port, INPUT);
        digital_status_input[port] = opc_read;
      }

      return Sensor[port];
    }
  } 
}


void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  myArduinoMEGA.setup(); 
   
  for (byte k=0;k<54;k++) digital_status_input[k] = opc_undefined; 
  for (byte k=0;k<16;k++) analog_status_input[k] = opc_undefined; 

  myArduinoMEGA.setup(); 
 
  myArduinoMEGA.addItem("D0",opc_readwrite, opc_bool, readwrite_digital); 
  myArduinoMEGA.addItem("D1",opc_readwrite, opc_bool, readwrite_digital); 
  myArduinoMEGA.addItem("D2",opc_readwrite, opc_bool, readwrite_digital);  
  myArduinoMEGA.addItem("D3",opc_readwrite, opc_bool, readwrite_digital); 
}

void loop() {
     myArduinoMEGA.processOPCCommands();
     if(Serial1.available()==4){
        Sensor[0]=int(Serial1.read())-48;
        Sensor[1]=int(Serial1.read())-48;
        Sensor[2]=int(Serial1.read())-48;
        Sensor[3]=int(Serial1.read())-48;
     }

   

}

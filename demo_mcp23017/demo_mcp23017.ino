#include <Wire.h>
#include <Adafruit_MCP23017.h>


Adafruit_MCP23017 mcp;
  
void setup() {  

  mcp.begin();
  for(int i=0;i<16;i++) {
    mcp.pinMode(i, OUTPUT); 
    mcp.digitalWrite(i, LOW);
  }

}


void loop() {

  for(int i=0;i<16;i++) {
    mcp.digitalWrite(i, HIGH);
    delay(100);
  }
  
  delay(250); 

  for(int i=0;i<16;i++) {
    mcp.digitalWrite(i, LOW);
    delay(100);
  }  
    delay(250); 
}


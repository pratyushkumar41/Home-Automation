#include <BlynkSimpleEsp8266.h>
#define BLYNK_NO_BUILTIN  
#define BLYNK_NO_FLOAT    

char auth[] = "33b900857aaf491fb72a1d59616e104a"; //blynk id
char ssid[] = "GARGIRITA";
char pass[] = "GR825301";
int relayPin = 2;// define output pin for relay 
/*int relayPintwo = 4;
int relayPinthree = 4;
int relayPinfour = 4;*/

void setup() {
  pinMode(relayPin, OUTPUT);// define pin 8 as output
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(D1,INPUT);
  /*pinMode(D1,INPUT);
  pinMode(D2,INPUT);
  pinMode(D3,INPUT);*/
}



void loop() {
Blynk.run();
delay(100);
// 1st relay
if(digitalRead(D1) == HIGH)
{
  //Blynk.virtualWrite(V0,255);
  digitalWrite(relayPin, LOW);
  //Serial.println("255");  
  delay(500);
}
else
{
  digitalWrite(relayPin, HIGH); 
  delay(500);
}
//2nd relay
/*if(digitalRead(D1) == HIGH)
{
  digitalWrite(relayPintwo, LOW);  
  delay(500);
}
else
{
  digitalWrite(relayPintwo, HIGH); 
  delay(500);
}

//3rd relay
if(digitalRead(D2) == HIGH)
{
  digitalWrite(relayPinthree, LOW);  
  delay(500);
}
else
{
  digitalWrite(relayPinthree, HIGH); 
  delay(500);
}

//4th relay
if(digitalRead(D3) == HIGH)
{
  digitalWrite(relayPinfour, LOW);  
  delay(500);
}
else
{
  digitalWrite(relayPinfour, HIGH); 
  delay(500);
}*/

}

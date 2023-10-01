#define Fan 32
#define Gas 4
#define Heater 5

 
void setup(){
  Serial.begin(115200);
    pinMode(Gas,INPUT);
    pinMode(Fan,OUTPUT);
    pinMode(Heater,OUTPUT);
  digitalWrite(Fan,HIGH);
  digitalWrite(Heater,LOW);
}

void loop(){
  int Kadar_gas = analogRead(Gas);
  Serial.print("Kadar gas :");
  Serial.println(Kadar_gas);
  if(Kadar_gas > 1100){
    digitalWrite(Fan,LOW);
    digitalWrite(Heater,HIGH);
    delay(3000);
  }else {
    digitalWrite(Fan,HIGH);
    digitalWrite(Heater,LOW);
  }
  delay(500);
}

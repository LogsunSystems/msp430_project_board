#include "matrix.h"


void init_Keypad(){
  pinMode(R0,INPUT);
  pinMode(R1,INPUT);
  pinMode(R2,INPUT);
  pinMode(R3,INPUT);

  pinMode(C0,OUTPUT);
  pinMode(C1,OUTPUT);
  pinMode(C2,OUTPUT);
  pinMode(C3,OUTPUT);

  digitalWrite(C0,LOW);
  digitalWrite(C1,LOW);
  digitalWrite(C2,LOW);
  digitalWrite(C3,LOW);
}

char keyPressed(){

//Scan All rows in Collumn-1
  digitalWrite(C0,HIGH);
  digitalWrite(C1,LOW);
  digitalWrite(C2,LOW);
  digitalWrite(C3,LOW);

 if(digitalRead(R0)){
  delay(350); //De-bounce delay
  Serial.println("0");
  return('0');
 }
 

  if(digitalRead(R1)){
    delay(350); //De-bounce delay
    Serial.println("1");
  return('1');
 }
 

  if(digitalRead(R2)){
    delay(350); //De-bounce delay
    Serial.println("2");
  return('2');
 }
 
  if(digitalRead(R3)){
    delay(350); //De-bounce delay
    Serial.println("3");
  return('3');
 }
 

  //Scan All rows in Collumn-2

  digitalWrite(C0,LOW);
  digitalWrite(C1,HIGH);
  digitalWrite(C2,LOW);
  digitalWrite(C3,LOW);

 if(digitalRead(R0)){
    delay(350); //De-bounce delay
    Serial.println("4");
  return('4');
 }
 

  if(digitalRead(R1)){
    delay(350); //De-bounce delay
    Serial.println("5");
  return('5');
 }


  if(digitalRead(R2)){
    delay(350); //De-bounce delay
    Serial.println("6");
  return('6');
 }
 

  if(digitalRead(R3)){
    delay(350); //De-bounce delay
  return('7');
 }
 

  //Scan All rows in Collumn-3
  digitalWrite(C0,LOW);
  digitalWrite(C1,LOW);
  digitalWrite(C2,HIGH);
  digitalWrite(C3,LOW);

 if(digitalRead(R0)){
  delay(350); //De-bounce delay
  Serial.println("8");
  return('8');
 }
 

  if(digitalRead(R1)){
    delay(350); //De-bounce delay
    Serial.println("9");
  return('9');
 }
 

  if(digitalRead(R2)){
    delay(350); //De-bounce delay
  return('A');
 }
 
  if(digitalRead(R3)){
    delay(350); //De-bounce delay
    Serial.println("B");
  return('B');
 }
 

  //Scan All rows in Collumn-4
  digitalWrite(C0,LOW);
  digitalWrite(C1,LOW);
  digitalWrite(C2,LOW);
  digitalWrite(C3,HIGH);

 if(digitalRead(R0)){
  delay(350); //De-bounce delay
  Serial.println("C");
  return('C');
 }
 
  if(digitalRead(R1)){
    delay(350); //De-bounce delay
    Serial.println("D");
  return('D');
 }
 
  if(digitalRead(R2)){
    delay(350); //De-bounce delay
    Serial.println("E");
  return('E');
 }
 

  if(digitalRead(R3)){
    delay(350); //De-bounce delay
    Serial.println("F");
  return('F');
 }
 
}

/*
 * Title:     LED_Switch
 * Company:   Logsun Systems
 * Author:    Shreyas Deshpande
 * 
 * Date:      1st June 2023
 * Description: 
 *            This is interfacing code for LEDs and Switches with MSP430 micro-controller
 *            Connect SV1 =>  J4 (LED)
 *                    SV2 =>  J5 (Switch)
 * 
 */



#define LED_1   19
#define LED_2   17
#define LED_3   13
#define LED_4   12
#define LED_5   11
#define LED_6   31
#define LED_7   32
#define LED_8   29

#define SW_1    40
#define SW_2    39
#define SW_3    38
#define SW_4    37
#define SW_5    36
#define SW_6    35
#define SW_7    34
#define SW_8    33


void setup(){

  //Initialize the LED and Switc pins

  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(LED_4,OUTPUT);
  pinMode(LED_5,OUTPUT);
  pinMode(LED_6,OUTPUT);
  pinMode(LED_7,OUTPUT);
  pinMode(LED_8,OUTPUT);

  pinMode(SW_1,INPUT);
  pinMode(SW_2,INPUT);
  pinMode(SW_3,INPUT);
  pinMode(SW_4,INPUT);
  pinMode(SW_5,INPUT);
  pinMode(SW_6,INPUT);
  pinMode(SW_7,INPUT);
  pinMode(SW_8,INPUT);

  //Initially make all the LEDs OFF

  digitalWrite(LED_1,LOW);
  digitalWrite(LED_2,LOW);
  digitalWrite(LED_3,LOW);
  digitalWrite(LED_4,LOW);
  digitalWrite(LED_5,LOW);
  digitalWrite(LED_6,LOW);
  digitalWrite(LED_7,LOW);
  digitalWrite(LED_8,LOW);

  delay(300);
}

void loop(){
  digitalRead(SW_1)?digitalWrite(LED_1,HIGH):digitalWrite(LED_1,LOW);
  digitalRead(SW_2)?digitalWrite(LED_2,HIGH):digitalWrite(LED_2,LOW);
  digitalRead(SW_3)?digitalWrite(LED_3,HIGH):digitalWrite(LED_3,LOW);
  digitalRead(SW_4)?digitalWrite(LED_4,HIGH):digitalWrite(LED_4,LOW);
  digitalRead(SW_5)?digitalWrite(LED_5,HIGH):digitalWrite(LED_5,LOW);
  digitalRead(SW_6)?digitalWrite(LED_6,HIGH):digitalWrite(LED_6,LOW);
  digitalRead(SW_7)?digitalWrite(LED_7,HIGH):digitalWrite(LED_7,LOW);
  digitalRead(SW_8)?digitalWrite(LED_8,HIGH):digitalWrite(LED_8,LOW);
  
}

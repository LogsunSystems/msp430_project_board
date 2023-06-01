/*
 * Title:     7-Segment Interfacing
 * Company:   Logsun Systems
 * Author:    Shreyas Deshpande
 * Date:      1st June 2023
 * 
 * Description:
 *            This code is used to interface the 4 digit 
 *            7-segment display with MSP-430 Launch-pad
 *
 *Connections:
 *            SV1 => J2 (7-Segment Data)
 *            SV2 => J3 (Digit Control)
 */


 #include "Seven_Seg.h"




 void setup(){
  //Configure 7 segments pins

  Init_Disp();
  delay(500);
  digitalWrite(DIGIT_1,HIGH);
  digitalWrite(DIGIT_2,HIGH);
  digitalWrite(DIGIT_3,HIGH);
  digitalWrite(DIGIT_4,HIGH);
  
 }

 void loop(){

  Display('0',true); //If you dont want to display the decimal point, make the second parameter false
  delay(1000);
  Display('1',true);
  delay(1000);
  Display('2',true);
  delay(1000);
  Display('3',true);
  delay(1000);
  Display('4',true);
  delay(1000);
  Display('5',true);
  delay(1000);
  Display('6',true);
  delay(1000);
  Display('7',true);
  delay(1000);
  Display('8',true);
  delay(1000);
  Display('9',true);
  delay(1000);
  
 }



 

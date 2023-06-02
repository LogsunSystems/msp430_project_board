/*
 *Title:    4x4 Matrix Keypad 
 *Company:  Logsun Systems
 *Author:   Shreyas Deshpande
 *Date:     1st June 2023
 *
 *Description:
 *          This code interfaces the matrix keypad
 *          with msp430 and displays the key pressed on
 *          Serial Monitor
 *Connection:
 *          SV1 => J2 (7-Segment Data)
 *          SV3 => J3 (Digit Control)
 *          SV2 => J12 (Keypad)
 */

 #include "matrix.h"
 #include "Seven_Seg.h"

char Key = '\0';

 void setup(){
    Serial.begin(9600);
    delay(500);
    Serial.println("\n\nInitializing Keypad\n\n");
    init_Keypad();
    Serial.println("\n\nInitializing Display\n\n");
    Init_Disp();
    digitalWrite(DIGIT_1,HIGH);
    digitalWrite(DIGIT_2,HIGH);
    digitalWrite(DIGIT_3,HIGH);
    digitalWrite(DIGIT_4,HIGH);
 }

 void loop(){
    //Get the key pressed
    Key = keyPressed();

       //Display the key pressed on 7 segment display with Decimal point OFF.
    
    Display(Key,false); 
 
 }
 

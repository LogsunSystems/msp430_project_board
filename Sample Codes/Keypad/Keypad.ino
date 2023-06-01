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
 *          SV1 => J12
 */

 #include "matrix.h"

char Key = '\0';

 void setup(){
    Serial.begin(9600);
    delay(500);
    Serial.println("\n\nInitializing Keypad\n\n");
    init_Keypad();
 }

 void loop(){
    Key = keyPressed();

 
 }
 

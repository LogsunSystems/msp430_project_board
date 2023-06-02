#include "Seven_Seg.h"

void Init_Disp(){
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(DP,OUTPUT);

//Configure Digit Control pins
  pinMode(DIGIT_1,OUTPUT);
  pinMode(DIGIT_2,OUTPUT);
  pinMode(DIGIT_3,OUTPUT);
  pinMode(DIGIT_4,OUTPUT);
 //Turn OFF all the digits by default
  digitalWrite(DIGIT_1,LOW);
  digitalWrite(DIGIT_2,LOW);
  digitalWrite(DIGIT_3,LOW);
  digitalWrite(DIGIT_4,LOW);
}
 
void Display(uint8_t iVal,boolean dp){
    switch(iVal){
      case '0':
          digitalWrite(A,LOW);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          digitalWrite(E,LOW);
          digitalWrite(F,LOW);
          digitalWrite(G,HIGH);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;
       case '1':
          digitalWrite(A,HIGH);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,HIGH);
          digitalWrite(E,HIGH);
          digitalWrite(F,HIGH);
          digitalWrite(G,HIGH);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;
       case '2':
          digitalWrite(A,LOW);
          digitalWrite(B,LOW);
          digitalWrite(C,HIGH);
          digitalWrite(D,LOW);
          digitalWrite(E,LOW);
          digitalWrite(F,HIGH);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;
      case '3':
          digitalWrite(A,LOW);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          digitalWrite(E,HIGH);
          digitalWrite(F,HIGH);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;

       case '4':
          digitalWrite(A,HIGH);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,HIGH);
          digitalWrite(E,HIGH);
          digitalWrite(F,LOW);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;

      case '5':
          digitalWrite(A,LOW);
          digitalWrite(B,HIGH);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          digitalWrite(E,HIGH);
          digitalWrite(F,LOW);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;

      case '6':
          digitalWrite(A,LOW);
          digitalWrite(B,HIGH);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          digitalWrite(E,LOW);
          digitalWrite(F,LOW);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;

      case '7':
          digitalWrite(A,LOW);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,HIGH);
          digitalWrite(E,HIGH);
          digitalWrite(F,HIGH);
          digitalWrite(G,HIGH);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;

      case '8':
          digitalWrite(A,LOW);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          digitalWrite(E,LOW);
          digitalWrite(F,LOW);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;


      case '9':
          digitalWrite(A,LOW);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          digitalWrite(E,HIGH);
          digitalWrite(F,LOW);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;


      case 'A':
          digitalWrite(A,LOW);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,HIGH);
          digitalWrite(E,LOW);
          digitalWrite(F,LOW);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;
        

      case 'B':
          digitalWrite(A,HIGH);
          digitalWrite(B,HIGH);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          digitalWrite(E,LOW);
          digitalWrite(F,LOW);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;


      case 'C':
          digitalWrite(A,LOW);
          digitalWrite(B,HIGH);
          digitalWrite(C,HIGH);
          digitalWrite(D,LOW);
          digitalWrite(E,LOW);
          digitalWrite(F,LOW);
          digitalWrite(G,HIGH);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;

      case 'D':
          digitalWrite(A,HIGH);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          digitalWrite(E,LOW);
          digitalWrite(F,HIGH);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;

      case 'E':
          digitalWrite(A,LOW);
          digitalWrite(B,HIGH);
          digitalWrite(C,HIGH);
          digitalWrite(D,LOW);
          digitalWrite(E,LOW);
          digitalWrite(F,LOW);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;


      case 'F':
          digitalWrite(A,LOW);
          digitalWrite(B,HIGH);
          digitalWrite(C,HIGH);
          digitalWrite(D,HIGH);
          digitalWrite(E,LOW);
          digitalWrite(F,LOW);
          digitalWrite(G,LOW);
          dp?digitalWrite(DP,LOW):digitalWrite(DP,HIGH);
          break;
          
    }
  }

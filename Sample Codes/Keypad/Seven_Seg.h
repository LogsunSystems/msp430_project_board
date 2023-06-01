#ifndef SEVEN_SEG_H
#define SEVEN_SEG_H

#include "energia.h"

#define A            19
#define B            17
#define C            13  
#define D            12
#define E            11
#define F            31
#define G            32
#define DP           29

#define DIGIT_1      40
#define DIGIT_2      39
#define DIGIT_3      38
#define DIGIT_4      37


  void Init_Disp();
 void Display(uint8_t iVal, boolean dp);

#endif

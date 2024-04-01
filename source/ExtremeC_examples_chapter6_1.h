// File name: ExtremeC_examples_chapter6_1.h
// Description: Declarations for attribute structure
//              and behavior functions

#ifndef EXTREME_C_EXAMPLES_CHAPTER_6_1_H
#define EXTREME_C_EXAMPLES_CHAPTER_6_1_H

#define CAR_NAME_MAX_LENGTH     32

// This structure keeps all the attributes 
// related to a car object
typedef struct {
  char name[CAR_NAME_MAX_LENGTH];
  double speed;
  double fuel;
} car_t;

// These function declarations are the behaviors of a car object
void car_construct(car_t*, const char*);
void car_destruct(car_t*);
void car_accelerate(car_t*);
void car_brake(car_t*);
void car_refuel(car_t*, double);

#endif

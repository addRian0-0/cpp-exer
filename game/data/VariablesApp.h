#ifndef VAR_H
#define VAR_H

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

#define NUMBER_SECTIONS 1
#define NUMBER_QUESTIONS 100
#define LENGTH_RESPONSE 100
#define NUMBER_CLUES 3
#define LENGTH_CLUE 100

extern const char responses[NUMBER_SECTIONS][NUMBER_QUESTIONS][LENGTH_RESPONSE];
extern const char clues[NUMBER_SECTIONS][NUMBER_QUESTIONS][NUMBER_CLUES][LENGTH_CLUE];

#endif
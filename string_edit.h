/**
 * @brief A simple strings' library
 * 
 * @author Gpap Peaky
 * 
 * @version v0.7.5.7 (15/12/2023)
*/

#include <stdlib.h>
#include <stdio.h>

////////// -- DEF -- //////////

#define PI 3.14159265359
#define EULER_C 2.71828182846 

/**
 * @param int rep-The amount of time to repeat "newline" 
*/
void newline(int repeats);

/**
 * ---
*/
void newblock(void);

/**
 * Compares Two Numbers And Returns The Largest
 * 
 * @param a Number One
 * @param b Number Two
*/
int num_max(int a, int b);


////////// -- STR -- //////////

/**
 * Prints The String
 * 
 * @param s String input
*/
void strPrint(char s[]);

/**
 * Returns string's length
 * 
 * @param s String input
*/
int strLength(char* s);

/**
 * @param char sour-copy
 * @param char dest-paste
*/
void strOverwrite(char sour[],char dest[]);

/**
 * Replaces One Character With Another
 * 
 * @param char s-string
 * @param char tok-what to replace
 * @param char ch-what to replace into
*/
char * strReplaceChar(char s[],char tok,char ch);

int strComparison( char s1[], char s2[]);

char* strUnion(char string1[],char string2[]);

/*ALL LIBRARY ASSETS ARE USED FOR THE BENEFIT OF ONESELF, PLEASE RED THE MANUAL AND USE THE LIB FUNCTIONS
UPDATES ARE TO BE ADDED IN THE FUTURE.*/

/*
░░░░░░░░░░░▄▄▀▀▀▀▀▀▀▀▄▄
░░░░░░░░▄▀▀░░░░░░░░░░░░▀▄▄
░░░░░░▄▀░░░░░░░░░░░░░░░░░░▀▄
░░░░░▌░░░░░░░░░░░░░▀▄░░░░░░░▀▀▄
░░░░▌░░░░░░░░░░░░░░░░▀▌░░░░░░░░▌
░░░▐░░░░░░░░░░░░▒░░░░░▌░░░░░░░░▐
░░░▌▐░░░░▐░░░░▐▒▒░░░░░▌░░░░░░░░░▌
░░▐░▌░░░░▌░░▐░▌▒▒▒░░░▐░░░░░▒░▌▐░▐
░░▐░▌▒░░░▌▄▄▀▀▌▌▒▒░▒░▐▀▌▀▌▄▒░▐▒▌░▌
░░░▌▌░▒░░▐▀▄▌▌▐▐▒▒▒▒▐▐▐▒▐▒▌▌░▐▒▌▄▐
░▄▀▄▐▒▒▒░▌▌▄▀▄▐░▌▌▒▐░▌▄▀▄░▐▒░▐▒▌░▀▄
▀▄▀▒▒▌▒▒▄▀░▌█▐░░▐▐▀░░░▌█▐░▀▄▐▒▌▌░░░▀
░▀▀▄▄▐▒▀▄▀░▀▄▀░░░░░░░░▀▄▀▄▀▒▌░▐
░░░░▀▐▀▄▒▀▄░░░░░░░░▐░░░░░░▀▌▐
░░░░░░▌▒▌▐▒▀░░░░░░░░░░░░░░▐▒▐
░░░░░░▐░▐▒▌░░░░▄▄▀▀▀▀▄░░░░▌▒▐
░░░░░░░▌▐▒▐▄░░░▐▒▒▒▒▒▌░░▄▀▒░▐
░░░░░░▐░░▌▐▐▀▄░░▀▄▄▄▀░▄▀▐▒░░▐
░░░░░░▌▌░▌▐░▌▒▀▄▄░░░░▄▌▐░▌▒░▐
░░░░░▐▒▐░▐▐░▌▒▒▒▒▀▀▄▀▌▐░░▌▒░▌
░░░░░▌▒▒▌▐▒▌▒▒▒▒▒▒▒▒▐▀▄▌░▐▒▒﻿
*/

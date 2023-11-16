#include <stdlib.h>
#include <time.h>
#include <stdio.h>

////////// -- DEF -- //////////

#define PI 3.14159265359
#define EULER_C 2.71828182846 

////////// -- MISC -- //////////

void seed(void){
    srand(time(NULL));
}

void sortArray(int a[],int range){

    int temp;//TEMPORARY VALUE

    for(int i = 0; i < range - 1; i++){
        for(int j = 0; j < range; j++){
            if(a[i+1]>a[j]){
                temp=a[i+1];
                a[i+1]=a[j];
                a[j]=temp;
            }
        }
    }
}

/**
 * @param int rep-The amount of time to repeat "newline" 
*/
void newline(int repeats){
    
    for(int i = 0; i <= repeats; i++){
        
        printf("\n");
    }
}

void newblock(void){
    printf("__________________________________\n");
}

////////// -- NUM -- //////////

/**
 * @param int x-The maximum number to be generated 
*/
int numRand(int x){
    int r=rand()%x;
    return r;
}

int numMax(int x, int y){
    if (x > y){
        return x;
    }else if(y > x){
        return y;
    }
}

////////// -- STR -- //////////

void strPrint(char s[]){

    char * p = s; //POINTS TO THE FIRST VALUE OF THE ARRAY "a"

    while(*p != '\0'){

        printf("%c", *p);

        p++;
    }
}

int strLength(char* s){ //INCLUDE THE '\0' STRING TERMINATOR

    char * p = s; //POINTS TO THE FIRST VALUE OF ARRAY "a"

    int length = 0;

    while(*p != '\0'){

        length++;

        p++;
    }

    return length;
}

/**
 * @param char sour-copy
 * @param char dest-paste
*/
void strOverwrite(char sour[],char dest[]){

    int lenCopy = strLength(sour);

    int lenPaste = strLength(dest);

    int i=0;

    char * sour_ptr = sour;
    
    char * dest_ptr = dest;

    if(lenCopy > lenPaste){

        while(i < lenCopy + lenPaste + 1){

            *dest_ptr = *sour_ptr;//COPY//

            ++sour_ptr;//MOVES TO THE NEXT CELL//

            ++dest_ptr;//MOVES TO THE NEXT CELL//

            i++;//INCREMENT//
        }

    }else if(lenCopy < lenPaste){

        while(i < lenCopy + lenPaste + 1){

            *dest_ptr = *sour_ptr;//COPY//

            dest_ptr++;//MOVES TO THE NEXT CELL//

            sour_ptr++;//MOVES TO THE NEXT CELL//

            i++;//INCREMENT//
        }
    }else if(lenCopy == lenPaste){

        while(i < lenCopy + 1){

            *dest_ptr = *sour_ptr;//COPY//

            dest_ptr++;//MOVES TO THE NEXT CELL//

            sour_ptr++;//MOVES TO THE NEXT CELL//

            i++;//INCREMENT//
        }
    }
}

/**
 * @param char s-string
 * @param char tok-what to replace
 * @param char ch-what to replace into
*/
char * strReplaceChar(char s[],char tok,char ch){

    int range = strLength(s);

    char * p = s; //POINTS TO STRING//

    int i = 0;

    while(i < range){
        if( * p == tok){
            * p = ch;
        }

        p++;//MOVES TO NEXT CELL//

        i++;//INCREMENT//

    }

    return p;
}

int strComparison( char s1[], char s2[]){ //RETURNS 0 ON FAILURE //RETURNS 1 ON SUCCESS//
    char * p1 = s1;
    
    char * p2 = s2;

    int range1 = strLength(s1);

    int range2 = strLength(s2);

    int range = numMax(range1,range2);

    int * verifyArray = (int *) malloc(range);

    for(int i = 0; i < range; i++){
        if (*p1 != *p2){
            verifyArray[i] = 0; //BASE COMPARISON//FILLS verifyArray with 0 AS SOON AS ONE CHARACTER DIFFERS//
        }else if(*p1 == *p2){
            verifyArray[i] = 1;//FILLS WITH 1//
        }

        p1++;

        p2++;
    }
    for(int j = 0; j < range; j++){
        if(verifyArray[j] == 0){
            return 0; //FAIL CONDITION//
        }else if(verifyArray[j] == 1){
            return 1; //SUCCESS CONDITION//
        }
    }
}

/*

char* strTokens(char string[], char delim){

    char* ptr = string;

    strReplaceChar(string,delim,'\0');

    return ptr;

}

*/

char* strUnion(char string1[],char string2[]){

    char* ptr1 = string1; //POINTS TO STRING ONE

    char* ptr2 = string2; //POINTS TO STRING TWO

    int len1 = strLength(string1); //LENGTH OF STRING 1

    int len2 = strLength(string2); // LENGTH OF STRING 2

    char* stringProduct = (char*) malloc ((len1 + len2 + 1)*sizeof(char));

    for(int i = 0; i < len1; i++){
        stringProduct[i] = *ptr1;
        ptr1++;
    }

    for(int i = len1; i < len1 + len2; i++){
        stringProduct[i] = *ptr2;
        ptr2++;
    }

    stringProduct[len1 + len2] = '\0'; //TERMINATES THE STRING

    return stringProduct;
}

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

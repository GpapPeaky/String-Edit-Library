#include "string_edit.h"

int main( void ){

    //GENERAL VARIABLE TEST VALUES//

    char string[] = "1,2,3,4... Success!";
    char strpaste[] = "Void";
    char str1[] = "Test t t ";
    char str2[] = "Best t t";
    int array[] = {2 , 11 , 2034 , 68 , 3 , 1 }; int i = 0;

    //-----------------------//

    ////////////////////////////////////////////////////////////////////EVERY TEST ENDS WITH ___newblock()___ ////////////////////////////////////////////////////////////////////

    //printString() Function Test (1) 0.1//

    strPrint(string);

    printf("\n");

    //________________V0.1________________//
  
    newblock();

    //seed() and randNum() Function Test (1) 0.2//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    seed(); //IT CHANGES SEED DURING ONE INSTANCE ONLY//

    printf("numRand() Generates %d At The Current Seed\n\n",numRand(100));

    newblock();
    //lenString() Function Test (1) 0.2//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("There Are %d Characters In The String\n\n",strLength(string)-1);//'-1' IS USED TORMOVE THE '\0' STRING TERMINATOR//
    
    newblock();
    //Use Of lenString() To Print A String (1) 0.2//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    for(int i = 0; i<strLength(string);i++){
        printf("%c ",string[i]);
    }

    printf("\n");

    //________________V0.2________________//

    newblock();
    //numFactorial Test (1) 0.3

    //printf("Calculate The Factorial Of: 0\n");
    //printf("\nThe Factorial Of 0 is: %d\n",numFactorial(0)); //WORKS AT 0 (0! = 1)//

    newblock();
    //sortArray() Test (1) 0.3//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Here Is The Array At First: ");

    for(int i = 0; i < 6; i++){
        printf("%d ",array[i]);
    }
    newline(2);

    sortArray(array,6);//SORTING//

    printf("Here Is The Sorted Array: ");

    for(int i = 0; i < 6; i++){
        printf("%d ",array[i]);
    }
    newline(1);

    //________________V0.3________________//
 
    newblock();
    //strOverwrite(,) Test (1) 0.4//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("The First String is: ");
    strPrint(string);
    newline(2);
    printf("The Second String is: ");
    strPrint(strpaste);
    newline(2);
    printf("It Has A Size Of %d Characters",strLength(strpaste));
    strOverwrite(string,strpaste);//IT WORKS IN ALL SITUATIONS TESTED COPYLEN >,<,= PASTELEN//
    newline(2);
    printf("Now The Second String is: ");
    strPrint(strpaste);
    newline(2);
    printf("It Has A Size Of %d Characters",strLength(strpaste));
    newline(2);

    //________________V0.4________________//
    //-
    //-
    //-
    //-
    newblock();
    //strReplaceChar(,,) Test (1) 0.5//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("The String is: ");
    strPrint(str1);
    newline(2);
    printf("It Has A Size Of %d Characters",strLength(str1));
    strReplaceChar(str1,'T','B');//IT WORKS IN ALL SITUATIONS TESTED COPYLEN >,<,= PASTELEN//
    newline(2);
    printf("Now The String is: ");
    strPrint(str1);
    newline(2);

    //________________V0.5________________//

    newblock();
    //numFibonacci() Test (1) 0.6//

    //printf("The Number 0,2nd and 10nth Fibonacci Numbers Are: %d , %d And %d",numFibonacci(0),numFibonacci(2),numFibonacci(10));
                                                                       //numFibonacci(0) RETURNS 0//THE COUNT SEQUENCE STARTS FROM 1,1,2,3,5...//
    newline(2);

    newblock();

    //numMax() Test(1) 0.6//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("The Max Number Between 1 and 8 is: %d",numMax(1,8));

    newline(2);

    newblock();   

    //strComparison() Test(1) 0.6////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Comparing strings : ");
    strPrint(str1); //Test t t Changes To Best t t Due To strReplaceChar//
    newline(2);
    strPrint(str2);
    newline(2);

    printf("The Comparison Returns %d ",strComparison(str1,str2));//THE FUNCTION WORKS ON ALL TESTS//

    newline(2);

    newblock();

    /////////////////////////////////////////////////////////////////////////////___REWORK___////

    //strToken() Test() 0.6// (first version)////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // W I P //

    /////////////////////////////////////////////////////////////////////////////////////////////

    //________________V0.6________________//

    /*

    //numVector() Test(1) v0.7.0.3//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    float **vector = numVector(2,2);//INIT_VECTOR_FUNC//

    vector[0][0] = 2; //
    vector[1][0] = 3; //
    vector[0][1] = 54;//
    vector[1][1] = 21;//

    printf("The vector contains: %.2f, %.2f, %.2f, %.2f",vector[0][0],vector[0][1],vector[1][1],vector[1][0]);

    newline(1);

    float **v = numVector(0,2);

    v[0][0] = 1.2;
    v[0][1] = 3.43;

    printf("The other vector contains: %.2f, %.2f",v[0][0],v[0][1]); //1D vector doesnt work

    */

    newline(2);

    //________________V0.7.0.3________________//

    //________________V0.7.5.7________________//

    newblock();

    //strAdd(,) Test () v0.7.5.7//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("%d",strLength(strUnion(str1,str2)));

    newline(2);

    newblock(); 

    //WIP//

    //ARCHITECTURE/////////////////////////////
    // .... CODE ....                        //
    // THEN FOLLOW WITH A newline(2)         //
    // THEN WITH .. CODE ..                  //
    // ..END OF CODE..                       //
    // THEN newblock()                       //
    ///////////////////////////////////////////

    return 0;
}

//VERSION//

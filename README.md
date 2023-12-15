LAST EDITED [v0.1]
00:28 18.SEP.2023

(-) Recreated printArray function

(+)
    __UNI__
    -seed()
    -randnum()
    -printArray() +

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.2]
14:05 19.SEP.2023

(-) Re-written str___() functions (ADDED __STR__)

(-) Tests Up To strLength() function were succesful

(-) Removed the <string.h> library

(-) Changed tests' architecture to be easier to read

(+)
    __MISC__ ~
    -seed()
    __NUM__
    -numRand()
    __STR__
    -strLength() +
    -strPrint()

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.3]
1:51 20.SEP.2023

(-) Added numFactorial() function

(-) Added GENERAL VARIABLE TEST VALUES

(-) Added MISC category

(+)
    __MISC__ +
    -sortArray(,) +
    -seed() 
    __NUM__
    -numRand()
    -numFactorial() +
    __STR__
    -strLength()
    -strPrint()
    
///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.4]
4:31 21.SEP.2023

(-) Added the newline() function

(-) Added the newblock() function

(-) Widespread Use Of newline() and newblock() functions

(-) Added the strOverwrite(,) function

(-) Changes in LIBLOG.md

(-) Changes to code architecture

(+)
    __MISC__
    -sortArray(,)
    -seed()
    -newline() +
    -newblock() +
    __NUM__
    -numRand()
    -numFactorial()
    __STR__
    -strLength() 
    -strPrint()
    -strOverwrite(,) +

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.5]
21:05 21.SEP.2023

(-) Added the strReplaceChar(,,) function

(+)
    __MISC__
    -sortArray(,)
    -seed()
    -newline() 
    -newblock() 
    __NUM__
    -numRand()
    -numFactorial()
    __STR__
    -strLength() 
    -strPrint()
    -strOverwrite(,) 
    -strReplaceChar(,,) +

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.6]
01:05 24.SEP.2023

(-) Added the numFibonacci() function

(-) Added the numMax(,) function

(-) Added the strComparison(,) function

(-) Changed newline() function to receive the number of times to repeat "\n"

(-) Added the strToken(,) function

(+)
    __MISC__
    -sortArray(,)
    -seed()
    -newline() ~
    -newblock() 
    __NUM__
    -numRand()
    -numFactorial()
    -numFibonacci() +
    -numMax(,) +
    __STR__
    -strLength() 
    -strPrint()
    -strOverwrite(,) 
    -strReplaceChar(,,) 
    -strComparison(,) +
    -strTokens(,) +

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.6.1.1] (version 0.6 fix 1  0.6.1 *-* all time fix 1 0.6.1.1)
12:49 27.SEP.2023

(~) The malloc() function appear to not be working in strTokens(,)

(~) Tests showed the problem was in the function and not inside the lib_test.c file

(~) Will fix later...

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.6.2.2] (version 0.6 fix 2  0.6.2 *-* all time fix 2 0.6.2.2)
13:34 27.SEP.2023

(~) Function Fixed!

(~) Opearate printing the tokens next

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.7.0.2]
24:57 30.SEP.2023

(~) strToken(,) put on hold

(-) Added numVector(,) function
(-) numVector(,) requires to be calibrated
(-) Added DEF section for defines

(+)
    __DEF__ +
    PI +
    EULER_C +
    __MISC__
    -sortArray(,)
    -seed()
    -newline() 
    -newblock() 
    __NUM__
    -numRand()
    -numFactorial()
    -numFibonacci() 
    -numMax(,) 
    -numVector(,) + ~ (fixed)
    __STR__
    -strLength() 
    -strPrint()
    -strOverwrite(,) 
    -strReplaceChar(,,) 
    -strComparison(,) 
    -strToken(,) &

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.7.1.3]
19:59 1.OCT.2023

(~) Added more @param comments

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.7.2.4]
21:48 4.OCT.2023

(~) strTokens(,) will have to be rewritten; (WIP)

(~) Revised architecture on tests 

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.7.3.5]
20:46 6.OCT.2023

(~) Added new Test Library, Vectors.h

(-) Added numHadamardProduct(,,,,) function

(+)
    __DEF__ 
    PI 
    EULER_C 
    __MISC__
    -sortArray(,)
    -seed()
    -newline() 
    -newblock() 
    __NUM__
    -numRand()
    -numFactorial()
    -numFibonacci() 
    -numMax(,) 
    -numVector(,)
    -numHadamardProduct(,,,,) +
    __STR__
    -strLength() 
    -strPrint()
    -strOverwrite(,) 
    -strReplaceChar(,,) 
    -strComparison(,) 
    -strToken(,) /**/

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.7.4.6]
21:40 16.OCT.2023

(~) thought of a new way to create strTokens(,) ,using strReplaceChar(,,). Testing failed

///////////////////////////////////////////////////////////////////////////////////////////////////

LAST EDITED [v0.7.5.7]
02:27 20.OCT.2023

(~) Added strCombine(,) function to add strings with eachother

(~) Added #Ifdef and #endif in the library to ensure it is guarded

(~) Removed numHadamard(,,,,), numVector(,), numFactorial() and numFibonacci() functions

(~) Renamed the library to "StringEdit.h" instead of "peaky_c_lib.h" to fit the changes

(~) Removed header guards...

(+)
    __DEF__ 
    PI 
    EULER_C 
    __MISC__
    -sortArray(,)
    -seed()
    -newline() 
    -newblock() 
    __NUM__
    -numRand()
    -numMax(,) 
       ---
    __STR__
    -strLength() 
    -strPrint()
    -strOverwrite(,) 
    -strReplaceChar(,,) 
    -strComparison(,) 
    -strToken(,) /**/
    -strCombine(,) +

///////////////////////////////////////////////////////////////////////////////////////////////////
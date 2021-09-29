#include <stdio.h>
#include "getdouble.h"
#include <math.h>

/*
 *@author Nanami Kimoto
 *Compound interest calculator.
 *functions used: fabs, pow, floor, ceil, square root
 */

    int main (void){
    //variables, in doubles for decimal percentage
    double startingMoney = 0.0;
    double yearly = 0.0;
    double compoundedYear = 0.0;
    double yearAmount = 0.0;
    
    //user input questions for caluclations and store with get double
    printf("This Program will calculate your compound interest growth. Enter starting amount: \n");
      startingMoney = getdouble();
    printf("Enter annual percentage rate: ");
      yearly = getdouble();
    printf("Enter compound per year rate: ");
      compoundedYear = getdouble();
    
    printf("Enter amount of years: ");
      yearAmount = getdouble();
    //using power function to get ending money value 
    double endingMoney = startingMoney * pow((1+(yearly/compoundedYear)), compoundedYear*yearAmount);
     //using ciel and floor to round, fabs for absolute value to get an easy non-negative value
    printf("Compounded value: %d\n", (int)fabs(ciel(floor(endingMoney))));
    //just extra for no reason 
    printf("Square root of your compounded value: %f/n", sqrt(endingMoney));
    
    return 0;
    
    } 
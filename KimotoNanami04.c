#include <stdio.h> //importing C library
#include "getdouble.h"
/*
Nanami Kimoto
*/

int main(void){//main method

  //doubles
  double num1 = 0.0;//basic placeholder
  double num2 = 1.0;//basic placeholder
  //chars/
  char let1 = 'A';//basic input
  char let2 = 'Z';//basic input
  
  //%c for formatting
  //printf for formatting
  //getchar used four times for two letters
  
  //part 1
  printf("Please enter one letter: ");
   let1 = getchar();     
  printf("Your first letter is: '%c'\n", let1);
   getchar(); 
  //part 2
  printf("Please enter another letter: ");
   let2 = getchar();
  printf("Your second letter is: '%c'\n", let2);
   getchar(); 
  //part 3  
  printf("Please enter one number: ");
   num1 = getdouble();
      printf("Your first number is: %f\n", num1);
  //part 4
  printf("Please enter another number: ");
   num2 = getdouble();
      printf("Your second number is:  %f\n", num2); 
} 

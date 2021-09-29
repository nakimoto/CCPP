#include <stdio.h>
#include "getdouble.h"
#define Purpose "This program will calculate your age in days"//use #define to label purpose

/*
Nanami Kimoto
*/
     int main (void){
       //variables
       double year = 0.0;
       double month = 0.0;
       double day = 0.0;

       puts(Purpose);//call #define purpose
       //year print   
       printf("Please enter your birth year: ");
         year = getdouble();//store user input
       //month print
       printf("Please enter your birth month: ");
         month = getdouble();//store uder input
        //day print
       printf("Please enter your birthdate (day): ");
         day = getdouble();//store user input
    
      printf("Today's date: 2/2/2019 \n");//todays date and formatted with printf
         int todaysdate=(365.25 * 2019)+(365.25/12 * 2)+2;//todays date math
         int age=(365.25*year)+(365.25/12*month)+day;//figuring out age
         int dayage=todaysdate-age;//calculate amount of days old someone is 
      //print result
      printf("Your age in days: %d,%.3d\n", dayage/1000, dayage%1000);
       return 0;
}
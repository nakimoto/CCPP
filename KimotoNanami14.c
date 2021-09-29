#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/*Calculator for add, subtract, multiply, and divide from
 *-user input via command line arguments. 
 *@author Nanami Kimoto
 */

//calculator operations functions
int add(int,int);
int sub(int,int);
int mul(int,int);
int div2(int,int);

int main(int argc, char *argv[]) {

 //Variables
 int integer1;
 int integer2;
 int result;
 int indexValue;

 //if statements for handling errors on user input
 if(argc < 4){
      printf("ERROR: Please enter four commandline arguements\n");
      exit(1);//system exit
   } 
 if(argv[1][0] < '0' || argv[1][0] > '9'){
   printf("ERROR: First arguement requires a number 0-9\n");
   exit(1);//system exit
 }//checking fourth argument
  if(argv[3][0] < '0' || argv[3][0] > '9'){
   printf("ERROR: Fourth arguement requires a number 0-9\n");
   exit(1);//system exit
 }//handling operator errors 
 if(argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '.' && argv[2][0] != '/'){
   printf("ERROR: For the third arguement, please enter one of the following operators: '+' or '-' or '.' or '/'");
   exit(1);//system exit
 }
  //conversions
  integer1 = argv[1][0] - '0';
  integer2 = argv[3][0] - '0';
  indexValue = argv[2][0] - '+';

  //array of functions
  int (*array[SIZE])(int,int) = {add, NULL, sub, mul, div2};
  
  //printing results
  result = array[indexValue](integer1, integer2);
  printf("%i\n", result);

 return 0;
}

//add function
int add(int x, int y){
   return x + y;
}
//subtract function
int sub(int x, int y){
   return x - y;
}
//multiplication function
int mul(int x, int y){
   return x * y;
}
//division function
int div2(int x, int y){
   return x / y;
}
#include <stdio.h>

 /*
 *Program that will initialize regular variables, initialize pointers that will point to those variables
 *-and dereference those pointers to modify the values of the variables.
 *@author Nanami Kimoto
 *NOTE: Kept getting compiler warnings for formatting when trying to print
 *-address and variable info in different sections, I could only print together with tab to space
 */

int main(){

  //variable initialization
  int variable1 = 1;//int variable, number other than zero
  char variable2 = 'a';//char variable
  double variable3 = 1.1;//double variable, number other than zero
  
  //pointer initialization
  int*pint = NULL;
  char*pchar = NULL;
  double*pdouble = NULL;
  
  //pointer addresses
  pint = &variable1;
  pchar = &variable2;
  pdouble = &variable3;
  
  //address and variable info prints here 
  //uhunix adds 0x automatically so I didn't add manually 
  printf("Pointer names and addresses stored: \n ");
  printf("pint = %p\t variable1 = %i\n", pint, *pint);
  printf("pchar = %p\t variable2 = %c\n", pchar, *pchar);
  printf("pdouble = %p\t variable3 = %f\n", pdouble, *pdouble);
  
  //dereferencing points for initial values
  printf("Pointer names and values using dereferencing: \n ");
  printf("variable1 = %d\n", variable1);
  printf("variable2 = %c\n", variable2);
  printf("variable3 = %f\n", variable3);
  
  *pint = *pint + 4;
  *pchar = *pchar + 4;
  *pdouble = *pdouble + 4;
 
  //new value prints out dereferencing points after +4
  printf("Pointer names and values using dereferencing after + 4: \n");
  printf("variable1 + 4 = %d\n", variable1);
  printf("variable2 + 4 = %c\n", variable2);
  printf("variable3 + 4 = %f\n", variable3);
  
  return 0; 
}

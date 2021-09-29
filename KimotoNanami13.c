#include <stdio.h>
#define SIZE 5

/*
 *program that will initialize an array, initialize a pointer to that array
 *-and output the contents and address of the array in various ways.
 *@Author Nanami Kimoto
 *COMPILER WARNINGS: implicit declaration of function "increaseIntViaPointer", conflicting types for "increaseIntViaPointer"   
 *was having problems with function call so I called it with var to print initial value
 */

int main(){

   //declare and initilaize variables 
   int array[] = {1, 2, 3, 4, 5};//array declaration
   int *pointer = NULL;//pointer
   int i = 0;//for loop
   int var =1;//for function
   //Address assign
   pointer = array;
   //printing addresses
   printf("Array addresses: \n");
   for(i = SIZE - 1;i >= 0;i--){
      printf("array[%i] = 0x%p\n",i ,&array[i]);
   } 
   //printing array element
   printf("\n");
   printf("Printing last element: \n");
   //subscript 
   printf("array[4] = %i\n", array[4]);
   //pointer/offset 
   printf("*(array + 4) = %i\n", *(array + 4));
   //subscript using pointer
   printf("pointer[4] = %i\n", pointer[4]);
   //pointer/offset using pointer
   printf("*(pointer + 4) = %i\n", *(pointer + 4));
   printf("\n");
   
   //printing contents of array
   printf("Contents of Array: \n");
   for(i = SIZE - 1;i >= 0;i--){//subscript
      printf("Using array subscript notation with array name...: array[%i] = %i\n",i ,array[i]);
   } 
     printf("Contents of Array: \n");
   for(i = SIZE - 1;i >= 0;i--){//pointer offset
   printf("Using pointer/offset notation with array name...: *(array + %i) = %i\n",i, *(array + i));
   }
     printf("Contents of Array: \n");
   for(i = SIZE - 1;i >= 0;i--){//subscript with pointer
      printf("Using array subscript notation with pointer...: pointer[%i] = %i\n",i, pointer[i]);
   }
     printf("Contents of Array: \n");
   for(i = SIZE - 1;i >= 0;i--){//pointer offset with pointer
      printf(" Using pointer/offset notation with pointer...: *(pointer + %i) = %i\n",i, *(pointer + i));
}
//for +100 function
   printf("Param value will increase by 100. \n");
   *pointer = *pointer+100;//pointer becomes pointer +100 for new value
      printf("New value: %i\n", *pointer);//print new value
   increaseIntViaPointer(var);//call to var for initial value
   return 0;
}
//function for initial value
void increaseIntViaPointer(int var){
   printf("Integer variable BEFORE function call...: %i\n", var);

return ;
}
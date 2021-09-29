#include <stdio.h>
#include "getdouble.h"

/*
 * Use of five custom recursive functions that perform various operations on numbers. 
 * @author: Nanami Kimoto
 */


//methods
void recursiveCount(int firstNum, int secondNum);//counting function
int recursiveAdd(int firstNum, int secondNum);//adding function
int recursiveMultiply(int firstNum, int secondNum);//multiplication function
int recursivePower(int firstNum, int secondNum);//power function
int recursiveGcd(int firstNum, int secondNum);//gcd function

int main(){
  int firstNum;
  int secondNum;
 //user input
 printf("Enter two positve integers, seperated by a space, the first smaller than the second: \n");
  firstNum = (int)getdouble();
  secondNum = (int)getdouble();
  //error handling
  if(firstNum < 0 || secondNum <0){
     printf("Error: Enter positive numbers only.\n");
  }
   else if(firstNum > secondNum){ 
     printf("%d is a greater value than %d\n", firstNum, secondNum); 
    } else {
    //count
 printf("Counting from %d to %d = ", firstNum, secondNum);
 recursiveCount(firstNum, secondNum);
 //add
 printf("\nAddition of %d and %d = %d\n", firstNum, secondNum, recursiveAdd(firstNum, secondNum));
 //multiply
 printf("Multiplication of %d and %d = %d\n", firstNum, secondNum, recursiveMultiply(firstNum,secondNum));
 //power
 printf("%d raised to the power of %d = %d\n", firstNum, secondNum, recursivePower(firstNum, secondNum));
 //gcd
 printf("Greatest Common Denominator of %d and %d = %d\n", firstNum, secondNum, recursiveGcd(firstNum, secondNum));
 }
 return 0;

}
//recursive calls
//count
void recursiveCount(int firstNum, int secondNum){
   printf(" %d ", firstNum); 
  if(secondNum != 0 && firstNum < secondNum){
     recursiveCount(firstNum + 1, secondNum);
   } else {
      return;
    }

}
//add
int recursiveAdd(int firstNum, int secondNum){
  if(firstNum != 0){
     return recursiveAdd(secondNum, firstNum - 1) + 1;
 } else {
    return secondNum;
 }
   
}
//multiply
int recursiveMultiply(int firstNum, int secondNum){
  
  if(secondNum != 0){
     return (firstNum + recursiveMultiply(firstNum, secondNum -1));
   } else {
     return secondNum;
   }

}
//power
int recursivePower(int firstNum, int secondNum){
  if(secondNum != 1){
     return (firstNum * recursivePower(firstNum, secondNum - 1));
   } else {
     return firstNum;
   }

}
//gcd
int recursiveGcd(int firstNum, int secondNum){
  if (secondNum != 0){
      return recursiveGcd(secondNum,firstNum % secondNum);
  } else {
        return firstNum;  
   }

}
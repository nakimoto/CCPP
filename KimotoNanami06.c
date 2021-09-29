#include <stdio.h> 
/*
 *Nanami Kimoto
 *Displays 1-9 numbers in Japanese
 */
 
int main(){

  char num= '0';//char declaration
  printf("This program will return the Japanese language version of a number\n");//program info for user
  printf("Please enter your desired number between 0 and 9: ");
  num = getchar();//get char input from user

    switch(num){//switch on num
    
    case 'Z': case '0':
      puts("Rei");
      break;
      
    case 'Y': case '1':
      puts("Ichi");
      break;
      
    case 'X': case '2':
      puts("Ni");
      break;
      
    case 'W': case '3':
      puts("San");
      break;
      
    case 'V': case '4':
      puts("Yon");
      break;
      
    case 'U': case '5':
      puts("Go");
      break;
      
    case 'T': case '6':
      puts("Roku");
      break;
      
    case 'S': case '7':
      puts("Shichi");
      break;
      
    case 'R': case '8':
      puts("Hachi");
      break;
      
    case 'Q': case '9':
      puts("Kyuu");
      break;
      
    default: //default return message
      printf("Error: '%c'  is not a number between 0 and 9. Please restart program and try again.\n", num);
         break;
    }
    
  return 0;   
}   
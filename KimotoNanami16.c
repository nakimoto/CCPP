#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 36

/*
 * Create a program that can translate written International Morse Code into an English phrase.
 *@author Nanami Kimoto
 *
 */


//given morse codes
const char *morse[SIZE] = {//for 36 cases
    "-----",
    ".----",
    "..---",
    "...--",
    "....-",
    ".....",
    "-....",
    "--.. ",
    "---.. ",
    "----.",
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--.",
    "....",
    "..",
    ".---",
    "-.-",
    ".-..",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-.--",
    "--..",
};
//chars as letters for conversion
const char *letters[SIZE] = {
    "0",
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h",
    "i",
    "j",
    "k",
    "l",
    "m",
    "n",
    "o",
    "p",
    "q",
    "r",
    "s",
    "t",
    "u",
    "v",
    "w",
    "x",
    "y",
    "z",
};

int main(int argc, char *argv[]){//commandline 
//command line error checking
  if(argc < 2){
      printf("Error: At least 2 command line arguments are expected, only 1 present. \n");
      exit(1);//system exit
   }
//variables for nested for loop
  int i;
  int j;
  //for loops for converting to words
   for(i = 0; i < argc; i++){//through morse codes
     for(j = 0; j < 36; j++){//through letters
      if(strcmp(morse[j], argv[i]) == 0){
         printf("%c", *letters[j]);//print and formatting
       }
    }
  }
  printf("\n");//new line formatting 
}
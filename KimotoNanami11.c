#include <stdio.h> 
/* 
 *Program that will count how many letters were entered by the user
 *-by storing the count of each letter in an array and printing the results.
 *@author Nanami Kimoto
 */
 
//custom functions
void printInstructions();//this prints the instructions to the user
int loopAndCountLetters(int letters[]);//this loops through the letters
int outputResults(int letters[]);//this gets the results

int main(){
int letters[26]={0};//declaring and initializing array for letters of the alphabet
//methods
   printInstructions();//this prints the instructions to the user
   loopAndCountLetters(letters);//this loops through th eletters
   outputResults(letters);//this gets the results
 
return 0;
}

void printInstructions(){//given instructions in assignment
  printf("This program will count the letters of the alphabet.\n");
  printf("Type several sentences, or use input redirection to input a file.\n");
  printf("To exit program, enter EOF (end of file) by pressing Crtl-D.\n");
}//program will keep running until users ends the program manually

int loopAndCountLetters(int letters[]){
//int variables
int counter;
   int characters;
   counter = 0;
   //For the user to exit and show the total results
   while(characters != EOF){//handling chars and computing index
   //making sure uppercase and lowercase are both considered
    if (characters>='a' && characters<='z'){
        ++letters[characters-'a'];
     } if (characters>='A' && characters<='Z'){
        ++letters[characters-'A'];
    }characters=getchar();//get user input
  }
}//no return value
 int outputResults(int letters[]){
 int i;//for loop use
 printf("Character values: \n");
 for(i=0; i<26; i++){//loop through letters
      printf("%c \t  %d\n", i+'a', letters[i]);//formatted list 
    }
}//no return value
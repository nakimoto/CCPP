 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
/*
 * @author: Nanami Kimoto
 * Rock Paper Scissors program.
 * functions: intro(), rps(), add() that takes in parameters to add the total
 */
 
 
/* Functions */
void intro();
void rps();
int add(int, int);

int main(void){
   intro();
   printf("Use the letters r, p, and s to represent your choice. You can press q or Q any time to end.\n");
   printf("Please enter 'r', 'p', 's', for rock, paper, or scissor.\n"); 
   rps();
   
  char choice;//if user enter uppercase or lowercase q
    choice = getchar();
    if(choice =='Q' || choice == 'q'){ 
    exit(0);//system exit
    }else{
     printf("\n");
     }
  return 0;
}


void rps(){

char choice;
    choice = getchar();//if user enter uppercase or lowercase q
    if(choice =='Q' || choice == 'q'){ 
    exit(0);//system exit
     }else{
     printf("\n");
     }
     
/* Variables */
 
  //for EOF
   int i;
   //these help the random operation run 
   int randSetter1 = 3;
   int randSetter2 = 1;
  //computer and user scores
   int computer = 0;
   int user = 0;
   int selector;
   //rps variables
   int rock = 'r';
   int paper = 'p';
   int scissors = 's';
   
   //for random
   srand(time(NULL));//for seed
   while(i != EOF)//while not end of file 
   //loop for going through different options of the game
      selector = getchar();
      int compChoice = add(randSetter1, randSetter2);  
      //selector for rock
      if(selector == 'r') {
         if(compChoice == 1){
            printf("Tie!\n");
         }
         if(compChoice == 2){
            printf("Paper beats rock, the computer wins!\n");
            computer = computer + 1;
         }
         if(compChoice == 3){
            printf("Rock beats scissors, you win!\n");
            user = user + 1;
         }
      getchar();//clear
      }
      //selector for paper
      else if(selector == 'p'){
         if(compChoice == 1){
            printf("Paper beats rock, you win!\n");
            user = user + 1;
         }
         if(compChoice == 2){
            printf("Tie!\n");
         }
         if(compChoice == 3){
            printf("Scissors beats paper, you lose!\n");
            computer = computer + 1;
         }
      getchar();//clear
      }
      //seector for rock
      else if(selector == 's'){
         if(compChoice == 1){
            printf("Rock beats scissors, you lose!\n");
            computer = computer + 1;
         }
         if(compChoice == 2){
            printf("Scissors beats paper, you win!\n");
         }
         if(compChoice == 3){
            printf("Tie!\n");
         }
      
      getchar();//clear
      }
      
      else if(selector == EOF){//if end of file, computer total and give winner
         getchar();
         if(computer > user){
            printf("Computer wins %d to %d\n",computer,user);
            exit(0);
         }
         else if(computer < user){
            printf("User wins %d to %d\n",user,computer);
            exit(0);
         }
         else if(computer == user){
            printf("Tie! Restart program to play again!\n");
            exit(0);
         }
      }
        else{
        //error handling
         getchar();
         printf("Error: Please enter 'r', 'p', or 's' only.\n"); 
      }
    return;
   }
 
//for random
int add(int x, int y){
   int z = 0;
   z = rand()%x + y;
   return z;
}
//reference to intro
void intro(){
   int selector; 
  //menu
   printf("Would you like to play rock, paper, scissors? Press 'y' for yes and 'n' for no.\n");
   selector = getchar();
   if(selector == 'y'){
      printf("Welcome to the game!.\n");
   }
   else if(selector == 'n'){
      exit(0);//system exit
   }
   getchar();//clear
}
#include<stdio.h>
#include <time.h> //time function
#include <stdlib.h> //random number generator functions
#include <string.h>

/*
  Simulates shuffling a deck of cards 
  using structures and typedef 
  by initializing, shuffling, and displaying the card deck
  *Modify the example cards.c program so that it includes a color attribute, red or black, of the card.
   How to use structures.
  *@Author Nanami Kimoto
*/

#define MAX 9
#define MAX_CARDS 52
#define MAX_RANKS 13
#define MAX_SUITS 4
#define COLS 1
#define MAX_COLOR 4

/**
 * A playing "card" structure.
 * Stores the following attributes of a single playing card:
 *   1) rank: The number or face (Ace, King, Queen, Jack)
 *   2) suit: Clubs, Diamonds, Hearts, Spades.
 */
struct card{ 
  char *rank;    
  char suit[MAX];
  char *color;  //for color of tye of card  
};
// Declares Card as an alias/synonym for struct card.
typedef struct card Card;

// All possible ranks a playing card can have.
char *ranks[MAX_RANKS] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", 
			  "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

// Two-dimensional array of strings for suits.
// All possible suits a playing card can have.
char suits[MAX_SUITS][MAX] = {"Club", "Diamonds", "Hearts", "Spades"};
char *color[MAX_COLOR] = {"(black)", "(red)", "(red)", "(black)"};//for oclor of type of card
/** Function prototypes */
void initialize(Card []);
void shuffle(Card []);
void display(const Card[]);

int main(){
  char newline = '\n'; //to repeat while loop
  //declare an array of 52 cards
  Card deck[MAX_CARDS] = {"",""};//temporary holder
   // Populate the deck.
  initialize(deck);
  printf("Display an ordered deck of cards:\n");
  display(deck);
   // Keep shuffling and displaying the deck each time the user hits Enter.
  // End the program when the user enters anything else.
  while('\n' == newline){
    printf("\nshuffling deck ... \n");
    shuffle(deck);
    display(deck);
    printf("\nWould you like to shuffle again?\nIf so, press \"Enter\" key. ");
    printf("If not, press any other key. ");
    newline = getchar();
  }
  return 0;
}

/**
 * Initializes a playing card deck of 52 cards.
 * Sets the rank and suit of each card in deck[].
 * Creates all the Clubs, then Diamonds, then Hearts and finally Spades cards.
 * (Essentially in the order of suits[].)
 *
 * @param deck[] An array of cards to initialize.
 */
void initialize(Card deck[]){
  int i = 0;
   // Loop through the deck.
  for(i=0;i<MAX_CARDS;i++){
  // i % MAX_RANKS to cycle through each possible rank.
    deck[i].rank = ranks[i%MAX_RANKS];
    // i / MAX_RANKS to keep the same suit for each card in a suit.
    strncpy(deck[i].suit, suits[i/MAX_RANKS], MAX);
    deck[i].color = color[i/MAX_RANKS];//get color through array 
  }
}

/**
 * Shuffles the deck (an array of cards).
 * Uses the pseudo-random number generator to shuffle the cards.
 * Loops through the entire deck and makes random swaps.
 *
 * @param deck[] An array of cards to shuffle.
 */
void shuffle(Card deck[]){
  int swapper = 0; //card swapper
  int i = 0; //counter
  Card temp = {"", ""}; //holder 
  srand(time(NULL)); //for random
  for(i=0;i<MAX_CARDS;i++){//loop through
    swapper = rand() % MAX_CARDS; //randomized cards 
    //swap
    temp = deck[i];
    deck[i] = deck[swapper];
    deck[swapper] = temp;
  }
}

/**
 * Prints the contents of the deck (an array of cards) in columns.
 * Default: 3 columns (Change COLS to change the number of columns)
 *
 * @param deck[] An array of cards to be printed.
 */
void display(const Card deck[]){
  int i = 0;
  for(i=0;i<MAX_CARDS;i++){
    printf("%5s of %-12s %s", deck[i].rank, deck[i].suit, deck[i].color);
    // Every COLS (1) cards print a newline to separate.
    if(0==((i+1)%COLS)){
      printf("\n");
    }
  }
}


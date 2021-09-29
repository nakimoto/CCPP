#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
/*
 *Random sized linked list of randomly generated integers.
 *@author Nanami Kimoto
 */
 
//linked list structure
struct node{
    int data;
    struct node*next;
};
//typedef declarations
typedef struct node Node;
typedef Node*NodePointer;

//pointers 
void insert(NodePointer*, int);
void displayList(NodePointer);
void totalAverage(NodePointer);

//main method
int main(void){

   //variables 
    NodePointer head = NULL; 
    int randNum = 0;
    int holdItem; 
    int i;

   srand (time(NULL));//for generating random (seed)
   randNum = (25+(rand()%51)); //for the randomized numbers
     //loop for insertion into list
    for(i = 0;i < randNum;i++){
    holdItem = rand()%101;
    insert(&head,holdItem);
    }
    displayList(head);//print head node
    printf(" \n");
    totalAverage(head); 
    return 0;
}
//insert method
void insert(NodePointer *point, int value){
    //node declarations
     NodePointer newNode;
     NodePointer previous;
     NodePointer current;
     //pointing to new node
     newNode = (NodePointer)malloc(sizeof(Node));
     //handling null values and where pointer leads to
     if(newNode != NULL){
        newNode->data = value;
        newNode->next = NULL;
        previous = NULL;
        current =* point;
    //handling while pointer has value
     while(current != NULL && value > current->data){
             previous = current;
             current = current->next;
        }if(previous == NULL){
             newNode->next =* point;
             *point = newNode;
          }else{
           previous->next = newNode;
           newNode->next = current;
      }
   }                         
}
//print list method
void displayList(NodePointer i){
  //printing list
  printf("Node list: \n");
  while(i != NULL){
       printf("%d, ",i->data);
          i = i->next;
   }                                                      
}
//allsumcountaverage method
void totalAverage(NodePointer i){
  //variables
  int sum = 0;
  int length = 0;
  double average = 0.0;
  //loop for counting nodes, adding nodes, pointing to next node
  while(i != NULL){ 
    length++;//counter
    sum += i->data;//adding
    i = i->next;//pointing
  }
  //getting average and printing sum, count, average
  average = sum/(double)length;//get average and conversion to double
  printf("sum values = %d\n", sum);
  printf("count values = %d\n", length);
  printf("average values = %.2f\n", average); 
}
 #include <stdio.h>
 
/*
 * @author Nanami Kimoto
 * Print Japanese numbers from 1 to 999
 */

int main() {

   printf("This program will print between 1 and 999 Japanese numbers. \n");
   //variable declarations
   int tens = 0;
   int hundreds = 0;
   int num = 0;
 
   for(num = 1; num <= 999; num++) {//for loop to get between 1 and 999
      tens = (num/10) % 10;//to get tens digits
      hundreds = (num/100) % 10;//to get hundreds digits
    
      printf(" = %i \n", num);
    
     switch(hundreds) {//switch on hundreds place digits
         case 1:
            printf("Hyaku");
            break;
         case 2:
            printf("Nihyaku");
            break;
         case 3:
            printf("San-byaku");
            break;
         case 4:
            printf("Yonhyaku");
            break;
         case 5:
            printf("Gouhyaku");
            break;
         case 6:
            printf("Rop-pyaku");
            break;
         case 7:
           printf("Shichihyaku");
            break;
         case 8:
           printf("Hap-pyaku");
            break;
         case 9:
            printf("Kyuuhyaku");
            break; 
      }
      
       switch(tens) {//switch on tens place digits
         case 1:
            printf("Jyuu");
            break;
         case 2:
            printf("Nijyuu");
            break;
         case 3:
            printf("Sanjyuu");
            break;
         case 4:
            printf("Yonjyuu");
            break;
         case 5:
            printf("Goujyuu");
            break;
         case 6:
            printf("Rokujyuu");
            break;
         case 7:
            printf("Shichijyuu");
            break;
         case 8:
            printf("Hachijyuu");
            break;
         case 9:
            printf("Kyuujyuu");
            break;  
      }
      
       //mod for ones is done here 
      switch(num%10) {//swich on ones place digits
         case 1:
            printf("Ichi");
            break;
         case 2:
            printf("Ni");
            break;
         case 3:
            printf("San");
            break;
         case 4:
            printf("Yon");
            break;
         case 5:
           printf("Gou");
            break;
         case 6:
            printf("Roku");
            break;
         case 7:
            printf("Shichi");
            break;
         case 8:
            printf("Hachi");
            break;
         case 9:
            printf("Kyuu");
            break;  
      }
   } 
   return 0;  
}
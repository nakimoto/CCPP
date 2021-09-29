#include <iostream>
#include <cmath>

/* 
*Create a class named Complex to represent complex numbers. 
*Use the main() function and create at least three complex number objects and test all member functions of the Complex class.
*@Author Nanami Kimoto
*/

using namespace std;

//to represent complex numbers
class Complex{

public:
  //constructor
   Complex(){
    real = 0;
    imaginary = 0;  
   }
  //print method
  void print(){//to print in (a+bi) form
   cout<<real<< " + " <<imaginary<<"i";
  }
   //set method
  void set(double reals, double imaginarys){
    //set variables to represent already declared variables
    real = reals;
    imaginary = imaginarys;
  }//get real method
   double getReal(double really){
     real = really;
     cout<<really;
  }
  //get imaginary method
  double getImaginary(double imagine){
     imaginary = imagine;
     cout<<imagine;
  }
//private data members
 private:
 
   double real;
   double imaginary;
   
};

int main(){
//driver for testing
//used numbers from the example output in assignment
   Complex c1;
   cout<<"Complex number C1 is: ";
   c1.print();
   cout<<endl;
   //set method
   cout<<"Complex number C2 is: ";
   c1.set(3.3, 4.4);
   c1.print();
   cout<<endl;
   //get methods
   Complex c2;
   cout<<"Complex number C3's real part is: ";
   c2.getReal(5.5);
   cout<<endl;
   
   cout<<"Complex number C3's imaginary part is: ";
   c2.getImaginary(6.6);
   cout<<endl;
    
 return 0;
 
}
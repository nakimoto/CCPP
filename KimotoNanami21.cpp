 #include <iostream>
 #include <cmath>
/*
 *Build off the Complex class from implementing additional member functions.
 *@Author Nanami Kimoto
 */

using namespace std;
 
 //some of complex copied from last assignment
class Complex{
 //moved private variables up from last assignment
 private:
   double real;
   double imaginary;
         
 public://start of public functions  
  //set from complex  
   void set(double reals, double imaginarys){  
    real = reals;
    imaginary = imaginarys;
 }
//copy constructor
void copy(const Complex &complex){
   set(complex.real, complex.imaginary);
   
 }
//print from complex
void print() const{
    cout << real << " + " << imaginary << "i";
    cout<<endl;
       
 }
//add function
void add(Complex &complex){
    cout<<"Addition function: ";
    cout<<endl;
    Complex result;
    result.real = complex.real + real;
    result.imaginary = complex.imaginary + imaginary;
    
      } 
//subtract function
void subtract(Complex &complex){
  cout<<"Subtraction function: ";
  cout<<endl;
  Complex result;
  result.real = complex.real - real;
  result.imaginary = complex.imaginary - imaginary;
  
  //print
  cout<<"("<< real<<" + "<<imaginary<<"i) - ("<<complex.real <<" + "<<complex.imaginary<<"i) = ";
  cout<<"("<<result.real<<" + "<<result.imaginary<<"i)";
  cout<<endl;


}
//multiply function
void multiply(Complex &complex){
   cout<<"Multiplication function: ";
   cout<<endl;

   Complex result;
   result.real = (complex.real * real) - (complex.imaginary * imaginary);
   result.imaginary = (complex.real * imaginary) + (complex.imaginary * real);
   
   //print
   cout<<"("<<real<<" + "<<imaginary<<"i) * ("<<complex.real<<" + "<<complex.imaginary<<"i) = ";
   cout<<"("<<result.real<<" + "<<result.imaginary<<"i)";
   cout<<endl;

}
//divide
void divide(Complex &complex){
  cout<<"Division function: ";
  cout<<endl;
  //result
  Complex result;
  result.real = ((complex.real * real) + (complex.imaginary * imaginary)) / ((real * real) + (imaginary * imaginary));
  result.imaginary = ((complex.imaginary * real) - (complex.real * imaginary)) / ((real * real) + (imaginary * imaginary));
  
  //print
  cout<<"("<< real<<" + "<<imaginary<<"i) / ("<<complex.real <<" + "<<complex.imaginary<<"i) = ";  
  cout<<"("<<result.real<<" + "<<result.imaginary<<"i)";
  cout<<endl;
}

//destructor
~Complex(){
  cout<<"Destructor for this function: ("<<real<<" + "<<imaginary<<"i)";
  cout<<endl;
   }
};

int main(){

  Complex c1, c2, c3, c4;//from complex
  //set as number, jus random doubles I chose
  c1.set(1.1,2.2);
  c3.set(3.3,4.4); 
  c4.set(5.5,6.6);
  //print value
  cout<<"Complex number C1: ";
  c1.print();
  
  cout<<"Copy Complex number C1: ";
  c2.copy(c1);
  //print value
  c2.print();
  //math functions for complex number 1
  cout<<"C1:";
  cout<<endl;
  c2.add(c1);
  c2.subtract(c1);
  c2.multiply(c1);
  c2.divide(c1);
  cout<<endl;
  //math functions for complex number 2 
  cout<<"C2:";
  cout<<endl;
  c3.add(c3);
  c3.subtract(c3);
  c3.multiply(c3);
  c3.divide(c3);
  cout<<endl;
  //math functions for complex number 3
  cout<<"C3:";
  cout<<endl;
  c4.add(c4);
  c4.subtract(c4);
  c4.multiply(c4);
  c4.divide(c4);
  cout<<endl;

  return 0;
}
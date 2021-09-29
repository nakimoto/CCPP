 #include <iostream>
 #include <cmath>
 
/*
 *Build off of the Complex class from the previous assignment by implementing overloaded operators.
 *@Author Nanami Kimoto
 */
 
 using namespace std;
 
 class Complex{
    private://private variables
        double real;
        double imaginary;
        
    public://everything els epublic like last assignment
    
void set(double reals, double imaginarys){
    real = reals;
    imaginary = imaginarys;
}
 //copy constructor from previous assignment
 void copy(const Complex &complex){
   set(complex.real, complex.imaginary);
}
// start of operator functions
Complex operator+(Complex &complex){
//addition
    cout<<"Addition: ";
    cout<<endl;
    cout<<"("<<real<<" + "<<imaginary<<"i)"<<" + "<<"("<<complex.real<<" + "<<complex.imaginary<<"i) = ";
    Complex result;
    result.real = complex.real + real;
    result.imaginary = complex.imaginary + imaginary;
    //return result
    return result;
} 

Complex operator-(Complex &complex){
 //subtraction
  cout<<"Subtraction: ";
  cout<<endl;
  cout<<"("<<real<<" + "<<imaginary<<"i)"<<" - "<<"("<<complex.real<<" + "<<complex.imaginary<<"i) = ";
  Complex result;
  result.real = complex.real - real;
  result.imaginary = complex.imaginary - imaginary;
 //return result
    return result;
}

Complex operator*(Complex &complex){
 //multiplication
   cout<<"Multiplication: ";
   cout<<endl;
   cout<<"("<<real<<" + "<<imaginary<<"i)"<<" * "<<"("<<complex.real<<" + "<<complex.imaginary<<"i) = ";
   Complex result;
   result.real = (complex.real * real) - (complex.imaginary * imaginary);
   result.imaginary = (complex.real * imaginary) + (complex.imaginary * real);
   //return result
   return result;
}
Complex operator/(Complex &complex){
//division
  cout<<"Division: ";
  cout<<endl;
  cout<<"("<<real<<" + "<<imaginary<<"i)"<<" / "<<"("<<complex.real<<" + "<<complex.imaginary<<"i) = ";
  Complex result;
  result.real = ((complex.real * real) + (complex.imaginary * imaginary)) / ((real * real) + (imaginary * imaginary));
  result.imaginary = ((complex.imaginary * real) - (complex.real * imaginary)) / ((real * real) + (imaginary * imaginary));
//return result
   return result;
}
bool operator==(Complex &complex){//boolean operator functions
//==
 cout<<"Equivalent (==) operator: ";
 cout<<endl;
 cout<<"("<<real<<" + "<<imaginary<<"i)"<<"=="<<"("<<complex.real<<" + "<<complex.imaginary<<"i) = ";
 //loop for returning 
 if(complex.real == real&&complex.imaginary == imaginary) {
  return true;
 }
 else if(complex.real != real||complex.imaginary != imaginary){
   return false;
     }
}
bool operator!=(Complex &complex){
//!=
 cout<<"Does not equal (!=) operator: ";
 cout<<endl;
 cout<<"("<<real<<" + "<<imaginary<<"i)"<<" != "<<"("<<complex.real<<" + "<<complex.imaginary<<"i) = ";
 //loop for returning
 if(complex.real == real&&complex.imaginary == imaginary) {
   return false;
 }
 else if(complex.real != real||complex.imaginary != imaginary){
   return true;
    }
}
//print 
void print() {
      cout<<"("<<real<<" + "<<imaginary<<"i)";
      cout<<endl;
}
//use of instream signature
friend istream &operator>>(istream &input, Complex &complex){
    input>>complex.real>>complex.imaginary;
    return input;
  }
 //use of outsream signature
friend ostream &operator<<(ostream &output, const Complex & complex){
    output<<"("<<complex.real << " + "<<complex.imaginary<<"i)";
    return output;
   }
};

//main method
int main(){

  Complex  c, c1, c2;
  bool mybool;
  double real, imaginary;
  
  cout << "Enter a Complex number in the form 'a+bi': ";
  cin >> c1;
  cout << "Enter another Complex number in the form 'a+bi': ";
  cin >> c2;
  
  cout << endl;

  c = c1 + c2;
  cout<<c;
  cout<<endl;
  
  c = c1 - c2;
  cout<<c;
  cout<<endl;
  
  c = c1 * c2;
  cout<<c;
  cout<<endl;
  
  c = c1 / c2;
  cout<<c;
  cout<<endl;
  
  mybool = c1 == c2;
  cout<<boolalpha<<mybool<<endl;
  
  mybool = c1 != c2;
  cout<<boolalpha<<mybool<<endl;
 return 0;
}
#include <iostream>
/*
 *Create a base class named Circle with data members and functions related to circles
 *-and a derived class named Cylinder with data members and functions related to cylinders.
 *@author Nanami Kimoto
 *NOTES: BAD CODE. Completely filled with bugs. 
 */
 
using namespace std;

class Circle{
   public:
    static const double PI;

  protected:
    double radius; 
  };
const double Circle::PI = 3.1415926;//declared outside circle

Circle(double radius){//constructor  
   setRadius();
 }

 Circle(double height2, double radius2){//pass through height and radius
 	setHeight(height2);//set each
 	setRadius(radius2);
 }

 char *name() const{//for ostream name
 	return "Circle: ";
 }
void setHeight(double height2){//set height function
	height = height2;
 }
void setRadius(double radius2){//set radius function
	radius = radius2;
 }

double getHeight() const{//get height function
	return height;
 }

double getRadius() const{//get radius function
	return radius;
 }

double area() const{
	return PI*(radius*radius);//formula for CIRCLE area, return value
 }
 friend ostream &operator<<(ostream &output, const Circle&cir){//ostream .name methods
 	output<<cir.name()<<"Radius = "<<cir.radius<< ", Area = "<<cir.area()<<endl
 	<<"Get methods: "<<cir.getRadius();
 	 return output;//return circle info
   }
 };
class Cylinder: public Circle{//inheritance from circle
 public:
   Cylinder(): 
      Circle(){}//inheritance from circle
   Cylinder(double height2, double radius2): Circle(height2, radius2){}
   
char *name() const{//overrides circle 
    	return "Cylinder: ";
      
double area() const{
   return (2*PI*radius*height)+(2*PI*(radius*radius));//formula for CYLINDER area, return value
 }

double volume() const{
   return PI*(radius*radius)*(height);//formula or CYLINDER volume, return volume
 }

friend ostream &operator<<(ostream &output, const Cylinder&cylin){//ostream .name methods
 	output<<cylin.name()<<"Height: "<<cylin.height<<", Radius: "<<cylin.radius<<", Volume: "<<cylin.volume()<<", Area: "<<cylin.area()<<endl
 	<<"Data Members: "<<cylin.getRadius()<<","<<cylin.getHeight();
 	 return output;
   }
 };

int main() {//given main method

  cout << "Test Circle class default constructor and area() function:" << endl;
  Circle circle1;
  
  cout << "Circle circle1: radius = " << circle1.getRadius() << endl;
  cout << "area = " << circle1.area() << endl;
  
  cout << "\n";
  
  cout << "Test Circle class constructor with radius:" << endl;
  Circle circle2(-10);
  
  cout << "Circle circle2: radius = " << circle2.getRadius() << endl;
  cout << "Test set method, set circle2 to radius -5..." << endl;
  circle2.setRadius(-5);
  cout << "radius = " << circle2.getRadius() << endl;
  
  cout << "\n";
  
  cout << "Test Cylinder class given radius and height:" << endl;
  Cylinder cylinder1(20, -30);
  
  cout << "Cylinder cylinder1: radius = " << cylinder1.getRadius();
  cout << "; height = " << cylinder1.getHeight() << endl;
  cout << "surface area = " << cylinder1.area() << endl;
  cout << "volume = " << cylinder1.volume() << endl;
  
  cout << "\n";
  
  cout << "Test set method, set cylinder1 to radius 40 and height 50..." << endl;
  cylinder1.setRadius(40);
  cylinder1.setHeight(50);
  cout << "radius = " << cylinder1.getRadius() << "; height = " << cylinder1.getHeight() << endl;
  cout << "surface area = " << cylinder1.area() << endl;
  cout << "volume = " << cylinder1.volume() << endl;

  return 0;
}
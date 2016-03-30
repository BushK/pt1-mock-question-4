#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:Kabo Onesmo Mabusha
// Student No:214576451
// Date: 2016/03/30
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 
class Animal{
public:
	virtual void name(){}
	virtual void does(){}
};
class Bird: public Animal{
public:
	Bird(){}
      void name(){
		cout << "I am Bird" << endl;
	}
	 void does(){
		cout << "I go chirp chirp" << endl;
	}
};
class Dog : public Animal{
public:
	Dog(){}
	 void name(){
		cout << "I am Dog" << endl;
	}
	 void does(){
		cout << "I go woof woof" << endl;
	}
};

int main(){
	Animal *AnimalPtr;
	Dog theDog;
	Bird theBird;

	AnimalPtr = &theBird;
	AnimalPtr->name();
	AnimalPtr->does();

	AnimalPtr = &theDog;
	AnimalPtr->name();
	AnimalPtr->does();

};
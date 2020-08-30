#include "Person.h"
#include "Car.h"

Person::Person(std::string name, std::string email, Car *car) : //default argument written in declaration, not definition. must also be written last in the parameter-list.
	name{ name }, email{ email }, car{ car }
{
}

std::string Person::getName() const {
	return name;
}

std::string Person::getEmail() const {
	return email;
}



void Person::setEmail() {
	std::string newEmail;
	std::cout << "What is the e-mail adress?";
	std::cin >> newEmail;
	email = newEmail;
	std::cout << "E-mail has been set." << std::endl;
}

Person::Person():
	name{}, email{}, car{}
{
}

/*bool Person::hasAvalibaleSeats() const should see if the person has
avalibale seats. To do this we first check the person even has a car.
When we know this, then we can use the memeberfunction from the class Car. 
We must here remember that car is a pointer, and when we want to acsess the variable/object
that the pointer is pointing to, we must derefer it. For example *car

LES OM DEREFERERINGSOPERATOREN  

*/
bool Person::hasAvalibaleSeats() const {
	if (car != nullptr) { //check if there is a car
		return car->hasFreeSeats(); //use the function from the Car-class to see if there are empty seats
		//return car->hasFreeSeats();
		
		//use the member cuntion of the object car
	}
	return false; //if the person doesnt have a car then ofcourse the code should return false
}

/*now i want to be able to write out the content of a person to the screen
To do this i oveload the operator<<*/

std::ostream& operator << (std::ostream& os, const Person& p) {
	std::string seats = "No";
	if (p.hasAvalibaleSeats())
		seats = "Yes";
	return os << "Name: " << p.name << "\nE-mail: " << p.email << "\nHas free seats: " << seats << std::endl;
}
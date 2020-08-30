#pragma once
#include <iostream>
#include <string>
#include "Car.h"
/* This is the person class. Each person has a name and email. 
A person could also have a car.
Therefore, the class has a private member-variable car,
which is points to Car. 
A pointer is used instead of a reference because a pointer could
have the value nullptr (doesnt point to anything), which can be used if 
a person does not have a car.
If I would have used reference instead, this would be difficult to represent. 

The class consists of a constructor which sets
name, email and car to values given by the parameterlist.
For car, I use nullptr as the default argument. 
This means that I can use the constructor with only the two first parameters.



*/


class Person {
private:
	std::string name;
	std::string email; //name and email is string
	Car *car; //pointer to a car
public:
	Person(std::string name, std::string email, Car *car = nullptr);
	Person();
	std::string getName() const; //const because function should not change the name
	std::string getEmail() const; //const because function should not change the email
	void setEmail(); //function that sets email.
	bool hasAvalibaleSeats() const; //const because function should not change the value of seats
	void setPersonInformation();

	friend std::ostream& operator << (std::ostream& os, const Person& p);
};
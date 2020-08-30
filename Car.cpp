#include "Car.h"

bool Car::hasFreeSeats() const {
	if (freeSeats > 0)
		return true; //returns true if the car has empty seats
	return false;
}

void Car::reserveFreeSeat() { //this function is not marked as const because it changes the variable
	--freeSeats; //decrements freeSeats by one
}

Car::Car(unsigned int freeSeats) : //initializing the object
	freeSeats{ freeSeats }        //sets private variable to freeSeats
{
}


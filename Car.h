#pragma once
#include <iostream>

/*Car is a class. The private member-variable freeSeats indicates 
how many free seats are in the car. Car also has two public member-functions. These are called 
hasFreeSeat and reserveFreeSeat. hasFreeSeat should return true if the car has free seats,
and false otherwise. reserveFreeSeat should reserve a empty seat by decrementing the freeSeat variable.*/

/*Kommentar om const correctness. Det er god praksis å 
markere medlemsfunksjoner som ikke endrer objektet med connst.
Funksjonen får ikke lov å endre på objectet*/

/*The class has a constructor Car which takes in how many free seats the car has */


class Car {
private:
	unsigned int freeSeats; //unsigned because cannot be negative
public:
	bool hasFreeSeats() const; //the function should not be allowed to change the object
	void reserveFreeSeat();
	Car( unsigned int freeSeats);
	
};
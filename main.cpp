#include "Car.h"
#include "Person.h"
#include "meeting.h"

int main() {
	Car ferrari{ 2 };
	Car bugatti{ 3 };
	Car jeep{0};


	Person one{ "Aleksander","aleks@aleks.com", &ferrari };
	Person two{ "Sara","sara@sara.com", &bugatti };
	Person three{ "Daniel", "daniel@daniel.com", &jeep };
	Person four{ "Chris", "chris@chris.com" };

	std::cout << one << std::endl;
	std::cout << two << std::endl;
	std::cout << three << std::endl;
	std::cout << four << std::endl;
	
	Meeting m1;
	m1.getMeetingInfo();
	std::cout << m1;
	

	

	system("pause");
	return 0;
}
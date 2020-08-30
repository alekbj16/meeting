#include "meeting.h"

int Meeting::getDay() const {
	return day;
}

int Meeting::getStartTime() const {
	return startTime;
}

int Meeting::getEndTime() const {
	return endTime;
}

std::string Meeting::getLocation() const {
	return location;
}

std::string Meeting::getSubject() const {
	return subject;
}

Meeting::Meeting(int day, int startTime, int endTime, std::string location, std::string subject) : 
	day{ day }, startTime{ startTime }, endTime{ endTime }, location{ location }, subject{ subject }
{
}

Meeting::Meeting() :
	day{}, startTime{}, endTime{}, location{}, subject{}
{
}

void Meeting::getParticipantInfo() {
	int howMany;
	std::cout << "How many people are coming to the meeting? ";
	std::cin >> howMany;
	for (int i = 0; i < howMany; i++) {

	}
}

void Meeting::getMeetingInfo() {
	int whatDay, whatTime, whenDone;
	std::string place, aboutWhat;
	
	std::cout << "At what day is the meeting? [DDMMYYYY] ";
	std::cin >> whatDay;
	day = whatDay;
	std::cout << "What time will it start? [HHMM] ";
	std::cin >> whatTime;
	startTime = whatTime;
	std::cout << "What time will it end? [HHMM] ";
	std::cin >> whenDone;
	endTime = whenDone;
	std::cout << "At what location will the meeting be held? ";
	std::cin >> place;
	location = place;
	std::cout << "What is the subject? ";
	std::cin >> aboutWhat;
	subject = aboutWhat;
}

std::ostream& operator<<(std::ostream& os, const Meeting& m) {
	os << "Subject:\t" << m.getSubject() << std::endl;
	os << "Location:\t" << m.getLocation() << std::endl;
	os << "Start time:\t" << m.getStartTime() << std::endl;
	os << "End time:\t" << m.getEndTime() << std::endl;
	return os;
}
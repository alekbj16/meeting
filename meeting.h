#pragma once
#include "Person.h"
#include "Car.h"
#include <vector>
#include <set>

class Meeting {
private:
	int day;
	int startTime;
	int endTime;
	std::string location;
	std::string subject;

public:
	int getDay() const;
	int getStartTime() const;
	int getEndTime() const;
	std::string getLocation() const;
	std::string getSubject() const;
	Meeting(int day, int startTime, int endTime, std::string location, std::string subject);
	Meeting();
	//std::vector<std::string> getParticipantsList() const;
	void getParticipantInfo();
	void getMeetingInfo();

};

std::ostream& operator<<(std::ostream& os, const Meeting& m);
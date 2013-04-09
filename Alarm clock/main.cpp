#include <iostream>
#include <ctime>
#include <conio.h>

#include <cassert>

#include "eventmanager.h"

Event inputEvent();

int main(int, char **)
{
	time_t time;

	std::time(&time);
	struct tm *current_time;

	current_time = localtime(&time);

	char time_string[17];
	strftime(time_string, 17, "%Y-%m-%d %H:%M", current_time);
	std::cout << "Current time: " << time_string << std::endl;

	EventManager events;

	events.add(inputEvent());
	
	while (true)
	{
		if(kbhit())
			events.add(inputEvent());

		std::vector<Event> overdue = events.getOverDue();

		if (!overdue.empty())
		{
			for(Event event : overdue)
				std::cout << event.getMessage() << std::endl;

			break;
		}
	}

	return 0;
}

Event inputEvent()
{
	std::cout << "Event start (YYYY-MM-DD HH:MM): ";
	std::string alarm_time;
	std::getline(std::cin, alarm_time);

	time_t time = std::time(nullptr);
	tm alarm = *localtime(&time);
	int year, month, day, hour, minute;
	sscanf(alarm_time.c_str(), "%d-%d-%d %d:%d", &year, &month, &day, &hour, &minute);

	alarm.tm_year = year - 1900;
	alarm.tm_mon = month - 1;
	alarm.tm_mday = day;
	alarm.tm_hour = hour;
	alarm.tm_min = minute;
	alarm.tm_isdst = -1;

	std::cout << "Message: ";
	std::string message;
	std::getline(std::cin, message);

	Event event(mktime(&alarm), message);
	
	return event;
}

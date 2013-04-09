#include "eventmanager.h"

#include <ctime>

EventManager::EventManager()
{
}

EventManager::~EventManager()
{
}

void EventManager::add(const Event &event)
{
	events_.push_back(event);
}

std::vector<Event> EventManager::getOverDue(const time_t time) const
{
	std::vector<Event> overdue;
	for(Event event : events_)
	{
		if (time > event.getTime())
			overdue.push_back(event);
	}

	return overdue;
}

std::vector<Event> EventManager::getOverDue() const
{
	return getOverDue(time(nullptr));
}
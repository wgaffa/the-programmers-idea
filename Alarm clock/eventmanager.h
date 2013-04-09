#ifndef __EVENTMANAGER_H__
#define __EVENTMANAGER_H__

#include <vector>

#include "event.h"

class EventManager
{
public:
	EventManager();
	~EventManager();

	void add(const Event&);
	std::vector<Event> getOverDue(const time_t) const;
	std::vector<Event> getOverDue() const;
private:
	std::vector<Event> events_;
};

#endif
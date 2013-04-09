#include "event.h"

Event::Event(const time_t time, const std::string message)
	: time_(time), message_(message)
{
}

Event::~Event()
{
}

time_t Event::getTime()
{
	return time_;
}

std::string Event::getMessage()
{
	return message_;
}
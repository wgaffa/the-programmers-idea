#include "event.h"

Event::Event(const time_t time, const std::string message)
	: time_(time), message_(message)
{
}

Event::~Event()
{
}

time_t Event::get_time()
{
	return time_;
}

std::string Event::get_message()
{
	return message_;
}
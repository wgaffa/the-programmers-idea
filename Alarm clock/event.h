#include <ctime>
#include <string>

class Event
{
public:
	Event(const time_t, const std::string);
	~Event();

	time_t		getTime();
	std::string getMessage();

private:
	time_t		time_;
	std::string message_;
};
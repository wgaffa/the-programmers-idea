#include <ctime>
#include <string>

class Event
{
public:
	Event(const time_t, const std::string);
	~Event();

	time_t		get_time();
	std::string get_message();

private:
	time_t		time_;
	std::string message_;
};
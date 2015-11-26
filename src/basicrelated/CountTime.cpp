#include "CountTime.h"

TimeCount::TimeCount()
{
	SetUp();
}

void TimeCount::SetUp()
{
	time_count = 0;
}

bool TimeCount::timeCounter(float time)
{
	float need_count = time * 60;
		
	time_count += 1;

	if (time_count > need_count){
		return true;
	}
	return false;
}
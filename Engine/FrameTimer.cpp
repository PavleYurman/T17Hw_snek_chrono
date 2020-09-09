#include "FrameTimer.h"


// implemeented freme timer
FrameTimer::FrameTimer()
{
	last = std::chrono::steady_clock::now();
}

float FrameTimer::Mark()
{
	std::chrono::steady_clock::time_point old;
	old = last;
	last = std::chrono::steady_clock::now();
	std::chrono::duration<float> time_passed = last - old;
	return time_passed.count();
}
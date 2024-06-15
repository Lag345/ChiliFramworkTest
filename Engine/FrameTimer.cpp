#include "FrameTimer.h"

FrameTimer::FrameTimer()
{
	Last = std::chrono::steady_clock::now();
}

const float FrameTimer::GetGameLogicTick() const
{
	const float TimeInSeconds = Tick.count() ;  //Tick count is in miliseconds.
	return TimeInSeconds;
}

void FrameTimer::Ticker()
{
	Now = std::chrono::steady_clock::now();
	Tick = Now - Last;
	Last = Now;
}

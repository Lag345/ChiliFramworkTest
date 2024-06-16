#include "FrameTimer.h"

FrameTimer::FrameTimer()
{
	Last = std::chrono::steady_clock::now();
}

float FrameTimer::GetGameLogicTick() const
{
	float TimeInSeconds = Tick.count();
	return TimeInSeconds;
}

void FrameTimer::Ticker()
{
	Now = std::chrono::steady_clock::now();
	Tick = Now - Last;
	Last = Now;
}

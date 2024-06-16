#pragma once
#include <chrono>
class FrameTimer
{
public:
	FrameTimer();
	float GetGameLogicTick() const;
	void Ticker();
private:
	std::chrono::steady_clock::time_point Last;
	std::chrono::steady_clock::time_point Now;
	std::chrono::duration<float> Tick;
};
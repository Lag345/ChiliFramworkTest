/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	Box(50,50,50,50)
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	FrameTimer.Ticker();
	if (!(wnd.mouse.GetPosX() <= 0 || wnd.mouse.GetPosX() >= gfx.ScreenWidth - (1 + 50)))
	{	
		if (!(wnd.mouse.GetPosY() <= 0 || wnd.mouse.GetPosY() >= gfx.ScreenHeight - (1 + 50)))
		{
			int x = wnd.mouse.GetPosX();
			int y = wnd.mouse.GetPosY();
			Mouse = { float(x),float(y) };
		}
	}
	Box.GetTarget(Mouse);
	float Tick = FrameTimer.GetGameLogicTick();
	Box.UpdateLocation(Tick);
}

void Game::ComposeFrame()
{
	gfx.DrawRectangle(Box.Location.GetX(), Box.Location.GetY(), 50, 50, {255,255,255});
	gfx.DrawRectangle(Box.Location.GetX()+10, Box.Location.GetY()+10, 50-20, 50-20, { 75,0,255 });
}

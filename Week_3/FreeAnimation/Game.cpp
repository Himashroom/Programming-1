#include "pch.h"
#include "Game.h"
#include<iostream>

//Basic game functions
#pragma region gameFunctions											
void Start()
{
	// initialize game resources here
	
}

void Draw()
{
	ClearBackground(251 / 255.f, 227 / 255.f, 3 / 255.f);
	

	// Put your own draw statements here
	//DrawFreakyAnim();
	
	DrawBars();
	
	
	 	
	//DrawBuoy();
	
	/*DrawSine();	
	SetColor(251 / 255.f, 227 / 255.f, 3 / 255.f);
	FillRect(210.f, 200 + 40 * sinf(210 * float(M_PI) / 180) - 80, 100.f, 95.f);
	if (g_FirstWaveIsMoving) DrawFirstWave();
	if (g_SecondWaveIsMoving) DrawSecondWave();
	SetColor(251 / 255.f, 227 / 255.f, 3 / 255.f);
	FillRect(180 - 2 * g_WaveWidth, g_FirstWaveStartPos.y - g_WaveHeight - 2, -(180 - 2 * g_WaveWidth), g_WaveHeight + 3);
	FillRect(g_EndBound, g_FirstWaveStartPos.y - g_WaveHeight - 2, g_WindowWidth - g_EndBound, g_WaveHeight + 3);*/
	
	
	
	/*DrawFirstBoatWave();
	DrawSecondBoatWave();*/

}

void Update(float elapsedSec)
{
	// process input, do physics 

	// e.g. Check keyboard state
	//const Uint8 *pStates = SDL_GetKeyboardState( nullptr );
	//if ( pStates[SDL_SCANCODE_RIGHT] )
	//{
	//	std::cout << "Right arrow key is down\n";
	//}
	//if ( pStates[SDL_SCANCODE_LEFT] && pStates[SDL_SCANCODE_UP])
	//{
	//	std::cout << "Left and up arrow keys are down\n";
	//}
	
	
	//std::cout << g_WaveEndPos.x << std::endl;

	//Endless Moving Rectangle Going Left
	
	//UpdateBarsPosition(elapsedSec);
	/*if (g_FirstRectIsMoving) { g_FirstRecStartPos.x -= g_WaveSpeed * elapsedSec; }

	if (g_FirstRecStartPos.x < 0) { g_SecondRectIsVisible = true; }
	if (g_SecondRectIsVisible) { g_SecondRectXPos -= g_WaveSpeed * elapsedSec; }
	if (g_FirstRecStartPos.x + g_RectWidth < 0)
	{
		g_FirstRecStartPos.x = g_WindowWidth;
		g_FirstRectIsMoving = false;
	}

	if (g_SecondRectXPos < 0) { g_FirstRectIsMoving = true; }

	if (g_SecondRectXPos + g_RectWidth < 0)
	{
		g_SecondRectIsVisible = false;
		g_SecondRectXPos = g_WindowWidth;

	}
	std::cout << g_FirstRecStartPos.x << "  " << g_SecondRectXPos << std::endl;*/

	if (!g_FirstRectWaiting) {
		g_FirstRecStartPos.x -= g_WaveSpeed * elapsedSec;
	}

	// If part of the first rectangle is off-screen, make the second rectangle visible
	if (g_FirstRecStartPos.x + g_RectWidth < g_WindowWidth && !g_SecondRectVisible) {
		g_SecondRectVisible = true;
		g_SecondRectXPos = g_WindowWidth; // Place the second rectangle at the right edge
		g_FirstRectWaiting = true; // Mark that the first rectangle is waiting for the second
	}

	// Move the second rectangle if it is visible
	if (g_SecondRectVisible) {
		g_SecondRectXPos -= g_WaveSpeed * elapsedSec;
	}

	// If the first rectangle has fully exited the left side, it should now wait
	if (g_FirstRecStartPos.x + g_RectWidth < 0 && g_FirstRectWaiting) {
		g_FirstRecStartPos.x = g_WindowWidth; // Reset the first rectangle to the right
		g_FirstRectWaiting = true;       // Ensure the first rectangle stays at the right until the second one is done
	}

	// If the second rectangle has fully exited the left side, reset its position and make the first rectangle move again
	if (g_SecondRectXPos + g_RectWidth < 0) {
		g_SecondRectVisible = false; // Hide the second rectangle
		g_FirstRectWaiting = false;  // Allow the first rectangle to move again
	}
	

	/*++g_NrFrames;
	g_NrFrames %= 361;
	g_BuoyOffset = 4 * sinf(g_NrFrames * static_cast<float>(M_PI) / 180);

	g_FirstWaveEndPos = Point2f{ g_FirstWaveStartPos.x + (2 * g_Wavesize - 1) * g_WaveWidth, g_FirstWaveStartPos.y };
	g_SecondWaveEndXPos = g_SecondWaveStartXPos + (2 * g_Wavesize - 1) * g_WaveWidth;
	
	if(g_FirstWaveIsMoving){ g_FirstWaveStartPos.x -= g_WaveSpeed * elapsedSec; }

	if (g_FirstWaveStartPos.x - g_WaveWidth <= g_StartBound) {	g_SecondWaveIsMoving = true;	}
	if(g_SecondWaveIsMoving){ g_SecondWaveStartXPos -= g_WaveSpeed * elapsedSec; }
	if (g_FirstWaveEndPos.x <= g_StartBound)
	{
		g_FirstWaveIsMoving = false;
		g_FirstWaveStartPos.x = g_EndBound + g_WaveWidth ;
	}

	if (g_SecondWaveStartXPos - g_WaveWidth <= g_StartBound){ g_FirstWaveIsMoving = true;}

	if (g_SecondWaveEndXPos <= g_StartBound)
	{
		g_SecondWaveIsMoving = false;
		g_SecondWaveStartXPos = g_EndBound + g_WaveWidth;
	}	

	g_SineAngle += g_BoatRockSpeed * elapsedSec;*/


}

void End()
{
	// free game resources here
}
#pragma endregion gameFunctions

//Keyboard and mouse input handling
#pragma region inputHandling											
void OnKeyDownEvent(SDL_Keycode key)
{

}

void OnKeyUpEvent(SDL_Keycode key)
{
	//switch (key)
	//{
	//case SDLK_LEFT:
	//	//std::cout << "Left arrow key released\n";
	//	break;
	//case SDLK_RIGHT:
	//	//std::cout << "Right arrow key released\n";
	//	break;
	//case SDLK_1:
	//case SDLK_KP_1:
	//	//std::cout << "Key 1 released\n";
	//	break;
	//}
}

void OnMouseMotionEvent(const SDL_MouseMotionEvent& e)
{
	//std::cout << "  [" << e.x << ", " << e.y << "]\n";
	//Point2f mousePos{ float( e.x ), float( g_WindowHeight - e.y ) };
}

void OnMouseDownEvent(const SDL_MouseButtonEvent& e)
{

}

void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{
	////std::cout << "  [" << e.x << ", " << e.y << "]\n";
	//switch (e.button)
	//{
	//case SDL_BUTTON_LEFT:
	//{
	//	//std::cout << "Left mouse button released\n";
	//	//Point2f mousePos{ float( e.x ), float( g_WindowHeight - e.y ) };
	//	break;
	//}
	//case SDL_BUTTON_RIGHT:
	//	//std::cout << "Right mouse button released\n";
	//	break;
	//case SDL_BUTTON_MIDDLE:
	//	//std::cout << "Middle mouse button released\n";
	//	break;
	//}
}
#pragma endregion inputHandling

#pragma region ownDefinitions
// Define your own functions here

void DrawFirstWave()
{
	
	//std::cout << "First Wave Start X Pos: " << g_FirstWaveStartPos.x << " First Wave End X Pos: " << g_FirstWaveEndPos.x << std::endl;
	SetColor(0.f, 0.f, 0);
	for(int i{}; i<g_Wavesize; ++i){ DrawArc(g_FirstWaveStartPos.x + 2 * i * g_WaveWidth, g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth); }
	
	/*	
	DrawArc(g_FirstWaveStartPos.x , g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);
	DrawArc(g_FirstWaveStartPos.x + 2 * g_WaveWidth , g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);
	DrawArc(g_FirstWaveStartPos.x + 4 * g_WaveWidth , g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);
	DrawArc(g_FirstWaveStartPos.x + 6 * g_WaveWidth , g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);*/
	//DrawArc(g_FirstWaveStartPos.x + 8 * g_WaveWidth, g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);
	//DrawArc(g_FirstWaveStartPos.x + 10 * g_WaveWidth, g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);

}

void DrawSecondWave()
{
	
	//std::cout << "Second Wave Start X Pos: " << g_SecondWaveStartXPos << " Second Wave End X Pos: " << g_SecondWaveEndXPos << std::endl;
	SetColor(0.f, 0.f, 0);
	for (int i{}; i < g_Wavesize; ++i){ DrawArc(g_SecondWaveStartXPos + 2 * i * g_WaveWidth, g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth); }
	
	
	/*DrawArc(g_SecondWaveStartXPos, g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);
	DrawArc(g_SecondWaveStartXPos + 2 * g_WaveWidth, g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);
	DrawArc(g_SecondWaveStartXPos + 4 * g_WaveWidth, g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);
	DrawArc(g_SecondWaveStartXPos + 6 * g_WaveWidth, g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);*/
	//DrawArc(g_SecondWaveStartXPos + 8 * g_WaveWidth, g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);
	//DrawArc(g_SecondWaveStartXPos + 10 * g_WaveWidth, g_FirstWaveStartPos.y, g_WaveWidth, g_WaveHeight, -static_cast<float>(M_PI), 0, g_LineWidth);
}

void DrawBuoy()
{
	SetColor(0.f, 0.f, 0);
	DrawArc(g_BuoyPivot.x, g_BuoyPivot.y + g_BuoyOffset, g_BuoyWidth / 2.f, g_BuoyHeight, -static_cast<float>(M_PI), 0, g_LineWidth);
	DrawLine(g_BuoyStartPoint.x, g_BuoyStartPoint.y + g_BuoyOffset, g_BuoyEndPoint.x, g_BuoyEndPoint.y + g_BuoyOffset, g_LineWidth);
}

void DrawSine()
{
	SetColor(0.f, 0.f, 0.f);
	SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS, 1);  
	SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, 4);
	glEnable(GL_MULTISAMPLE);

	glBegin(GL_LINE_STRIP);
	
	{
		for (int i{180}; i <= 360; ++i)
		{
			g_BoatVertex.x = float(i);
			g_BoatVertex.y = 200 + 40 * sinf(g_BoatVertex.x  *  float(M_PI) / 180);
			if (180 <= i && i <= 265)
			{
				//glVertex2f(g_BoatVertex.x, g_BoatVertex.y + 10 *sinf(g_SineAngle));
				g_BoatVertex.y = 200 + 40 * sinf(g_BoatVertex.x * float(M_PI) / 180) + 10 * sinf(g_SineAngle);
				SetColor(1.f, 1.f, 1.f);
				DrawLine(static_cast<float>(i), g_BoatVertex.y + 2, 270, 200 + 40 * sinf(270 * float(M_PI) / 180) + 10 * sinf(g_SineAngle) + 2);
			}
			else //glVertex2f(g_BoatVertex.x, g_BoatVertex.y - 10 * sinf(g_SineAngle));
				g_BoatVertex.y = 200 + 40 * sinf(g_BoatVertex.x * float(M_PI) / 180) - 20 * sinf(g_SineAngle);

			
			SetColor(0.f, 0.f, 0.f);
			glVertex2f(g_BoatVertex.x, g_BoatVertex.y);
			
			//DrawLine(180.f, 200 + 40 * sinf(180.f * float(M_PI) / 180) + 10 * sinf(g_SineAngle), 360.f, 200 + 40 * sinf(360 * float(M_PI) / 180) - 10 * sinf(g_SineAngle));
			
			
			
		}
	}glEnd();
	DrawLine(180.f, 200 + 40 * sinf(180.f * float(M_PI) / 180) + 10 * sinf(g_SineAngle), 360.f, 200 + 40 * sinf(360 * float(M_PI) / 180) - 20 * sinf(g_SineAngle), 2.f);

	
	
	
	//Render Triangle
	//glBegin(GL_TRIANGLES);      // Start defining a triangle
	//glVertex2f(g_Center.x - 20, g_Center.y);     // First vertex (X, Y)
	//glVertex2f(g_Center.x + 20, g_Center.y);     // Second vertex (X, Y)
	//glVertex2f(g_Center.x, g_Center.y + 20);     // Third vertex (X, Y)
	//glEnd();
	
}

void RockBoat()
{
	for (int i{ 180 }; i <= 270; ++i)
	{
		g_BoatVertex.x = float(i);
		g_BoatVertex.y += 5;
		
	}
}

//void UpdateBarsPosition(float deltaTime)
//
//{
//	g_FirstRecStartPos.x = float(int(g_FirstRecStartPos.x - g_WaveSpeed * deltaTime + g_WindowWidth) % int(g_WindowWidth));
//	std::cout << g_FirstRecStartPos.x << std::endl;
//
//	if (g_FirstRecStartPos.x < 0)
//	{
//		float partOutside = -g_FirstRecStartPos.x;
//		g_SecondRectXPos = g_WindowWidth - partOutside;
//	}
//	else g_SecondRectXPos = g_WindowWidth;
//	if (g_SecondRectXPos < g_WindowWidth)
//	{
//		g_SecondRectXPos = float(int(g_SecondRectXPos - g_WaveSpeed * deltaTime + g_WindowWidth) % int(g_WindowWidth));
//	}
//}


void DrawBars()
{
	FillRect(g_FirstRecStartPos.x, g_FirstRecStartPos.y, g_RectWidth, g_RectHeight);
	if (g_SecondRectVisible) { FillRect(g_SecondRectXPos, g_FirstRecStartPos.y, g_RectWidth, g_RectHeight); }
}

//void DrawFreakyAnim()
//{
//	SetColor(0.f, 0.f, 0);
//	DrawArc(g_Center.x, g_Center.y - g_Offset, 20.f, 35.f, -static_cast<float>(M_PI), 0);
//	DrawArc(g_Center.x + 40.f, g_Center.y - g_Offset, 20.f, 35.f, -static_cast<float>(M_PI), 0);
//	DrawArc(g_Center.x + 20.f, g_Center.y - 62, 10.f, 42.f, 0, static_cast<float>(M_PI));
//	DrawArc(g_Center.x + 20.f, g_Center.y - 24, 6.f, 10.f, -static_cast<float>(M_PI), 0);
//}
#pragma endregion ownDefinitions
#include "pch.h"
#include "Game.h"
#include <iostream>

//Basic game functions
#pragma region gameFunctions											
void Start()
{
	// initialize game resources here
}

void Draw()
{
	ClearBackground(185 / 255.f, 211 / 255.f, 238 / 255.f);
	DrawGreenSquare();
	DrawBlueSquare();
	DrawRedSquare();
	DrawYellowSquare();

	// Put your own draw statements here

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
	++g_NrFrames;
	g_NrFrames %= (int(g_WindowWidth) + 1);
	//std::cout << g_NrFrames <<" ";
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
void DrawGreenSquare()
{
	SetColor(76.f / 255, 237.f / 255, 98.f / 255, 0.87f);
	//std::cout << (g_NrFrames - g_SquareSize) << std::endl;
	FillRect(g_NrFrames - g_SquareSize, g_WindowHeight - g_NrFrames, g_SquareSize, g_SquareSize);
	SetColor(0.f, 0.f, 0.f);
	DrawRect(g_NrFrames - g_SquareSize, g_WindowHeight - g_NrFrames, g_SquareSize, g_SquareSize);
	//std::cout << (g_NrFrames - g_SquareSize) << std::endl;
}

void DrawBlueSquare()
{
	SetColor(76.f / 255, 87.f / 255, 248.f / 255, 0.87f);
	FillRect(g_WindowWidth - g_NrFrames, g_WindowHeight - g_NrFrames, g_SquareSize, g_SquareSize);
	SetColor(0.f, 0.f, 0.f);
	DrawRect(g_WindowWidth - g_NrFrames, g_WindowHeight - g_NrFrames, g_SquareSize, g_SquareSize);
}
void DrawRedSquare()
{
	SetColor(226.f / 255, 87.f / 255, 98.f / 255, 0.87f);
	FillRect(g_NrFrames - g_SquareSize, g_NrFrames - g_SquareSize, g_SquareSize, g_SquareSize);
	SetColor(0.f, 0.f, 0.f);
	DrawRect(g_NrFrames - g_SquareSize, g_NrFrames - g_SquareSize, g_SquareSize, g_SquareSize);
}
void DrawYellowSquare()
{
	SetColor(226.f / 255, 237.f / 255, 98.f / 255, 0.87f);
	FillRect(g_WindowWidth - g_NrFrames, g_NrFrames -g_SquareSize, g_SquareSize, g_SquareSize);
	SetColor(0.f, 0.f, 0.f);
	DrawRect(g_WindowWidth - g_NrFrames, g_NrFrames - g_SquareSize, g_SquareSize, g_SquareSize);
}
#pragma endregion ownDefinitions
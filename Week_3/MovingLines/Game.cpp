#include "pch.h"
#include "Game.h"

//Basic game functions
#pragma region gameFunctions											
void Start()
{
	// initialize game resources here
}

void Draw()
{
	ClearBackground(100 / 255.f, 100 / 255.f, 170 / 255.f);

	// Put your own draw statements here
	SetColor(1.0f, 1.0f, 1.0f);
	DrawHorizontalLines();
	DrawVerticalLines();
	DrawDiagonalLines();

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
	g_NrFrames = g_NrFrames % int(g_WindowHeight);  //Window width and height are same
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
void DrawHorizontalLines()
{
	
	DrawLine(0.f, g_WindowHeight - g_NrFrames, g_WindowWidth, g_WindowHeight - g_NrFrames);
	DrawLine(0.f, float (g_NrFrames), g_WindowWidth, float(g_NrFrames));

}

void DrawVerticalLines()
{
	DrawLine(float(g_NrFrames), g_WindowHeight, float(g_NrFrames), 0.f);
	DrawLine(g_WindowWidth - g_NrFrames, g_WindowHeight, g_WindowWidth - g_NrFrames, 0.f);

}

void DrawDiagonalLines()
{
	SetColor(229.f / 255, 229.f / 255, 29.f / 255);

	DrawLine(0.f, g_WindowHeight - g_NrFrames, g_WindowWidth - g_NrFrames, g_WindowHeight);
	DrawLine(0.f, g_WindowHeight - g_NrFrames, float(g_NrFrames),0.f);
	DrawLine(float(g_NrFrames),0.f, g_WindowWidth, float(g_NrFrames));
	DrawLine(g_WindowWidth, float(g_NrFrames), g_WindowWidth - g_NrFrames, g_WindowHeight);

}
#pragma endregion ownDefinitions
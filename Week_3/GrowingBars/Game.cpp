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
	ClearBackground(0.f, 0.f, 0.f);
	DrawYellowBar();
	DrawRedBar();

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
	g_YellowBarWidth ={ static_cast<float>(g_NrFrames % (static_cast<int>(g_RectangleWidth) + 1)) };
	g_RedBarWidth = float(int(g_RedBarWidth) % (int(g_RectangleWidth)));
	g_RedBarWidth +=  float((g_NrFrames % 31) / 30 * 15);	
	
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
void DrawYellowBar() 
{
	SetColor(200.f/ 255, 200.f / 255, 0);	
	//std::cout << g_YellowBarWidth << std::endl;
	FillRect(g_YellowBarBase, g_YellowBarWidth, g_RectangleHeight);
	SetColor(1.f, 1.f, 1.f);
	DrawRect(g_YellowBarBase, g_RectangleWidth, g_RectangleHeight, 2.5f);	

}

void DrawRedBar()
{
	g_Red = Color4f{ (120.f + g_RedBarWidth / g_RectangleWidth * 135) / 255, 0, 0, 1 };
	//std::cout << g_Red.r << std::endl;
	SetColor(g_Red);
	//SetColor((120.f + g_RedBarWidth/g_RectangleWidth * 130 ) / 255, 0, 0);	
	FillRect(g_RedBarBase, g_RedBarWidth, g_RectangleHeight);
	//std::cout << g_RedBarWidth << std::endl;
	SetColor(1.f, 1.f, 1.f);
	DrawRect(g_RedBarBase, g_RectangleWidth, g_RectangleHeight, 2.5f);
}
#pragma endregion ownDefinitions
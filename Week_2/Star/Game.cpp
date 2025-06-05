#include "pch.h"
#include "Game.h"
#include <chrono>
#include<iostream>

std::chrono::steady_clock::time_point g_InitTime;
std::chrono::steady_clock::time_point g_DrawTime;
float g_RunTime{};

//Basic game functions
#pragma region gameFunctions											
void Start()
{
	// initialize game resources here
	InitialiseStar();
	
}

void Draw()
{
	ClearBackground();
	DrawStar();

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
void InitialiseStar()
{
	g_OP1 = Point2f{ g_Center.x + g_OuterRadius * cosf(g_OuterAngle), g_Center.y + g_OuterRadius * sinf(g_OuterAngle) };
	g_OuterAngle += float(M_PI / 2.f);
	g_OP2 = Point2f{ g_Center.x + g_OuterRadius * cosf(g_OuterAngle), g_Center.y + g_OuterRadius * sinf(g_OuterAngle) };
	g_OuterAngle += float(M_PI / 2.f);
	g_OP3 = Point2f{ g_Center.x + g_OuterRadius * cosf(g_OuterAngle), g_Center.y + g_OuterRadius * sinf(g_OuterAngle) };
	g_OuterAngle += float(M_PI / 2.f);
	g_OP4 = Point2f{ g_Center.x + g_OuterRadius * cosf(g_OuterAngle), g_Center.y + g_OuterRadius * sinf(g_OuterAngle) };
	g_OuterAngle += float(M_PI / 2.f);

	g_MP1 = Point2f{ g_Center.x + (2 / 3.f * g_OuterRadius) * cosf(g_MiddleAngle), g_Center.y + (2 / 3.f * g_OuterRadius) * sinf(g_MiddleAngle) };
	g_MiddleAngle += float(M_PI / 2.f);
	g_MP2 = Point2f{ g_Center.x + (2 / 3.f * g_OuterRadius) * cosf(g_MiddleAngle), g_Center.y + (2 / 3.f * g_OuterRadius) * sinf(g_MiddleAngle) };
	g_MiddleAngle += float(M_PI / 2.f);
	g_MP3 = Point2f{ g_Center.x + (2 / 3.f * g_OuterRadius) * cosf(g_MiddleAngle), g_Center.y + (2 / 3.f * g_OuterRadius) * sinf(g_MiddleAngle) };
	g_MiddleAngle += float(M_PI / 2.f);
	g_MP4 = Point2f{ g_Center.x + (2 / 3.f * g_OuterRadius) * cosf(g_MiddleAngle), g_Center.y + (2 / 3.f * g_OuterRadius) * sinf(g_MiddleAngle) };
	g_MiddleAngle += float(M_PI / 2.f);

	g_I2P1 = Point2f{ g_Center.x + (g_OuterRadius / 3.f) * cosf(g_InnerAngle2), g_Center.y + (g_OuterRadius / 3.f) * sinf(g_InnerAngle2) };
	g_InnerAngle2 += float(M_PI / 2.f);
	g_I2P2 = Point2f{ g_Center.x + (g_OuterRadius / 3.f) * cosf(g_InnerAngle2), g_Center.y + (g_OuterRadius / 3.f) * sinf(g_InnerAngle2) };
	g_InnerAngle2 += float(M_PI / 2.f);
	g_I2P3 = Point2f{ g_Center.x + (g_OuterRadius / 3.f) * cosf(g_InnerAngle2), g_Center.y + (g_OuterRadius / 3.f) * sinf(g_InnerAngle2) };
	g_InnerAngle2 += float(M_PI / 2.f);
	g_I2P4 = Point2f{ g_Center.x + (g_OuterRadius / 3.f) * cosf(g_InnerAngle2), g_Center.y + (g_OuterRadius / 3.f) * sinf(g_InnerAngle2) };
	g_InnerAngle2 += float(M_PI / 2.f);

	g_I1P1 = Point2f{ g_Center.x + (g_OuterRadius / 3.f) * cosf(g_InnerAngle1), g_Center.y + (g_OuterRadius / 3.f) * sinf(g_InnerAngle1) };
	g_InnerAngle1 += float(M_PI / 2.f);
	g_I1P2 = Point2f{ g_Center.x + (g_OuterRadius / 3.f) * cosf(g_InnerAngle1), g_Center.y + (g_OuterRadius / 3.f) * sinf(g_InnerAngle1) };
	g_InnerAngle1 += float(M_PI / 2.f);
	g_I1P3 = Point2f{ g_Center.x + (g_OuterRadius / 3.f) * cosf(g_InnerAngle1), g_Center.y + (g_OuterRadius / 3.f) * sinf(g_InnerAngle1) };
	g_InnerAngle1 += float(M_PI / 2.f);
	g_I1P4 = Point2f{ g_Center.x + (g_OuterRadius / 3.f) * cosf(g_InnerAngle1), g_Center.y + (g_OuterRadius / 3.f) * sinf(g_InnerAngle1) };
	g_InnerAngle1 += float(M_PI / 2.f);
}

void DrawStar()
{
	//g_InitTime = std::chrono::steady_clock::now();
	
	

	SetColor(1.0f, 0.0f, 0.0f);
	DrawLine(g_OP1, g_I2P1);
	DrawLine(g_OP1, g_I1P4);
	DrawLine(g_OP2, g_I1P1);
	DrawLine(g_OP2, g_I2P2);
	DrawLine(g_OP3, g_I2P3);
	DrawLine(g_OP3, g_I1P2);
	DrawLine(g_OP4, g_I2P4);
	DrawLine(g_OP4, g_I1P3);
	DrawLine(g_MP1, g_I2P1);
	DrawLine(g_MP1, g_I1P1);
	DrawLine(g_MP2, g_I2P2);
	DrawLine(g_MP2, g_I1P2);
	DrawLine(g_MP3, g_I2P3);
	DrawLine(g_MP3, g_I1P3);
	DrawLine(g_MP4, g_I2P4);
	DrawLine(g_MP4, g_I1P4);
	
	/*g_DrawTime = std::chrono::steady_clock::now();

	g_RunTime = std::chrono::duration<float>(g_DrawTime - g_InitTime).count();

	std::cout << "Running time is: " << g_RunTime << std::endl;*/

}
#pragma endregion ownDefinitions
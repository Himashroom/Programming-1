#include "pch.h"
#include "Game.h"
#include <iostream>

//Basic game functions
#pragma region gameFunctions											
void Start()
{
	// initialize game resources here
	std::cout << "% people playing games\n";
	std::cout << "In the range [0, 20]? ";
	std::cin >> g_Range1;
	std::cout << "In the range [21, 40]? ";
	std::cin >> g_Range2;
	std::cout << "In the range [41, 60]? ";
	std::cin >> g_Range3;
	std::cout << "Older than 60 ? ";
	std::cin >> g_Range4;
}

void Draw()
{
	ClearBackground(50.f/ 255.f, 20.f / 255.f, 50.f / 255.f);

	// Put your own draw statements here
	DrawFlag();
	DrawCheckerPattern();
	DrawColourBand();
	DrawPentagram();
	DrawColumnChart();
	DrawHouse();
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
void DrawFlag()
{
	g_StartPos.x = g_Border;
	g_StartPos.y = g_Border + g_DrawingHeight + g_Gap;

	SetColor(0,0,0);
	FillRect(g_StartPos, g_DrawingWidth / 3.f, g_DrawingHeight);
	SetColor(255.f, 255.f, 0);
	FillRect(g_StartPos.x + (g_DrawingWidth / 3.f),g_StartPos.y, g_DrawingWidth / 3.f, g_DrawingHeight);
	SetColor(1.f, 0, 0);
	FillRect(g_StartPos.x + 2 * (g_DrawingWidth / 3.f), g_StartPos.y, g_DrawingWidth / 3.f, g_DrawingHeight);

	SetColor(1.f, 1.f, 1.f);
	DrawRect(g_StartPos, g_DrawingWidth, g_DrawingHeight, 2.f);
}

void DrawCheckerPattern()
{
	g_StartPos = Point2f{ g_Border, g_Border };
	SetColor(0.f, 0.f, 0.f);
	FillRect(g_StartPos, g_DrawingHeight, g_DrawingHeight);
	SetColor(1.f, 1.f, 1.f);
	float checkerBoxSize{g_DrawingHeight / 3.f};
	FillRect(g_StartPos.x, g_StartPos.y + checkerBoxSize, checkerBoxSize, checkerBoxSize);
	FillRect(g_StartPos.x + checkerBoxSize, g_StartPos.y, checkerBoxSize, checkerBoxSize);
	FillRect(g_StartPos.x + checkerBoxSize, g_StartPos.y + 2 * checkerBoxSize, checkerBoxSize, checkerBoxSize);
	FillRect(g_StartPos.x + 2 * checkerBoxSize, g_StartPos.y + checkerBoxSize, checkerBoxSize, checkerBoxSize);

	DrawRect(g_StartPos, g_DrawingHeight, g_DrawingHeight, 2.f);
}

void DrawColourBand()
{
	g_StartPos = Point2f{ g_Border + 2 * g_Gap + g_DrawingWidth, 5 * g_Border + 2 * g_DrawingHeight };

	SetColor(0.f, 0.f, 0.f);
	FillRect(g_StartPos, g_StripWidth, g_StripHeight);
	SetColor(1.f, 0.f, 0.f);
	FillRect(g_StartPos.x + g_StripWidth, g_StartPos.y, g_StripWidth, g_StripHeight);
	SetColor(0, 1.f, 0.f);
	FillRect(g_StartPos.x + 2 * g_StripWidth, g_StartPos.y, g_StripWidth, g_StripHeight);
	SetColor(0, 0, 1.f);
	FillRect(g_StartPos.x + 3 * g_StripWidth, g_StartPos.y, g_StripWidth, g_StripHeight);
	SetColor(1.f, 0, 1.f);
	FillRect(g_StartPos.x + 4 * g_StripWidth, g_StartPos.y, g_StripWidth, g_StripHeight);
	SetColor(1.f, 1.f, 0.f);
	FillRect(g_StartPos.x + 5 * g_StripWidth, g_StartPos.y, g_StripWidth, g_StripHeight);
	SetColor(0, 1.f, 0.f);
	FillRect(g_StartPos.x + 6 * g_StripWidth, g_StartPos.y, g_StripWidth, g_StripHeight);
	SetColor(0, 1.f, 1.f);
	FillRect(g_StartPos.x + 7 * g_StripWidth, g_StartPos.y, g_StripWidth, g_StripHeight);
	SetColor(1.f, 1.f, 1.f);
	FillRect(g_StartPos.x + 8 * g_StripWidth, g_StartPos.y, g_StripWidth, g_StripHeight);

	SetColor(0.f, 0.f, 0.f, 0.69f);
	FillRect(g_StartPos, g_DrawingWidth, g_DrawingHeight / 2.f);
	
	SetColor(1.f, 1.f, 0.f);
	DrawRect(g_StartPos, g_DrawingWidth, g_DrawingHeight, 3.f);
}

void DrawPentagram()
{
	float angle{}, angleIncrement{float(M_PI * 2 / 5.f)};
	Point2f point1{ g_Center.x + g_Radius * cos(angle), g_Center.y + g_Radius * sin(angle) };
	angle += angleIncrement;
	Point2f point2{ g_Center.x + g_Radius * cos(angle), g_Center.y + g_Radius * sin(angle) };
	angle += angleIncrement;
	Point2f point3{ g_Center.x + g_Radius * cos(angle), g_Center.y + g_Radius * sin(angle) };
	angle += angleIncrement;
	Point2f point4{ g_Center.x + g_Radius * cos(angle), g_Center.y + g_Radius * sin(angle) };
	angle += angleIncrement;
	Point2f point5{ g_Center.x + g_Radius * cos(angle), g_Center.y + g_Radius * sin(angle) };

	SetColor(245 / 255.f, 2 / 255.f, 124 / 255.f);
	DrawLine(point1, point3, 2.f);
	DrawLine(point1, point4, 2.f);
	DrawLine(point2, point4, 2.f);
	DrawLine(point2, point5, 2.f);
	DrawLine(point3, point5, 2.f);
}

void DrawColumnChart()
{
	g_StartPos.y = g_Border;

	SetColor(0.f, 139 / 255.f, 139 / 255.f);
	FillRect(g_StartPos, g_ChartStripWidth, g_ChartStripMaxHeight * g_Range1 / 100.f);
	SetColor(0.f, 154 / 255.f, 205 / 255.f);
	FillRect(g_StartPos.x + g_ChartStripWidth,g_StartPos.y, g_ChartStripWidth, g_ChartStripMaxHeight * g_Range2 / 100.f);
	SetColor(0.f, 191 / 255.f, 255 / 255.f);
	FillRect(g_StartPos.x + 2 * g_ChartStripWidth, g_StartPos.y, g_ChartStripWidth, g_ChartStripMaxHeight * g_Range3 / 100.f);
	SetColor(0.f, 139 / 255.f, 205 / 255.f);
	FillRect(g_StartPos.x + 3 * g_ChartStripWidth, g_StartPos.y, g_ChartStripWidth, g_ChartStripMaxHeight * g_Range4 / 100.f);
}

void DrawHouse()
{
	g_StartPos = Point2f(g_Border, g_WindowHeight - g_Border - g_DrawingHeight);

	SetColor(1.0f, 0.f, 0.f);
	FillRect(g_StartPos, g_DrawingWidth, g_DrawingHeight / 2.f);

	Point2f pt1{ g_StartPos.x, g_StartPos.y + g_DrawingHeight / 2.f };
	Point2f pt2{ g_StartPos.x + g_DrawingWidth / 2.f, g_StartPos.y + g_DrawingHeight };
	Point2f pt3{ g_StartPos.x + g_DrawingWidth, g_StartPos.y + g_DrawingHeight / 2.f };

	FillTriangle(pt1, pt2, pt3);
	SetColor(1.0f, 1.0f, 1.0f);
	DrawTriangle(pt1, pt2, pt3);
	DrawRect(g_StartPos, g_DrawingWidth, g_DrawingHeight / 2.f);
}
#pragma endregion ownDefinitions
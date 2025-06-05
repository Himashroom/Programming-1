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
	ClearBackground(0.f, 0.f, 0.f);
	DrawSquares();

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
void DrawSquares()
{
	float squareSize{ 200.f };
	float border{ 10.f };
	Rectf rectangle1{ border, border, squareSize, squareSize };
	Rectf rectangle2{ g_WindowWidth - border - squareSize, g_WindowHeight - border - squareSize, squareSize, squareSize };
	
	Point2f r1LeftBottom{ rectangle1.left, rectangle1.bottom };
	Point2f r1LeftTop{ rectangle1.left, rectangle1.bottom + squareSize };
	Point2f r1RightBottom{ rectangle1.left + squareSize, rectangle1.bottom };
	Point2f r1RightTop{ rectangle1.left + squareSize, rectangle1.bottom + squareSize };
	
	Point2f r2LeftBottom{ rectangle2.left, rectangle2.bottom };
	Point2f r2LeftTop{ rectangle2.left, rectangle2.bottom + squareSize };
	Point2f r2RightBottom{ rectangle2.left + squareSize, rectangle2.bottom };
	Point2f r2RightTop{ rectangle2.left + squareSize, rectangle2.bottom + squareSize };

	SetColor(20 / 255.f, 155 / 255.f, 20 / 255.f);
	FillRect(rectangle1);
	FillRect(rectangle2);

	SetColor(1.0f, 1.0f, 1.0f);

	DrawRect(rectangle1);
	DrawRect(rectangle2);

	DrawLine(r1LeftBottom, r2LeftBottom);
	DrawLine(r1LeftTop, r2LeftTop);
	DrawLine(r1RightBottom, r2RightBottom);
	DrawLine(r1RightTop, r2RightTop);

}
#pragma endregion ownDefinitions
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
	ClearBackground();

	// Put your own draw statements here
	DrawLargeClock();
	DrawSmallClock();

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
	g_LargeRotationPerFrame += 360 / 240.f * float(M_PI) / 180;
	g_SmallRotationPerFrame = g_LargeRotationPerFrame / 12.f;
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
void DrawLargeClock()
{
	float armLength{ 100.f };
	SetColor(1.0f, 1.0f, 1.0f);
	Point2f upperPoint{ g_Center.x + armLength / 3 * cosf((-1) * (g_LargeRotationPerFrame + g_BendAngle )), g_Center.y + armLength / 3 * sinf((-1) * (g_LargeRotationPerFrame + g_BendAngle )) };
	Point2f lowerPoint{ g_Center.x + armLength / 3 * cosf((-1) * (g_LargeRotationPerFrame - g_BendAngle )), g_Center.y + armLength / 3 * sinf((-1) * (g_LargeRotationPerFrame - g_BendAngle )) };
	Point2f endPoint{ g_Center.x + armLength * cosf(-1 * g_LargeRotationPerFrame ), g_Center.y + armLength * sinf(-1 * g_LargeRotationPerFrame ) };
	DrawLine(g_Center, upperPoint);
	DrawLine(upperPoint, endPoint);
	DrawLine(g_Center, lowerPoint);
	DrawLine(lowerPoint, endPoint);


	//DrawLine(g_WindowWidth / 2, g_WindowHeight / 2, g_WindowWidth / 2.f + armLength / 3 * cosf((-1) * (g_LargeRotationPerFrame * float(M_PI) / 180 + 10 * float(M_PI) / 180)), g_WindowHeight / 2.f + armLength / 3 * sinf((- 1) * (g_LargeRotationPerFrame * float(M_PI) / 180 + 10 * float(M_PI) / 180)));
	//DrawLine(g_WindowWidth / 2.f + armLength * cosf(-1 * g_LargeRotationPerFrame * float(M_PI) / 180), g_WindowHeight / 2.f + armLength * sinf(-1 * g_LargeRotationPerFrame * float(M_PI) / 180), g_WindowWidth / 2.f + armLength / 3 * cosf((-1) * (g_LargeRotationPerFrame * float(M_PI) / 180 + 10 * float(M_PI) / 180)), g_WindowHeight / 2.f + armLength / 3 * sinf((-1) * (g_LargeRotationPerFrame * float(M_PI) / 180 + 10 * float(M_PI) / 180)));
	//DrawLine(g_WindowWidth / 2, g_WindowHeight / 2, g_WindowWidth / 2.f + armLength / 3 * cosf((-1) * (g_LargeRotationPerFrame * float(M_PI) / 180 - 10 * float(M_PI) / 180)), g_WindowHeight / 2.f + armLength / 3 * sinf((-1) * (g_LargeRotationPerFrame * float(M_PI) / 180 - 10 * float(M_PI) / 180)));
	//(g_WindowWidth / 2.f + armLength * cosf(-1 * g_LargeRotationPerFrame * float(M_PI) / 180), g_WindowHeight / 2.f + armLength * sinf(-1 * g_LargeRotationPerFrame * float(M_PI) / 180), g_WindowWidth / 2.f + armLength / 3 * cosf((-1) * (g_LargeRotationPerFrame * float(M_PI) / 180 - 10 * float(M_PI) / 180)), g_WindowHeight / 2.f + armLength / 3 * sinf((-1) * (g_LargeRotationPerFrame * float(M_PI) / 180 - 10 * float(M_PI) / 180)));


	//DrawLine(g_WindowWidth / 2, g_WindowHeight / 2,g_WindowWidth / 2.f +  armLength * cosf(-1 * g_LargeRotationPerFrame * float(M_PI) / 180), g_WindowHeight / 2.f + armLength  * sinf(-1 * g_LargeRotationPerFrame * float(M_PI) / 180));
}

void DrawSmallClock()
{
	float armLength{ 60.f };
	SetColor(1.0f, 1.0f, 1.0f);
	Point2f upperPoint{ g_Center.x + armLength / 3 * cosf((-1) * (g_SmallRotationPerFrame + g_BendAngle )), g_Center.y + armLength / 3 * sinf((-1) * (g_SmallRotationPerFrame + g_BendAngle )) };
	Point2f lowerPoint{ g_Center.x + armLength / 3 * cosf((-1) * (g_SmallRotationPerFrame - g_BendAngle )), g_Center.y + armLength / 3 * sinf((-1) * (g_SmallRotationPerFrame - g_BendAngle )) };
	Point2f endPoint{ g_Center.x + armLength * cosf(-1 * g_SmallRotationPerFrame ), g_Center.y + armLength * sinf(-1 * g_SmallRotationPerFrame ) };
	DrawLine(g_Center, upperPoint);
	DrawLine(upperPoint, endPoint);
	DrawLine(g_Center, lowerPoint);
	DrawLine(lowerPoint, endPoint);



	//DrawLine(g_WindowWidth / 2, g_WindowHeight / 2, g_WindowWidth / 2.f + armLength / 3 * cosf((-1) * (g_SmallRotationPerFrame * float(M_PI) / 180 + 10 * float(M_PI) / 180)), g_WindowHeight / 2.f + armLength / 3 * sinf((-1) * (g_SmallRotationPerFrame * float(M_PI) / 180 + 10 * float(M_PI) / 180)));
	//DrawLine(g_WindowWidth / 2.f + armLength * cosf(-1 * g_SmallRotationPerFrame * float(M_PI) / 180), g_WindowHeight / 2.f + armLength * sinf(-1 * g_SmallRotationPerFrame * float(M_PI) / 180), g_WindowWidth / 2.f + armLength / 3 * cosf((-1) * (g_SmallRotationPerFrame * float(M_PI) / 180 + 10 * float(M_PI) / 180)), g_WindowHeight / 2.f + armLength / 3 * sinf((-1) * (g_SmallRotationPerFrame * float(M_PI) / 180 + 10 * float(M_PI) / 180)));
	//DrawLine(g_WindowWidth / 2, g_WindowHeight / 2, g_WindowWidth / 2.f + armLength / 3 * cosf((-1) * (g_SmallRotationPerFrame * float(M_PI) / 180 - 10 * float(M_PI) / 180)), g_WindowHeight / 2.f + armLength / 3 * sinf((-1) * (g_SmallRotationPerFrame * float(M_PI) / 180 - 10 * float(M_PI) / 180)));
	//DrawLine(g_WindowWidth / 2.f + armLength * cosf(-1 * g_SmallRotationPerFrame* float(M_PI) / 180), g_WindowHeight / 2.f + armLength * sinf(-1 * g_SmallRotationPerFrame * float(M_PI) / 180), g_WindowWidth / 2.f + armLength / 3 * cosf((-1) * (g_SmallRotationPerFrame * float(M_PI) / 180 - 10 * float(M_PI) / 180)), g_WindowHeight / 2.f + armLength / 3 * sinf((-1) * (g_SmallRotationPerFrame * float(M_PI) / 180 - 10 * float(M_PI) / 180)));

	
	
	
	//DrawLine(g_WindowWidth / 2, g_WindowHeight / 2, g_WindowWidth / 2.f + armLength * cosf(-1 * g_SmallRotationPerFrame * float(M_PI) / 180), g_WindowHeight / 2.f + armLength * sinf(-1 * g_SmallRotationPerFrame * float(M_PI) / 180));

}
#pragma endregion ownDefinitions
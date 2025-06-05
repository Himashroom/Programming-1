#pragma once
using namespace utils;
#pragma region gameInformation
// Set your name and group in the title here
std::string g_WindowTitle{ "Project name - Name, firstname - 1DAExx" };

// Change the window dimensions here
float g_WindowWidth{ 500 };
float g_WindowHeight{ 300 };
#pragma endregion gameInformation



#pragma region ownDeclarations
// Declare your own global variables here
Point2f g_P1(0.f, g_WindowHeight / 3.f);
Point2f g_P2(0.f, g_WindowHeight / 3.f * 2.f);
Point2f g_P3(g_WindowWidth / 3.f, g_WindowHeight);
Point2f g_P4(g_WindowWidth / 3.f * 2.f, g_WindowHeight);
Point2f g_P5(g_WindowWidth, g_WindowHeight / 3.f * 2.f);
Point2f g_P6(g_WindowWidth, g_WindowHeight / 3.f);
Point2f g_P7(g_WindowWidth / 3.f * 2.f, 0.f);
Point2f g_P8(g_WindowWidth / 3.f, 0.f);

Point2f g_CentrePoint(g_WindowWidth / 2.f, g_WindowHeight / 2.f);

float g_Size{ 40 };

// Declare your own functions here

#pragma endregion ownDeclarations

#pragma region gameFunctions											
void Start();
void Draw();
void Update(float elapsedSec);
void End();
#pragma endregion gameFunctions

#pragma region inputHandling											
void OnKeyDownEvent(SDL_Keycode key);
void OnKeyUpEvent(SDL_Keycode key);
void OnMouseMotionEvent(const SDL_MouseMotionEvent& e);
void OnMouseDownEvent(const SDL_MouseButtonEvent& e);
void OnMouseUpEvent(const SDL_MouseButtonEvent& e);
#pragma endregion inputHandling

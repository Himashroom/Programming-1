#pragma once
using namespace utils;
#pragma region gameInformation
// Set your name and group in the title here
std::string g_WindowTitle{ "Project name - Name, firstname - 1DAExx" };

// Change the window dimensions here
float g_WindowWidth{ 500 };
float g_WindowHeight{ 500 };
#pragma endregion gameInformation



#pragma region ownDeclarations
// Declare your own global variables here
const float g_OuterRadius{ 250 };
float g_OuterAngle{};
float g_MiddleAngle{ float(M_PI / 4.f) };
float g_InnerAngle2{ float(M_PI / 6.f) };
float g_InnerAngle1{ float(M_PI / 3.f) };

const Point2f g_Center{ g_WindowWidth / 2.f, g_WindowHeight / 2.f };
Point2f g_OP1{};
Point2f g_OP2{};
Point2f g_OP3{};
Point2f g_OP4{};
Point2f g_MP1{};
Point2f g_MP2{};
Point2f g_MP3{};
Point2f g_MP4{};
Point2f g_I2P1{};
Point2f g_I2P2{};
Point2f g_I2P3{};
Point2f g_I2P4{};
Point2f g_I1P1{};
Point2f g_I1P2{};
Point2f g_I1P3{};
Point2f g_I1P4{};

// Declare your own functions here
void InitialiseStar();
void DrawStar();
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

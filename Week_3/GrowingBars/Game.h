#pragma once
using namespace utils;
#pragma region gameInformation
// Set your name and group in the title here
std::string g_WindowTitle{ "GrowingBars - Sharma, Himanshu - 1DAE13" };

// Change the window dimensions here
float g_WindowWidth{ 500 };
float g_WindowHeight{ 300 };
#pragma endregion gameInformation



#pragma region ownDeclarations
// Declare your own global variables here
int g_NrFrames{};
float g_Border{ 10.f };
float g_RectangleWidth{ g_WindowWidth - 2 * g_Border };
float g_RectangleHeight{ (g_WindowHeight - 6 * g_Border) / 2 };
float g_YellowBarWidth{};
float g_RedBarWidth{};

Color4f g_Red{};

const Point2f g_YellowBarBase{g_Border ,g_WindowHeight - g_Border - g_RectangleHeight };
const Point2f g_RedBarBase{ g_Border, g_Border };

// Declare your own functions here
void DrawYellowBar();
void DrawRedBar();
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

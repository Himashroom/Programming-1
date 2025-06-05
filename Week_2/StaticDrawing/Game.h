#pragma once
using namespace utils;
#pragma region gameInformation
// Set your name and group in the title here
std::string g_WindowTitle{ "Project name - Name, firstname - 1DAExx" };

// Change the window dimensions here
float g_WindowWidth{ 840 };
float g_WindowHeight{ 600 };
#pragma endregion gameInformation



#pragma region ownDeclarations
// Declare your own global variables here
float g_Border{ 20 };
float g_Gap{ 2 * g_Border };
float g_DrawingHeight{(g_WindowHeight - 3 * g_Gap) / 3.f};
float g_DrawingWidth{ (g_WindowWidth - 3 * g_Gap) / 2.f};
float g_StripHeight{ g_DrawingHeight };
float g_StripWidth{ g_StripHeight / 4.f };
float g_Radius{ g_DrawingHeight / 2.f };
float g_ChartStripWidth{ g_DrawingWidth / 8.f };
float g_ChartStripMaxHeight{ g_DrawingHeight };
float g_Range1{}, g_Range2{}, g_Range3{}, g_Range4{};

Point2f g_Center{ g_WindowWidth - g_Border - g_DrawingWidth / 2.f, g_WindowHeight / 2.f };
Point2f g_StartPos{};

// Declare your own functions here
void DrawFlag();
void DrawCheckerPattern();
void DrawColourBand();
void DrawPentagram();
void DrawColumnChart();
void DrawHouse();
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

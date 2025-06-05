#pragma once
using namespace utils;
#pragma region gameInformation
// Set your name and group in the title here
std::string g_WindowTitle{ "Project name - Name, firstname - 1DAExx" };

// Change the window dimensions here
float g_WindowWidth{ 800 };
float g_WindowHeight{ 600 };
#pragma endregion gameInformation



#pragma region ownDeclarations
// Declare your own global variables here
//Freaky Variables
// float g_Offset{};
//Wave Variables

const float g_Border{ 20.f };
float g_LineWidth{ 2.5f };
const float g_WaveWidth{20.f};
const float g_WaveHeight{23.f};
const float g_WaveSpeed{100.f };

float g_SecondWaveEndXPos{};
bool g_SecondWaveIsMoving{};
bool g_FirstWaveIsMoving{ true };
const int g_Wavesize{ 7 };
const float g_StartBound{ 180 - 2 * g_WaveWidth };
const float g_EndBound{ g_StartBound + 2 * g_Wavesize * g_WaveWidth };
float g_SecondWaveStartXPos{ g_EndBound + g_WaveWidth };
Point2f g_FirstWaveStartPos{ g_StartBound + g_WaveWidth, 200 + 40 * sinf(g_StartBound + g_WaveWidth * float(M_PI) / 180) - 55 };

//float g_SecondWaveStartXPos{ 180 - 4 * g_WaveWidth + 11 * g_WaveWidth };
//float g_StartBound{ 180 - 6 * g_WaveWidth };
//float g_EndBound{ 3 * g_Border + 11 * g_WaveWidth + 1 };
//Point2f g_FirstWaveStartPos{ 180 - 4*g_WaveWidth, 200 + 40 * sinf(180 - 4 * g_WaveWidth * float(M_PI) / 180) -45 };
Point2f g_FirstWaveEndPos{};

//General
int g_NrFrames{};
const Point2f g_Center{ g_WindowWidth / 2, g_WindowHeight / 2 };


//BuoyVariables
const float g_BuoyHeight{ g_WaveHeight + 2 };
const float g_BuoyWidth{ (g_EndBound - g_StartBound) / 2 };
float g_BuoyOffset{};
const Point2f g_BuoyPivot{ (g_EndBound - g_StartBound) / 2 + g_StartBound , g_FirstWaveStartPos.y};
Point2f g_BuoyStartPoint{ g_BuoyPivot.x - g_BuoyWidth / 2, g_BuoyPivot.y  };
Point2f g_BuoyEndPoint{ g_BuoyPivot.x + g_BuoyWidth / 2, g_BuoyPivot.y  };

//SineVariables
float g_SineAngle{};
Point2f g_BoatVertex{};
float g_BoatRockSpeed{5.f};

const float g_RectWidth{ 80.f };
const float g_RectHeight{g_RectWidth / 4};
Point2f g_FirstRecStartPos{ g_WindowWidth / 2 - g_RectWidth / 2, g_WindowHeight / 2 + g_RectHeight / 2 };
float g_SecondRectXPos{g_WindowWidth};
bool g_FirstRectIsMoving{ true };
bool g_SecondRectIsVisible{};
bool g_SecondRectVisible = false;
bool g_FirstRectWaiting = false;


// Declare your own functions here
//void DrawFreakyAnim();
//void UpdateBarsPosition(float deltaTime);
void DrawBars();
void DrawFirstWave();
void DrawSecondWave();
void DrawFirstBoatWave();
void DrawSecondBoatWave();
void DrawBuoy();
void DrawSine();
void RockBoat();
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

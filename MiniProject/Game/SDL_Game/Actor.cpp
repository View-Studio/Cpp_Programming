#include "Actor.h"
#include <iostream>
#include <Windows.h>
#include "Engine.h"

void Actor::Tick()
{
}

void Actor::Render()
{
    //COORD Cur;
    //Cur.X = Location.X;
    //Cur.Y = Location.Y;
    //SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
    //std::cout << Shape;

    //GPU Command Queue 다 그리고 적어 놓기
    //SDL_SetRenderDrawColor(GEngine->MyRenderer, MyColor.R, MyColor.G,
    //    MyColor.B, MyColor.A);
    //SDL_Rect MyRect = { Location.X * Width, Location.Y * Height,
    //    Width, Height };
    //SDL_RenderFillRect(GEngine->MyRenderer, &MyRect);
    
    SDL_Rect SourceRect = { 0, 0, 
        MyTexture->MySurface->w,
        MyTexture->MySurface->h };
    SDL_Rect Destination = { Location.X * Width, Location.Y * Height,
        Width, Height };
    SDL_RenderCopy(GEngine->MyRenderer, MyTexture->MyTexture,
        &SourceRect,
        &Destination);



}

#include "pch.h"
#include <iostream>
#include "ConsoleHelper.h"
#include "Board.h"

Board board;

int main()
{
    board.Init(25);

    uint64 lastTick = 0;

    while (true)
    {
#pragma region FrameManager
        const uint64 currentTick = ::GetTickCount64();
        const uint64 deltaTick = currentTick - lastTick;
        lastTick = currentTick;
#pragma endregion

        // ------------- Input -------------

        // ------------- Logic -------------

        // ----------- Rendering -----------
        board.Render();

    }
}

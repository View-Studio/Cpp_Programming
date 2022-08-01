#include "pch.h"
#include <iostream>
#include "ConsoleHelper.h"
#include "Board.h"
#include "Player.h"

Board board;
Player player;

int main()
{
    ::srand(static_cast<unsigned>(time(nullptr)));
    board.Init(25, &player);
    player.Init(&board);

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
        player.Update(deltaTick);

        // ----------- Rendering -----------
        board.Render();

    }
}

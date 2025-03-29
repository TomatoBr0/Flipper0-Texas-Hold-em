#include <stdio.h>
#include <unistd.h>   // for sleep()
#include "game.h"
#include "ui.h"
#include "ai.h"
#include "winrate.h"

int main(void) {
    // Initialization of systems
    ui_init();
    game_init();
    ai_init();
    winrate_init();

    printf("Starting Texas Hold'em Game...\n");

    // Main game loop simulation
    // For demonstration, we'll run 10 iterations
    for (int frame = 0; frame < 10; frame++) {
        printf("----- Frame %d -----\n", frame);

        // Update game logic (dealing cards, bets, etc.)
        game_update();

        // Clear the display and redraw UI elements
        ui_clear();
        ui_draw_background();
        ui_draw_game();
        ui_update();

        // Process AI decision-making
        ai_process();

        // Update win rate statistics (if applicable)
        winrate_update();

        // Sleep for a second to simulate a frame delay (adjust as needed)
        sleep(1);
    }

    printf("Exiting game loop.\n");
    return 0;
}

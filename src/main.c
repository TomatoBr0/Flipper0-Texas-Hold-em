#include <stdio.h>
#include "game.h"
#include "ui.h"
#include "ai.h"
#include "winrate.h"

int main(void) {
    // Initialize all subsystems
    ui_init();
    game_init();
    ai_init();
    winrate_init();

    printf("Starting Texas Hold'em Game...\n");

    // Main game loop (for demonstration, run a fixed number of rounds)
    for (int round = 0; round < 5; round++) {
        printf("----- Round %d -----\n", round + 1);

        // Start a new game round (deal cards, etc.)
        game_deal_cards();

        // Clear the screen and draw background and game elements
        ui_clear();
        ui_draw_background();
        ui_draw_game();
        ui_draw_community_cards();
        ui_update();

        // Process AI decisions
        ai_process();

        // Simulate end-of-round evaluation and update win rate stats
        int winner = determine_winner();
        if (winner == 0) {
            printf("Player wins round %d!\n", round + 1);
        } else {
            printf("AI wins round %d!\n", round + 1);
        }
        winrate_update(winner);

        // Wait between rounds (simulate frame delay)
        // Replace sleep() with the appropriate delay function on the Flipper Zero.
        #ifdef DESKTOP_TEST
        sleep(2);
        #endif
    }

    printf("Game over!\n");
    return 0;
}

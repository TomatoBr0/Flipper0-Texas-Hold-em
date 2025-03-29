#include <stdio.h>
#include "winrate.h"

static int games_played = 0;
static int player_wins = 0;

void winrate_init(void) {
    games_played = 0;
    player_wins = 0;
    printf("Win rate tracking initialized.\n");
}

void winrate_update(int winner) {
    // Increment games played. If winner is 0, player won.
    games_played++;
    if (winner == 0) {
        player_wins++;
    }
    float win_rate = (games_played > 0) ? ((float)player_wins / games_played) * 100 : 0;
    printf("Games Played: %d, Player Wins: %d, Win Rate: %.2f%%\n",
           games_played, player_wins, win_rate);
}

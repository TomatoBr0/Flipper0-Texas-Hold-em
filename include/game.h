#ifndef GAME_H
#define GAME_H

typedef struct {
    char rank[4];  // e.g., "A", "10", "Q"
    char suit[10]; // e.g., "Hearts", "Diamonds"
} Card;

typedef struct {
    Card hand[2];  // Two cards per player
    int chips;
} Player;

extern Player player;
extern Player ai_player;

void game_init(void);
void game_deal_cards(void);
int determine_winner(void);

#endif // GAME_H

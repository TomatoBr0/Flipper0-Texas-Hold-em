#ifndef UI_H
#define UI_H

#include "game.h" // For the Card type

void ui_init(void);
void ui_clear(void);
void ui_draw_background(void);
void ui_draw_card(const Card* card, int x, int y);
void ui_draw_game(void);
void ui_set_community_cards(Card cards[5]);
void ui_draw_community_cards(void);
void ui_update(void);

#endif // UI_H

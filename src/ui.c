#include <stdio.h>
#include <string.h>
#include "ui.h"

// In a real Flipper Zero app, include the proper header for display functions.
// Here we simulate display actions with printf for testing.
void ui_init(void) {
    // Initialize the display hardware.
    printf("UI initialized.\n");
}

void ui_clear(void) {
    // Clear the screen.
    printf("[UI] Screen cleared.\n");
}

void ui_draw_background(void) {
    // Draw a simple background.
    printf("[UI] Background drawn.\n");
}

void ui_draw_card(const Card* card, int x, int y) {
    // Simulated card drawing: Print card info with its "position".
    printf("[UI] Card '%s of %s' drawn at (%d, %d).\n", card->rank, card->suit, x, y);
}

void ui_draw_game(void) {
    // Draw the player's and AI's cards.
    // For simplicity, positions are hardcoded.
    extern Player player;
    extern Player ai_player;
    ui_draw_card(&player.hand[0], 10, 10);
    ui_draw_card(&player.hand[1], 30, 10);
    ui_draw_card(&ai_player.hand[0], 10, 40);
    ui_draw_card(&ai_player.hand[1], 30, 40);
}

static Card current_community_cards[5];

void ui_set_community_cards(Card cards[5]) {
    // Store community cards for later drawing.
    for (int i = 0; i < 5; i++) {
        current_community_cards[i] = cards[i];
    }
}

void ui_draw_community_cards(void) {
    // Draw community cards at a fixed position.
    for (int i = 0; i < 5; i++) {
        // Spacing each card horizontally by 20 pixels.
        ui_draw_card(&current_community_cards[i], 50 + i * 20, 25);
    }
}

void ui_update(void) {
    // In a real device, this would refresh the screen.
    printf("[UI] Display updated.\n");
}

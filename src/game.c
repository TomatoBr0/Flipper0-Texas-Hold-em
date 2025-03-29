#include <stdio.h>
#include "game.h"
#include "ui.h"

// For simplicity, we'll use a static deck and predefined cards.
static Player player;
static Player ai_player;
static Card community_cards[5];
static int pot = 100;  // Example starting pot

// Helper function to simulate dealing a card (placeholder)
static Card deal_card(const char* rank, const char* suit) {
    Card card;
    snprintf(card.rank, sizeof(card.rank), "%s", rank);
    snprintf(card.suit, sizeof(card.suit), "%s", suit);
    return card;
}

void game_init(void) {
    // Initialize player chip counts, etc.
    player.chips = 1000;
    ai_player.chips = 1000;
    printf("Game initialized. Both players start with 1000 chips.\n");
}

void game_deal_cards(void) {
    printf("Dealing cards...\n");

    // Deal two cards to each player (static example)
    player.hand[0] = deal_card("A", "Hearts");
    player.hand[1] = deal_card("7", "Diamonds");

    ai_player.hand[0] = deal_card("K", "Clubs");
    ai_player.hand[1] = deal_card("9", "Spades");

    // Deal community cards (for this round, static example)
    community_cards[0] = deal_card("Q", "Hearts");
    community_cards[1] = deal_card("10", "Diamonds");
    community_cards[2] = deal_card("2", "Clubs");
    community_cards[3] = deal_card("5", "Spades");
    community_cards[4] = deal_card("J", "Hearts");

    // Pass community cards to UI for drawing
    ui_set_community_cards(community_cards);
}

int determine_winner(void) {
    // Simplified: If player has an Ace, they win; otherwise, AI wins.
    if (player.hand[0].rank[0] == 'A') {
        player.chips += pot;
        return 0;  // Player wins
    } else {
        ai_player.chips += pot;
        return 1;  // AI wins
    }
}

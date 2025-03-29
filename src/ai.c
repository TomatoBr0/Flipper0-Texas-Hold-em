#include <stdio.h>
#include "ai.h"

// Global variable for AI difficulty level.
// 1 = Easy, 2 = Medium, 3 = Hard
static int ai_difficulty = 2;

void ai_init(void) {
    // Initialize the AI with a default difficulty
    ai_difficulty = 2; // Set to medium by default
    printf("AI initialized with difficulty level: %d (Medium)\n", ai_difficulty);
}

void ai_process(void) {
    // A very basic simulation of AI decision-making:
    // In a real game, this would analyze the current game state and decide on a move.
    if (ai_difficulty == 1) {
        printf("AI (Easy): Considering simple move...\n");
    } else if (ai_difficulty == 2) {
        printf("AI (Medium): Calculating best move...\n");
    } else if (ai_difficulty == 3) {
        printf("AI (Hard): Evaluating complex strategies...\n");
    } else {
        printf("AI: Unknown difficulty level!\n");
    }
}

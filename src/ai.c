#include <stdio.h>
#include "ai.h"

static int ai_difficulty = 2; // 1: Easy, 2: Medium, 3: Hard

void ai_init(void) {
    // Initialize AI settings.
    ai_difficulty = 2;
    printf("AI initialized with difficulty level: %d (Medium)\n", ai_difficulty);
}

void ai_process(void) {
    // Very basic AI logic: print decision based on difficulty.
    if (ai_difficulty == 1) {
        printf("AI (Easy): Plays conservatively.\n");
    } else if (ai_difficulty == 2) {
        printf("AI (Medium): Evaluates hand strength.\n");
    } else if (ai_difficulty == 3) {
        printf("AI (Hard): Takes risks and calculates odds.\n");
    } else {
        printf("AI: Unknown difficulty level.\n");
    }
}

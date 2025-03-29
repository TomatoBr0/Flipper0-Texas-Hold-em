# Flipper Zero Texas Hold'em

This project implements a basic Texas Hold'em game for the Flipper Zero. It includes:
- **Game Logic:** Dealing cards, evaluating a simple win condition.
- **User Interface (UI):** Drawing cards, background, and community cards.
- **AI:** Basic AI decision-making.
- **Win Rate Tracking:** Simple tracking of player win rate.

## File Structure
flipper-zero-texas-holdem/ ├── src/ │ ├── main.c │ ├── game.c │ ├── ui.c │ ├── ai.c │ └── winrate.c ├── include/ │ ├── game.h │ ├── ui.h │ ├── ai.h │ └── winrate.h ├── assets/ │ ├── background.png │ └── card_images/ ├── Makefile └── README.md

## Build and Test

1. Open the project in VS Code.
2. Build the project by running:
   ```bash
   make

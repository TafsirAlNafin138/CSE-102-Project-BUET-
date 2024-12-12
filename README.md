# Tic-Tac-Toe AI Game

Welcome to the Tic-Tac-Toe AI Game! This is a modern and interactive twist on the classic Tic-Tac-Toe game, featuring various levels of AI difficulty, player score tracking, and a sleek graphical interface.

## Features

- **Graphical Interface**: Built using the iGraphics library for a visually appealing experience.
- **Multiplayer Mode**: Play with a friend in two-player mode.
- **AI Mode**: Challenge yourself against the computer with three difficulty levels:
  - Easy
  - Medium
  - Hard
- **Unique Gameplay**: Unlike traditional Tic-Tac-Toe, this game features **four 3x3 boards**, adding a layer of complexity and strategy. In AI mode, the board the player moves on determines the board where the AI will make its move, creating a dynamic and challenging experience.
- **Scoreboard**: Save and display top scores of players.
- **Sound Effects**: Enjoy background music and sound effects during gameplay.
- **Settings and Rules**: Easily access game settings and rules for better understanding.

## Installation

### Prerequisites

- A Windows-based system.
- A C++ compiler (e.g., GCC, MinGW).
- The `iGraphics` library installed on your system.

### Steps

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/CSE-102-Project-BUET-L-1T-1.git
   ```
2. Navigate to the project directory:
   ```bash
   cd CSE-102-Project-BUET-L-1T-1
   ```
3. Compile the code:
   ```bash
   g++ iMain.cpp -o TicTacToe -lgraphics
   ```
4. Run the executable:
   ```bash
   ./TicTacToe
   ```

## How to Play

### Main Menu

- **Start Game**: Begin a new game by selecting either multiplayer or AI mode.
- **Settings**: Configure sound and other game options.
- **Rules**: View the game rules.

### Gameplay

1. Choose a mode (Player vs. Player or Player vs. AI).
2. In AI mode, select a difficulty level.
3. Play the game by clicking on the grid to place your symbol (`X` or `O`).
4. Navigate between the four 3x3 boards strategically. The AI will make its move on the board corresponding to your move, enhancing the complexity and fun.
5. The first player to get three in a row (horizontally, vertically, or diagonally) on any board wins!
6. Scores are saved automatically after the game.

## File Structure

- **iMain.cpp**: The main source code for the game.
- **resources/**: Contains game assets like images and sound files.
- **topScores.txt**: Stores the top scores.

## Acknowledgments

- Developed using the `iGraphics` library.
- Special thanks to all contributors and players.

Enjoy playing Tic-Tac-Toe AI!


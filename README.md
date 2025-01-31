# Square game on C

This is a simple game developed in C that runs in the terminal (CMD). The game takes place on a 5x5 grid, with a central square (represented by `°`) that must move to reach a goal (represented by `#`). Each time the player reaches the goal, the score increases, and the goal moves to a new random location on the grid.

## How to Play

1. The player starts with the character represented by `°` in the center of the grid.
2. The goal is to reach the `#` and increase the score each time it’s reached.
3. After reaching the goal, the `#` moves to a new random location within the grid.
4. The game continues in a loop, and the score increases as the player keeps reaching the goal.

## Controls

- **W**: Move up
- **S**: Move down
- **A**: Move left
- **D**: Move right

## How to Run the Game

1. Clone or download the game repository.
2. Compile the C code using a C compiler like `gcc`. Example:

    ```bash
    gcc -o game game.c
    ```

3. Run the game with the following command:

    ```bash
    ./game
    ```

In this example, the character `°` is at the center of the grid, and the goal is marked by `#`.

## Requirements

- C Compiler (e.g., GCC)
- Windows 7 or early, Windows 10+ maybe be buggy

## License

This project is open-source. Feel free to use, modify, and distribute!



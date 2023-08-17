#ifndef USER_INPUT_H
#define USER_INPUT_H

#include <conio.h>

bool getInputEnabled = true; // A flag to enable/disable _getch()
enum class Direction { UP, DOWN, RESET, LEFT, RIGHT };

Direction getInput(bool getInputEnabled) {
    if (!getInputEnabled) {
        return Direction::UP; // Return a default direction
    }
    int key = _getch(); // Read a key
    if (key == 224) {   // Arrow key was pressed
        key = _getch(); // Read the arrow key code
        switch (key) {
        case 72: return Direction::UP;
        case 80: return Direction::DOWN;
        case 75: return Direction::LEFT;
        case 77: return Direction::RIGHT;
        }
    }else if (key == 'r' || key == 'R') {
        return Direction::RESET;
    }
    return Direction::UP; // Default direction
}
#endif

#ifndef GAME_INI_H
#define GAME_INI_H

#include <random>
#include <ctime>

#define ROWS 4
#define COLUMNS 4
void ini(int (*grid)[COLUMNS]){
    srand(time(nullptr));
	for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLUMNS; col++) {
            grid[row][col] = 0; // Set all elements to 0
        }
    }
    for(int i = 0; i < (rand()%2+2); i++)
        grid[rand()%ROWS][rand()%COLUMNS] = 2; // Assign a value at a specific index
}

#endif

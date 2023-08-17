#ifndef GAME_OVER_CHECK_H
#define GAME_OVER_CHECK_H

bool checkSimilarValues(int (*grid)[4]) {
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            if (row + 1 < 4 && grid[row][col] == grid[row + 1][col]) {
                return true;
            }
            if (col + 1 < 4 && grid[row][col] == grid[row][col + 1]) {
                return true;
            }
        }
    }
    return false;
}

#endif

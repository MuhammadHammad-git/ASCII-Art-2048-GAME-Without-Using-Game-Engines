#ifndef ADD_RANDOM_H
#define ADD_RANDOM_H
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <cstdlib>

using namespace std;

#define ROWS 4
#define COLUMNS 4
int GAME_LEVEL = 16;

bool WON = false;
bool AddRandom(int (*grid)[COLUMNS]) {
    vector<pair<int, int>> zeroIndexes;
    
    srand(time(nullptr));
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLUMNS; col++) {
            if (grid[row][col] == 0) {
                zeroIndexes.push_back({row, col});
            }
            if(grid[row][col] == 2048){
                WON = true;
                return true;
            }
        }
    }
    if (zeroIndexes.size() == 0){
        // No Zero Exist
        return false;
    }
    GAME_LEVEL = zeroIndexes.size();
    int chosen = rand() % GAME_LEVEL;
    // cout << "Indexes with zeros:" << endl;
    
    int PutNum[2] = {2,4};
    grid[zeroIndexes[chosen].first]
        [zeroIndexes[chosen].second] = PutNum[(rand() % 2)];
    if (zeroIndexes.size() == 1){
        // check whether the GRID is filled
        return false;
    }
    return true;
}
#endif

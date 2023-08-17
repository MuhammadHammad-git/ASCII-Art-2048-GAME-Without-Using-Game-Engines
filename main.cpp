#include "Headers/GAME_BACKEND.h"
#include "Headers/ADD_RANDOM.h"
#include "Headers/GAME_OVER_CHECK.h"
#include "Headers/GAME_OVER.h"
#include "Headers/GAME_FRONTEND.h"
#include "Headers/GAME_INI.h"
#include "Headers/YOU_WON.h"
#include "Headers/LEVEL_CHANGE.h"
#include <chrono>
#include <cstring>
using namespace std;
#define ROWS 4
#define COLUMNS 4
bool hasMoved(int grid[ROWS][COLUMNS], int newGrid[ROWS][COLUMNS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            if (grid[i][j] != newGrid[i][j]) {
                return true; // Element has moved
            }
        }
    }
    return false; // No elements moved
}
int main() {
	
	Direction dir;
	//this initialization is for testing purposes only please comment *line 36* for this to be effective
	//please not initialization function will not work for the end game reset
	int GRID[ROWS][COLUMNS] = {{1024,1024,0,0},
	{0,0,0,0},
	{0,0,0,0},
	{1024,0,0,8}
	};
	while(1){
		//Game GRID INITIALIZER
		//ini(GRID);
		while (1) {
			cout << "\033[33m" << "Press R to RESET! \n" << ANSI_COLOR_RESET;
			Change_Level(GAME_LEVEL);
			cout << " SCORE: " << score << endl;
			show(GRID);
			getInputEnabled = true;
			dir = getInput(getInputEnabled);
			getInputEnabled = false;
			if(dir == Direction::RESET){
				cout << ANSI_COLOR_RESET;
				GAME_LEVEL = 15;
				cout << "\nGame Reset!\n";
				score = 0;
				ini(GRID);
				system("cls");
				continue;	
			}
			int previous_GRID[ROWS][COLUMNS];
			// Copy the original grid to the copied grid using memcpy
			memcpy(previous_GRID, GRID, sizeof(GRID));
			MOVE(GRID, dir);
			if (hasMoved(previous_GRID, GRID)) {
				cout << "items have changed\n";
				if(!AddRandom(GRID)){
					if(!checkSimilarValues(GRID)){
						system("cls");
						show(GRID);
						GAME_OVER();
						cout << "\nYOUR TOTAL SCORE IS:            " << "\033[31m" << score << ANSI_COLOR_RESET << endl;
						break;
					}
				}
				if (WON){
					system("cls");
					show(GRID);
					//Please hard run this to see winning screen
					You_Won();
					cout << "YOUR TOTAL SCORE IS:            " << "\033[33m" << score << ANSI_COLOR_RESET << endl;
					break;
				}
			}
			system("cls");

		}
		cout << "\n\nPRESS R TO RESTART THE GAME or PRESS ANY KEY TO EXIT\n\n";
		if (getInput(true) == Direction::RESET){
			cout << ANSI_COLOR_RESET;
			GAME_LEVEL = 15;
			cout << "\nGame Reset!\n";
			score = 0;
			system("cls");
			continue;
		}else{
			cout << "\n\nEXTING THE GAME\n\n";
			break;
		}

	}
	return 0;
}

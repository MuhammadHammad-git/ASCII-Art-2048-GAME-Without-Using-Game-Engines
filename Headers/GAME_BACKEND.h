#ifndef GAME_BACKEND_H
#define GAME_BACKEND_H

#include "USER_INPUT.h"

#define ROWS 4
#define COLUMNS 4
int score = 0;
void MOVE(int (*grid)[4], Direction thisway) {
	int reup_I = 0;
	int reup_J = 0;
	bool if_J = true;
	int temp[3] = {0,0,0};
	if (thisway == Direction::UP){
		reup_I = 0;
		reup_J = 0;
		if_J = true;
		for (int j = 0; j < ROWS; j++){
			for (int i = 0; i < COLUMNS; i++) {
				
				if (grid[i][j] != 0){
					if (temp[0] == grid[i][j]){
						reup_I--;
						grid[reup_I][reup_J] = grid[reup_I][reup_J] + grid[i][j];
						score = score + grid[reup_I][reup_J];
						grid[i][j] = 0;
						temp[0] = 0;
					}else {
						temp[0] = grid[i][j];
						grid[reup_I][reup_J] = grid[i][j];
						if(!(reup_I==i && reup_J==j))
							grid[i][j] = 0;
					}
					reup_I++;
				}
			}
			reup_J++;
			reup_I = 0;
			temp[0] = 0;
		}
	}
	if (thisway == Direction::DOWN){
		reup_I = 3;
		reup_J = 3;
		if_J = true;
		temp[0] = 0;
		for (int j = COLUMNS-1; j >=0; --j){
			for (int i = ROWS-1; i >= 0; --i) {
				
				if (grid[i][j] != 0){
					if (temp[0] == grid[i][j]){
						reup_I++;
						grid[reup_I][reup_J] = grid[reup_I][reup_J] + grid[i][j];
						score = score + grid[reup_I][reup_J];
						grid[i][j] = 0;
						temp[0] = 0;
					}else {
						temp[0] = grid[i][j];
						grid[reup_I][reup_J] = grid[i][j];
						if(!(reup_I==i && reup_J==j))
							grid[i][j] = 0;
					}
					reup_I--;
				}

			}
			reup_J--;
			reup_I = 3;
			temp[0] = 0;
		}
	}
	if (thisway == Direction::LEFT){
		reup_I = 0;
		reup_J = 0;
		if_J = false;
		temp[0] = 0;
		for (int i = 0; i < ROWS; i++){
			for (int j = 0; j < COLUMNS; j++) {
				if (grid[i][j] != 0){
					if (temp[0] == grid[i][j]){
						reup_J--;
						grid[reup_I][reup_J] = grid[reup_I][reup_J] + grid[i][j];
						score = score + grid[reup_I][reup_J];
						grid[i][j] = 0;
						temp[0] = 0;
					} else {
						temp[0] = grid[i][j];
						grid[reup_I][reup_J] = grid[i][j];
						if(!(reup_I==i && reup_J==j))
							grid[i][j] = 0;
					}
					reup_J++;
				}
			}
			reup_I++;
			reup_J = 0;
			temp[0] = 0;
		}
	}

	if (thisway == Direction::RIGHT){
		reup_I = 3;
		reup_J = 3;
		if_J = false;
		temp[0] = 0;
		for (int i = ROWS-1; i >= 0 ; --i){
			for (int j = COLUMNS-1; j >= 0 ; --j) {
				if (grid[i][j] != 0){
					if (temp[0] == grid[i][j]){
						
						reup_J++;
						grid[reup_I][reup_J] = grid[reup_I][reup_J] + grid[i][j];
						score = score + grid[reup_I][reup_J];
						grid[i][j] = 0;
						temp[0] = 0;
					}else {
						temp[0] = grid[i][j];
						grid[reup_I][reup_J] = grid[i][j];
						if(!(reup_I==i && reup_J==j))
							grid[i][j] = 0;
					}
					reup_J--;
				}
			}
			reup_I--;
			reup_J = 3;
			temp[0] = 0;
		}
	}
}


#endif // GAME_FUNCTIONS_H

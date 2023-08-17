#ifndef LEVEL_CHANGE_H
#define LEVEL_CHANGE_H
#include <iostream>
void Change_Level(int game_level){
	switch (game_level)
	{
	case 0:case 1: std::cout << "\033[31m"; break;
	case 2:case 3:case 4:case 5:case 6: std::cout << "\033[33m"; break;
	case 7:case 8:case 9:case 10: std::cout << "\033[32m"; break;
	case 11:case 12:case 13: std::cout << "\033[36m"; break;
	default: std::cout << "\033[0m"; break;
	}
}

#endif

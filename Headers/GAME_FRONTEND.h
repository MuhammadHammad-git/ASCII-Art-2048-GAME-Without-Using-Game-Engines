#ifndef GAME_FRONTEND_H
#define GAME_FRONTEND_H
#include <iostream>
void Disp(int *N){    
    string DigitView[12][6] = {
    {    
    " | |  ___    _  _  _      __   | | ",
    " | | / _ `..' '.|| ||   .'  '. | | ",
    " | ||_/_) || . |||_||_  | () | | | ",
    " | |  .__.'|| |||__ |_| .`__'. | | ",
    " | | / /__ | ' | __||_ | (__) || | ",
    " | ||_____|'._.'|_____|`.____.'| | "
    },{
        
    " | |  __     __    ___  _  _   | | ",
    " | | /  |  .'  '. / _ `.|| ||  | | ",
    " | | `| |  | .. ||_/_) |||_||_ | | ",
    " | |  | |  ||  ||  .__.'|__ |_|| | ",
    " | | _| |_ | '' | / /__  __||_ | | ",
    " | ||_____|'.__.'|_____||_____|| | "
    },{
        
    " | |  ______    __     _____   | | ",
    " | | |  ____|  /  |   / ___ `. | | ",
    " | | | |___    `| |  |_/___) | | | ",
    " | | '_.___''.  | |   .'____.' | | ",
    " | | | \\___) | _| |_ / /____   | | ",
    " | |  \\_____.'|_____||_______| | | "
    },{
    " | |  _____   ______    _____  | | ",
    " | | / ___ `.|  ____| .' ___ \\ | | ",
    " | ||_/___) || |___   | |___\\_|| | ",
    " | | .'____.''_.___''.| '___`'.| | ",
    " | | / /____ | \\___) || (___) || | ",
    " | ||_______| \\_____.''._____.'| | "
    },{
    " | |  __     _____      ____   | | ",
    " | | /  |   / ___ `.  .' __ '. | | ",
    " | | `| |  |_/___) |  | (__) | | | ",
    " | |  | |   .'____.'  .`____'. | | ",
    " | | _| |_  / /____  | (____) || | ",
    " | ||_____||_______| `.______.'| | "
    },{
    " | |     ______    _    _      | | ",
    " | |   .' ____ \\  | |  | |     | | ",
    " | |   | |____\\_| | |__| |_    | | ",
    " | |   | '____`'. |____   _|   | | ",
    " | |   | (____) |     _| |_    | | ",
    " | |   '.______.'    |_____|   | | "
    },{
    " | |      ______    _____      | | ",
    " | |     / ____ `. / ___ `.    | | ",
    " | |     `'  __) ||_/___) |    | | ",
    " | |     _  |__ '. .'____.'    | | ",
    " | |    | \\____) |/ /____      | | ",
    " | |     \\______.'|_______|    | | "
    },{
    " | |      __      ______       | | ",
    " | |     /  |   .' ____ \\      | | ",
    " | |     `| |   | |____\\_|     | | ",
    " | |      | |   | '____`'.     | | ",
    " | |     _| |_  | (____) |     | | ",
    " | |    |_____| '.______.'     | | "
    },{
    " | |            ____           | | ",
    " | |          .' __ '.         | | ",
    " | |          | (__) |         | | ",
    " | |          .`____'.         | | ",
    " | |         | (____) |        | | ",
    " | |         `.______.'        | | "
    },{
    " | |          _    _           | | ",
    " | |         | |  | |          | | ",
    " | |         | |__| |_         | | ",
    " | |         |____   _|        | | ",
    " | |             _| |_         | | ",
    " | |            |_____|        | | "
    },{
    " | |           _____           | | ",
    " | |          / ___ `.         | | ",
    " | |         |_/___) |         | | ",
    " | |          .'____.'         | | ",
    " | |         / /____           | | ",
    " | |         |_______|         | | "
    },{
    " | |                           | | ",
    " | |                           | | ",
    " | |                           | | ",
    " | |                           | | ",
    " | |                           | | ",
    " | |                           | | "
    }};

cout << "  .-----------------------------.    .-----------------------------.    .-----------------------------.    .-----------------------------.  \n";
cout << " | .---------------------------. |  | .---------------------------. |  | .---------------------------. |  | .---------------------------. | \n";
cout <<          DigitView[N[0]][0]        <<       DigitView[N[1]][0]        <<        DigitView[N[2]][0]       <<        DigitView[N[3]][0]      << endl;
cout <<          DigitView[N[0]][1]        <<       DigitView[N[1]][1]        <<        DigitView[N[2]][1]       <<        DigitView[N[3]][1]      << endl;
cout <<          DigitView[N[0]][2]        <<       DigitView[N[1]][2]        <<        DigitView[N[2]][2]       <<        DigitView[N[3]][2]      << endl;
cout <<          DigitView[N[0]][3]        <<       DigitView[N[1]][3]        <<        DigitView[N[2]][3]       <<        DigitView[N[3]][3]      << endl;
cout <<          DigitView[N[0]][4]        <<       DigitView[N[1]][4]        <<        DigitView[N[2]][4]       <<        DigitView[N[3]][4]      << endl;
cout <<          DigitView[N[0]][5]        <<       DigitView[N[1]][5]        <<        DigitView[N[2]][5]       <<        DigitView[N[3]][5]      << endl;
cout << " | |                           | |  | |                           | |  | |                           | |  | |                           | | \n";
cout << " | '---------------------------' |  | '---------------------------' |  | '---------------------------' |  | '---------------------------' | \n";
cout << "  '-----------------------------'    '-----------------------------'    '-----------------------------'    '-----------------------------'  \n";
}
void Num_Disp_Setup(int *N){
    for (int i = 0; i < 4; i++) {
        switch (N[i]){
            case 2: N[i] = 10; break;
            case 4: N[i] = 9; break;
            case 8: N[i] = 8; break;
            case 16: N[i] = 7; break;
            case 32: N[i] = 6; break;
            case 64: N[i] = 5; break;
            case 128: N[i] = 4; break;
            case 256: N[i] = 3; break;
            case 512: N[i] = 2; break;
            case 1024: N[i] = 1; break;
            case 2048: N[i] = 0; break;
            default: N[i] = 11; break;
        }
    } 
    Disp(N);
}
void show(int (*grid)[4]) {
    int Num_To_Display[4] = {0,0,0,0};
    for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			Num_To_Display[j] = grid[i][j];
		}
        Num_Disp_Setup(Num_To_Display);
	} 
}

#endif

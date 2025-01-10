#include <iostream>
#include <windows.h>
#include "gameOver.h"

using namespace std;


void gameOver() {
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

    cout << R"(
        .g8"""bgd       db      `7MMM.     ,MMF'`7MM"""YMM 
        .dP'     `M      ;MM:       MMMb    dPMM    MM    `7 
        dM'       `     ,V^MM.      M YM   ,M MM    MM   d   
        MM             ,M  `MM      M  Mb  M' MM    MMmmMM   
        MM.    `7MMF'  AbmmmqMA     M  YM.P'  MM    MM   Y  ,
        `Mb.     MM   A'     VML    M  `YM'   MM    MM     ,M
        `"bmmmdPY .AMA.   .AMMA..JML. `'  .JMML..JMMmmmmMMM
                                                            
                                                            
                                                            
                                                            
        .g8""8q.`7MMF'   `7MF'`7MM"""YMM  `7MM"""Mq.       
        .dP'    `YM.`MA     ,V    MM    `7    MM   `MM.      
        dM'      `MM VM:   ,V     MM   d      MM   ,M9       
        MM        MM  MM.  M'     MMmmMM      MMmmdM9        
        MM.      ,MP  `MM A'      MM   Y  ,   MM  YM.        
        `Mb.    ,dP'   :MM;       MM     ,M   MM   `Mb.      
        `"bmmd"'      VF      .JMMmmmmMMM .JMML. .JMM.    
        )";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    cout << "This will close in 5 seconds" << endl;
    Sleep(5000);
    exit(0); 
}
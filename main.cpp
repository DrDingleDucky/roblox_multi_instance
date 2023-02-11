#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    std::cout << "                                     ---| Multi Roblox Instance |----" << std::endl;
    std::cout << "WARNING: All Roblox instances need to be closed before running this program. Otherwise, it will not work. " << std::endl;
    std::cout << "" << std::endl;

    CreateMutexA(NULL, TRUE, "ROBLOX_singletonMutex");

    std::string command;

    while(true)
    {
        std::cout << "Type 'quit' or close the terminal to exit. -> ";
        std::cin >> command;

        if(command == "quit") 
        {
            break;
        }
    }

    return 0;
}
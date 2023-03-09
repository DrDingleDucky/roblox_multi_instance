#include <iostream>
#include <Windows.h>

int main()
{
    std::string command;

    std::cout << "                                     ---| Multi Roblox Instance |---" << std::endl;
    std::cout << "WARNING: All Roblox instances need to be closed before running this program. Otherwise, it will not work. " << std::endl;
    std::cout << "" << std::endl;

    CreateMutexA(NULL, TRUE, "ROBLOX_singletonMutex");

    std::cout << "say something to quit: -> ";
    std::cin >> command;
    
    return 0;
}
#include <windows.h>
#include <iostream>
#include <mmsystem.h>
#include <string>

#pragma comment(lib, "winmm.lib")

int main() {
    std::cout << "PlayingFunkyMusic\n";

     PlaySound(TEXT("Funky.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
       
    

    

    std::cin.get();
    return 0;
}

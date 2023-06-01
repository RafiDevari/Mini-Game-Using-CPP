#include <iostream>
#include <conio.h>
#include <Windows.h>

int main() {
    std::cout << "Press any key to trigger the code..." << std::endl;
    Sleep(500);
    if (_kbhit()) {
        char key = _getch();
        std::cout << "Key '" << key << "' is pressed!" << std::endl;

        // Your code to execute when a key is pressed goes here...
    }
    else {
        std::cout << "No key is pressed. Program continues..." << std::endl;

        // Your code to execute when no key is pressed goes here...
    }

    // Rest of your program...

    return 0;
}
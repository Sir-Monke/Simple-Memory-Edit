#include <iostream>
#include <windows.h>
#include <stdio.h>


int health = 100;

int main()
{
	std::cout << "Easy Memory Edit Example By KosH\n" << "Press F4 to decrease health\n";
	while (true) {
		if (GetAsyncKeyState(VK_F4) & 1) {
			health = health - 7;
			std::cout << health << "\n";
		}
		if (health <= 2) {
			std::cout << "health going back to 100\n";
			health = 100;
			std::cout << health << "\n";
		}
		if (GetAsyncKeyState(VK_F3) & 1) {
			return 0;
		}
	}
}

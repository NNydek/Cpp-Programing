/*
Created by: Pawel Wyszynski
Date: 03.12.2020

Auto Clicker

*/

#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main() {
	int x = 0;
	int y = 0;
	int numberOfClicks;
	int delay;
	char choice;

	cout << "Number of clicks: ";
	cin >> numberOfClicks;
	
	cout << "Delay between click in ms (min. 5): ";
	cin >> delay;

	cout << "Start in 5. . .\n";
	Sleep(1000);
	cout << "Start in 4. . .\n";
	Sleep(1000);
	cout << "Start in 3. . .\n";
	Sleep(1000);
	cout << "Start in 2. . .\n";
	Sleep(1000);
	cout << "Start in 1. . .\n";
	Sleep(1000);

	while(true) {
		for (int i = 0; i < numberOfClicks; ++i) {
			Sleep(delay);
			mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
		}
		cout << "Restart? y / n \n";

		choice = _getch();
		if (choice == 'y') {
			cout << "Start in 3. . .\n";
			Sleep(1000);
			cout << "Start in 2. . .\n";
			Sleep(1000);
			cout << "Start in 1. . .\n";
			Sleep(1000);
			continue;
		}
		else
			break;
	}
	cout << "End of program\n";

}
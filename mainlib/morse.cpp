#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

int main()
{
	Beep(550,80);
	Beep(550,80);
	Beep(550,300);
	Beep(550,80);
	sleep(.5);
	Beep(550,80);
	Beep(550,80);
	Beep(550,300);
	sleep(.5);
	Beep(550,300);
	Beep(550,80);
	Beep(550,300);
	Beep(550,80);
	sleep(.5);
	Beep(550,300);
	Beep(550,80);
	Beep(550,80);
	cin.get();
	return 0;	
}

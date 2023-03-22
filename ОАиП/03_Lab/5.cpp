#include <iostream>
#include <windows.h>
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[60];
	puts("Как вас зовут?");
	gets_s(name);
	printf("Привет, %s\n", name);
	puts("Где учишься?");
	gets_s(name);
	printf("Ого, я тоже учусь в %s\n", name);
}
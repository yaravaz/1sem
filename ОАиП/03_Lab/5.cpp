#include <iostream>
#include <windows.h>
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[60];
	puts("��� ��� �����?");
	gets_s(name);
	printf("������, %s\n", name);
	puts("��� �������?");
	gets_s(name);
	printf("���, � ���� ����� � %s\n", name);
}
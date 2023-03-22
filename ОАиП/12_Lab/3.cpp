#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <iostream>
#include <string>


using namespace std;


int main()
{
	SetConsoleCP(866);
	SetConsoleOutputCP(866);
	char strFirst[60];
	gets_s(strFirst);
	char* tempFirst = strtok(strFirst, " !,");
	char arr[60][60];
	int i = 0;
	while (tempFirst != NULL)
	{
		strcpy(arr[i], tempFirst);
		i++;
		tempFirst = strtok(NULL, " !,");
	}
	int firstCount = i;
	i = 0;


	for (i = 0; i < firstCount; i++)
	{
		for (int j = 0; j < firstCount; j++)
		{
			if (strcmp(arr[i], arr[j]) == 0 && i != j)
			{
				strcpy(arr[i], " ");
			}
		}
	}

	for (i = 0; i < firstCount; i++)
		cout << arr[i] << " ";
}
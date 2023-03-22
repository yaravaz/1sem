#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[1000], m[10], buf[80], * p;
	int i, k, len;
	cout << "¬ведите строку:\n";
	gets_s(s);
	cout << "\n¬ведите окончание:\n";
	gets_s(m); cout << "\n";
	len = strlen(s);
	i = 0;

	while (i < len)
	{
		while (s[i] == ' ' && i < len) 
			i++;
		strcpy(buf, "");
		k = 0;
		while (s[i] != ' ' && i < len)
			buf[k++] = s[i++];
		buf[k] = '\0';
		p = strstr(buf, m);
		if (p) 
			cout << buf << "\n";
		i++;
	}
	_CRT_SECURE_NO_WARNINGS;
	return 0;
}
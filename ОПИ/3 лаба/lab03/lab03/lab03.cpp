#include <iostream>
//VovnaYaroslava2004
// CP-1251 56 6F 76 6E 61 59 61 72 6F 73 6C 61 76 61 32 30 30 34
// UTF-8 56 6F 76 6E 61 59 61 72 6F 73 6C 61 76 61 32 30 30 34
// UTF-16 0056 006F 0076 006E 0061 0059 0061 0072 006F 0073 006C 0061 0076 0061 0032 0030 0030 0034

//¬овнаярослава–услановна2004
// CP-1251 C2 EE E2 ED E0 DF F0 EE F1 EB E0 E2 E0 D0 F3 F1 EB E0 ED EE E2 EE E0 32 30 30 34
// UTF-8 D092 D0BE D0B2 D0BD D0B0 D0AF D180 D0BE D181 D0BB D0B0 D0B2 D0B0 D0A0 D183 D181 D0BB D0B0 D0BD D0BE D0B2 D0BD D0B0 32 30 30 34
// UTF-16 0412 043E 0432 043D 0430 042F 0440 043E 0441 043B 0430 0432 0430 0420 0443 0441 043B 0430 043d 043e 0432 043d 0430 0032 0030 0030 0034

//¬овна2004Yaroslava
// CP-1251 C2 EE E2 ED E0 32 30 30 34 59 61 72 6F 73 6C 61 76 61
// UTF-8 D092 D0BE D0B2 D0BD D0B0 32 30 30 34 59 61 72 6F 73 6C 61 76 61
// UTF-16 0412 043E 0432 043D 0430 0032 0030 0030 0034 0059 0061 0072 006F 0073 006C 0061 0076 0061

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "VovnaYaroslava2004";
	char rfie[] = "¬овнаярослава–услановна2004";
	char lr[] = "¬овна2004Yaroslava";

	wchar_t Lfie[] = L"VovnaYaroslava";
	wchar_t Rfie[] = L"¬овнаярослава–услановна2004";
	wchar_t LR[] = L"¬овна2004Yaroslava";

	cout << hello << lfie << endl;
	return 0;
}
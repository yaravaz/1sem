#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Rus");
    int n, count = 0;
    string text, str;
    cout << "¬ведите текст "; getline(cin, text);
    n = text.size();
    text = text + " ";
    for (int i = 0; i <= n; i++) {
        if (text[i] != ' ') {
            str = str + text[i];
        }
        else {
            count++;
            if (count % 2 == 0)
            {
                reverse(str.begin(), str.end());
                cout << str << " ";
            }
            str = "";
        }
    }
    return 0;
}
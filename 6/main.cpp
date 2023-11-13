#include <iostream>
#include <string>
#include <exception>

using namespace std;

void validateString(string s)
{
    if (s.size() == 5) return;
    throw new exception();
}

void validateVertical(char c)
{
    if (c >= 'A' && c <= 'H') return;
    throw new exception();
}

void validateHorizontal(char c)
{
    if (c >= '1' && c <= '8') return;
    throw new exception();
}

void validateDelimiter(char c)
{
    if (c == '-') return;
    throw new exception();
}

int main()
{
    string s;
    cin >> s;
    try
    {
        validateString(s);
        validateHorizontal(s[1]);
        validateHorizontal(s[4]);
        validateVertical(s[0]);
        validateVertical(s[3]);
        validateDelimiter(s[2]);

        int dx = abs(s[0] - s[3]);
        int dy = abs(s[1] - s[4]);
        if (dx && dy && dx + dy == 3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    catch (...)
    {
        cout << "ERROR\n";
    }
    

}
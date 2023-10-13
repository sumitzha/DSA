#include <iostream>
using namespace std;

string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void spell(int n)
{
    if (n == 0)
        return;
    int digit = n % 10;
    n = n / 10;
    spell(n);
    cout << str[digit] << " ";
}

int main()
{
    int n;
    cin >> n;
    spell(n);
    return 0;
}
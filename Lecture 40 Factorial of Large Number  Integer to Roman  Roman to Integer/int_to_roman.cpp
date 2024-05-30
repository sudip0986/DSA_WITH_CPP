#include <iostream>
#include <string>
using namespace std;

string num(int x, int* a)
{
    if (x >= 1000) {
        *a = x - 1000;
        return "M";
    } else if (x >= 900) {
        *a = x - 900;
        return "CM";
    } else if (x >= 500) {
        *a = x - 500;
        return "D";
    } else if (x >= 400) {
        *a = x - 400;
        return "CD";
    } else if (x >= 100) {
        *a = x - 100;
        return "C";
    } else if (x >= 90) {
        *a = x - 90;
        return "XC";
    } else if (x >= 50) {
        *a = x - 50;
        return "L";
    } else if (x >= 40) {
        *a = x - 40;
        return "XL";
    } else if (x >= 10) {
        *a = x - 10;
        return "X";
    } else if (x >= 9) {
        *a = x - 9;
        return "IX";
    } else if (x >= 5) {
        *a = x - 5;
        return "V";
    } else if (x >= 4) {
        *a = x - 4;
        return "IV";
    } else if (x >= 1) {
        *a = x - 1;
        return "I";
    } else {
        return "";
    }
}

int main()
{
    int x;
    cin >> x;

    string roman;
    while (x != 0) {
        roman += num(x, &x);
    }

    cout << roman;
    return 0;
}

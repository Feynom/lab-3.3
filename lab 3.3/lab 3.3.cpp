
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y, r;
    
    cout << "Введіть значення х:";
    cin >> x;
    cout << endl;
    cout << "Введіть значення R:";
    cin >> r;
    cout << endl;

    if (x <= -r)
        y = r;
    else
        if (-r <= x && x <= r)
            y = -sqrt(r * r - x * x) + r;
        else
            if (r <= x && x < 6)
                y = (-3 * x - r * x + 9 * r) / (6 - r);
            else
                y = x - 9;

    cout << "Значення у = " << y << endl;

    cin.get();
    return 0;
}

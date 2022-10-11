// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Докинем суда изменений 

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    cout << "Write x, y\n";
    cin >> x >> y;
    //пункт 1
    ///*
    if (x == 0 && y == 0) {
        cout << "Uncorrect data";
    }
    else {
        cout << "1)" << ((1 + abs(x * y)) / (abs(x) + abs(y))) << "\n";
    }
    //*/
    // пункт 2
    cout << "2)" << (x + y) / sqrt(x * x + y * y) << "\n";

    //пункт 3
    cout << "3)" << x * y / (abs(x) + abs(y)) << "\n";

    //пункт 4
    cout << "4)" << sqrt(x * x + 1) / sqrt(abs(x) + abs(y)) << "\n";
    return 0;
}

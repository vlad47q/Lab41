// Lab41.cpp
// Скоропад Владислав
// Лабораторна робота № 4.1
// Цикли.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, k, i;

    double res = 0;

    cout << "N = "; cin >> N;

    bool doWhileException = false;

    k = 1;

    i = k;
    while (i <= N) {
        res += (1 + sqrt(1 + pow(k, 2))) / (pow(k, 2));
        i++;
    }
    cout << "1) Result is: " << res << endl;


    i = k;
    res = 0;
    do {
        if (!(i <= N)) {
            doWhileException = true;
        }
        res += (1 + sqrt(1 + pow(k, 2))) / (pow(k, 2));
        i++;
    } while (i <= N);
    cout << "2) Result is: " << res << endl;


    res = 0;
    for (int i = k; i <= N; i++) {
        res += (1 + sqrt(1 + pow(k, 2))) / (pow(k, 2));
    }
    cout << "3) Result is: " << res << endl;


    res = 0;
    for (int i = N; i >= k; i--) {
        res += (1 + sqrt(1 + pow(k, 2))) / (pow(k, 2));
    }
    cout << "4) Result is: " << res << endl << endl;

    if (doWhileException) {
        cout << "Do-while broke my code, but i know how to fix it :D" << endl << endl;
    }
}

#include <iostream>
#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <io.h>
#include <fcntl.h>
#endif

int main()
{
#ifdef _WIN32
    setlocale(LC_ALL,"");
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
#else
    std::ios_base::sync_with_stdio(false);
    std:wcout.imbue(std::locale("en_US.UTF-8"));
    std:wcin.imbue(std::locale("en_US.UTF-8"));
#endif

using namespace std;


    int a;
    cout << "Введите начальное число a: ";
    cin >> a;

    int sum = 0;
    int current = a;

    do {
        if (current > 500) break; // если a > 500, цикл не начнется
        sum += current;
        current++;
    } while (current <= 500);
    
    cout << "Сумма чисел от " << a << " до 500 равна " << sum << endl;

    return 0;
}

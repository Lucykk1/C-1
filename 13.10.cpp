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
    /*std::wcout<<L"Введите число: "<<std::endl;
    int num=0;
    std::wcin>>num;
    switch (num){
    case 1:
        std::wcout<<L"Понедельник"<<std::endl;
        break;
    case 2:
        std::wcout<<L"вторник"<<std::endl;
        break;
    case 3:
        std::wcout<<L"среда"<<std::endl;
        break;
    case 4:
        std::wcout<<L"четверг"<<std::endl;
        break;
    case 5:
        std::wcout<<L"пятница"<<std::endl;
        break;
    case 6:
        std::wcout<<L"суббота"<<std::endl;
        break;
    case 7:
        std::wcout<<L"воскресенье"<<std::endl;
        break;
    default:
        std::wcout<<L"error!"<<std::endl;
    }*/
   /* std::wcout<<L"Введите число: "<<std::endl;
    int n;
    std::wcin>>n;
    switch (n){
    case 1: case 2: case 12:
        std::wcout<<L"Зима"<<std::endl;
        break;
    case 3: case 4: case 5:
        std::wcout<<L"весна"<<std::endl;
        break;
    case 6: case 7: case 8:
        std::wcout<<L"лето"<<std::endl;
        break;
    case 9 :
        std::wcout<<L"осень"<<std::endl;
        break;
    case 10:
        std::wcout<<L"осень"<<std::endl;
        break;
    case 11 :
        std::wcout<<L"осень"<<std::endl;
        break;
    default:
        std::wcout<<L"error!"<<std::endl;
    }
}
*/

    std::wcout << L"Единицы длины:" << std::endl;
    std::wcout << L"0 - миллиметр" << std::endl;
    std::wcout << L"1 - сантиметр" << std::endl;
    std::wcout << L"2 - дециметр" << std::endl;
    std::wcout << L"3 - метр" << std::endl;
    std::wcout << L"4 - километр" << std::endl;

    enum LengthUnit {
        MILLIMETER = 0,
        CENTIMETER = 1,
        DECIMETER = 2,
        METER = 3,
        KILOMETER = 4
    };
    int unitNumber;
    double length, lengthInMeters;

    std::wcout << L"\nВведите номер единицы измерения: ";
    std::wcin >> unitNumber;

    std::wcout << L"Введите длину отрезка: ";
    std::wcin >> length;

    LengthUnit selectedUnit = static_cast<LengthUnit>(unitNumber);
    switch(selectedUnit) {
    case MILLIMETER:
        lengthInMeters = length / 1000.0;
        std::wcout << L"Вы выбрали миллиметры. "<<std::endl;
        break;
    case CENTIMETER:
        lengthInMeters = length / 100.0;
        std::wcout << L"Вы выбрали сантиметры. "<<std::endl;
        break;
    case DECIMETER:
        lengthInMeters = length / 10.0;
        std::wcout << L"Вы выбрали дециметры. "<<std::endl;
        break;
    case METER:
        lengthInMeters = length;
        std::wcout << L"Вы выбрали метры. "<<std::endl;
        break;
    case KILOMETER:
        lengthInMeters = length * 1000.0;
        std::wcout << L"Вы выбрали километры. "<<std::endl;
        break;
    default:
        std::wcout << L"Ошибка: неверный номер единицы измерения!" << std::endl;
        return 1;
    }
    std::wcout << L"Длина отрезка в метрах: " << lengthInMeters << std::endl;

    return 0;
}

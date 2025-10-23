Написать программу. Пользователь вводит количество чисел, а затем сами целые числа. Если в последовательности чисел, которые ввёл пользователь есть только один ноль, то программа выводит на экран сумму всех чисел от этого 0 до конца последовательности. Если в последовательности чисел 2 и более 0-й, то программа выводит на экран сумму всех чисел между первыми двумя нулями. Если в последовательности чисел ни одного нуля, то программа выводит сообщение «Сумма чисел между первыми двумя нулями: 0.»
#include <iostream>
#include <vector>
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


        int n;
        std::wcout << L"Введите количество чисел: ";
        std::wcin >> n;

        int num;
        int countZeros = 0;           
        int sumBetween = 0;           
        int sumFromFirstZero = 0;    
        bool afterFirstZero = false;   
        bool afterSecondZero = false;  

        int i = 0;
        while (i < n) {
            std::wcout << L"Введите число: ";
            std::wcin >> num;

            if (num == 0) {
                countZeros++;

                if (countZeros == 1) {
                    afterFirstZero = true;
                    sumFromFirstZero = 0;  
                }
                else if (countZeros == 2) {
                    afterSecondZero = true;
                 
                    sumBetween = sumFromFirstZero;
                }
            }
            else {
                if (afterFirstZero) {
                    sumFromFirstZero += num;
                    if (afterSecondZero) {
                       
                    }
                    else {
                 
                        sumBetween += num;
                    }
                }
            }

            i++;
        }

        
        if (countZeros == 1) {
            std::wcout << L"Сумма чисел от нуля до конца последовательности: " << sumFromFirstZero << std::endl;
        }
        else if (countZeros >= 2) {
            std::wcout << L"Сумма чисел между первыми двумя нулями: " << sumBetween << std::endl;
        }
        else {
            std::wcout << L"Сумма чисел между первыми двумя нулями: 0." << std::endl;
        }

        return 0;
    }



2)   int n;
        std::wcout << L"Введите количество чисел: ";
        std::wcin >> n;

        int num;
        int countZeros = 0;
        int sumBetween = 0;


        int i = 0;
        while (i < n) {
            std::wcout << L"Введите число: ";
            std::wcin >> num;

            switch(countZeros){
            case 0:{
                if (num == 0) countZeros = 1;
                break;
            }
            case 1:{
                sumBetween += num;
                if (num == 0) countZeros = 2;
                break;
            }
            }

            i++;
        }
 std::wcout << L"Сумма чисел между первыми двумя нулями: " << sumBetween << L'.'<< std::endl;


        return 0;
    }


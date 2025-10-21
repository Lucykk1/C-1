  int n;
    std::wcout << L"Введите количество чисел: ";
    std::wcin >> n;

    if (n <= 0) {
        std::wcout << L"Количество чисел должно быть положительным" << std::endl;
        return 1;
    }
    int prev, current;
    std::wcout << L"Введите первое число: ";
    std::wcin >> prev;

    int i = 1;
    while (i < n) {
        std::wcout << L"Введите следующее число: ";
        std::wcin >> current;
        if (current < prev) {
            std::wcout << L"Число " << current << L" меньше предыдущего (" << prev << ")" << std::endl;
        }
        prev = current;
        i++;
    }
    return 0;
}


8)

        wchar_t symbol;
        unsigned int count;


        std::wcout << L"Введите символ: ";
        std::wcin >> symbol;


        std::wcout << L"Введите неотрицательное число: ";
        std::wcin >> count;


        if (count < 0) {
            std::wcout << L"Число должно быть неотрицательным." << std::endl;
            return 1;
        }


        unsigned int i = 1;



        i = 1;
        std::wcout << L"\nВывод :\n";


        do {
            for (unsigned int j = 0; j < i; ++j) {
                std::wcout << symbol;
            }
            std::wcout << L"\n";
            ++i;
        } while (i <= count);

        return 0;
    }
       int n;
        std::wcout << L"Введите количество чисел: ";
        std::wcin >> n;

        if (n <= 0) {
            std::wcout << L"Количество чисел должно быть положительным." << std::endl;
            return 0;
        }

        int prev, current;
        bool is_ordered = true;


        std::wcout << L"Введите число: ";
        std::wcin >> prev;

        int i = 1;


        while (i < n) {
            std::wcout << L"Введите число: ";
            std::wcin >> current;

            if (current < prev) {
                is_ordered = false;
            }
            prev = current;
            ++i;
        }


        if (is_ordered) {
            std::wcout << L"Введённые числа упорядочены по возрастанию." << std::endl;
        } else {
            std::wcout << L"Введённые числа не упорядочены по возрастанию." << std::endl;
        }

        return 0;
    }


10) Написать программу. Пользователь вводит количество чисел, а затем сами целые числа. Программа выводит на экран сообщение о том, являются ли введённые числа упорядоченными по-убыванию.

11) Написать программу. Пользователь вводит количество чисел, а затем сами целые числа. Если в последовательности чисел, которые ввёл пользователь есть только

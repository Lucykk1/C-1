
void analyzeNumber(const std::wstring& numberStr) {
    int digitCount = 0;
    int sumDigits = 0;
    int zeroCount = 0;

    for (wchar_t ch : numberStr) {
        if (iswdigit(ch)) {
            int digit = ch - L'0';
            digitCount++;
            sumDigits += digit;
            if (digit == 0) {
                zeroCount++;
            }
        }
    }
    
    double average = (digitCount > 0) ? static_cast<double>(sumDigits) / digitCount : 0;

    std::wcout << L"\nРезультаты анализа числа: " << numberStr << L"\n";
    std::wcout << L"Количество цифр: " << digitCount << L"\n";
    std::wcout << L"Сумма цифр: " << sumDigits << L"\n";
    std::wcout << L"Среднее арифметическое: " << average << L"\n";
    std::wcout << L"Количество нулей: " << zeroCount << L"\n";
}

int main() {
   
    std::locale::global(std::locale(""));

    int choice;
    std::wstring inputNumber;

    do {
        std::wcout << L"\nМеню:\n";
        std::wcout << L"1. Ввести число и выполнить анализ\n";
        std::wcout << L"2. Выход\n";
        std::wcout << L"Введите ваш выбор: ";
        std::wcin >> choice;

        if (choice == 1) {
            std::wcout << L"Введите число: ";
            std::wcin >> inputNumber;
            analyzeNumber(inputNumber);
        }
        else if (choice == 2) {
            std::wcout << L"Выход из программы.\n";
        }
        else {
            std::wcout << L"Некорректный выбор. Попробуйте снова.\n";
        }

    } while (choice != 2);

    return 0;
}

    int count=0;
    int num1;

    do {
     std::wcout << L"Введите число " << (count + 1) << L": ";
     std::wcin >> num1;
     std::wcout << L"→ Вы ввели: " << num1 << std::endl;
        count++;
    } while (count < 10);

        std::wcout << L"Программа завершена." << std::endl;

            return 0;
        }

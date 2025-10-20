
        double pricePerKg;
        int kg = 1;


        std::wcout << L"Введите цену 1 кг конфет (в рублях): ";
        std::wcin >> pricePerKg;

        if (pricePerKg <= 0) {
            std::wcout << L"Ошибка: цена должна быть положительной!" << std::endl;
            return 1;
        }

        std::wcout << L"\nСтоимость конфет:\n";
        while (kg <= 10) {
            double totalCost = pricePerKg * kg;

            std::wcout << kg << L" кг: " << std::fixed << std::setprecision(2) << totalCost << L" руб." << std::endl;
            kg++;
        }

        return 0;
    }




    int price_per_kg;
    std::wcout << L"Введите цену 1 кг конфет (в рублях): ";
    std::wcin >> price_per_kg;


     std::wcout << L"\nСтоимость конфет:\n";


     int grams = 100;

    do {
            double kg = grams / 1000.0;
            double cost = price_per_kg * kg;

            std::wcout << grams << L" г: "
                       << std::fixed << std::setprecision(2)
                       << cost << L" руб.\n";

            grams += 100;
        } while (grams <= 1000);

        return 0;
    }


        int number;


        std::wcout << L"Введите целое число: ";
        std::wcin >> number;


        std::wcout << L"Введённое число: " << number << L"\n";


        int counter = 1;
        int step = 1;
        int current = number;

        do {

            if (step % 2 == 1) {
                current = number + step;
            } else {
                current = number - step;
            }


            std::wcout << current << L"\n";


            counter++;
            step++;
        } while (counter <= 10);

        return 0;
    }



/
    int number;
    std::wcout << L"Введите число от 100 до 999: ";
    std::wcin >> number;


    if (number < 100 || number > 999) {
        std::wcout << L"Ошибка! Число должно быть от 100 до 999." << std::endl;
        return 1;
    }


    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;

    std::wstring result;


    switch (hundreds) {
    case 1:
        result += L"сто";
        break;
    case 2:
        result += L"двести";
        break;
    case 3:
        result += L"триста";
        break;
    case 4:
        result += L"четыреста";
        break;
    case 5:
        result += L"пятьсот";
        break;
    case 6:
        result += L"шестьсот";
        break;
    case 7:
        result += L"семьсот";
        break;
    case 8:
        result += L"восемьсот";
        break;
    case 9:
        result += L"девятьсот";
        break;
    }


    if (tens == 1) {

        result += L" ";
        switch (units) {
        case 0:
            result += L"десять";
            break;
        case 1:
            result += L"одиннадцать";
            break;
        case 2:
            result += L"двенадцать";
            break;
        case 3:
            result += L"тринадцать";
            break;
        case 4:
            result += L"четырнадцать";
            break;
        case 5:
            result += L"пятнадцать";
            break;
        case 6:
            result += L"шестнадцать";
            break;
        case 7:
            result += L"семнадцать";
            break;
        case 8:
            result += L"восемнадцать";
            break;
        case 9:
            result += L"девятнадцать";
            break;
        }
    } else {

        if (tens > 0) {
            result += L" ";
            switch (tens) {
            case 2:
                result += L"двадцать";
                break;
            case 3:
                result += L"тридцать";
                break;
            case 4:
                result += L"сорок";
                break;
            case 5:
                result += L"пятьдесят";
                break;
            case 6:
                result += L"шестьдесят";
                break;
            case 7:
                result += L"семьдесят";
                break;
            case 8:
                result += L"восемьдесят";
                break;
            case 9:
                result += L"девяносто";
                break;
            }
        }


        if (units > 0) {
            result += L" ";
            switch (units) {
            case 1:
                result += L"один";
                break;
            case 2:
                result += L"два";
                break;
            case 3:
                result += L"три";
                break;
            case 4:
                result += L"четыре";
                break;
            case 5:
                result += L"пять";
                break;
            case 6:
                result += L"шесть";
                break;
            case 7:
                result += L"семь";
                break;
            case 8:
                result += L"восемь";
                break;
            case 9:
                result += L"девять";
                break;
            }
        }
    }


    std::wcout << number << L" - \"" << result << L"\"" << std::endl;

    return 0;
}

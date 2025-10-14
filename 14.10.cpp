
    using namespace std;



        wchar_t symbol;

        wcout << L"Введите символ: ";
        wcin >> symbol;


        if ((symbol >= L'А' && symbol <= L'Я') || (symbol >= L'а' && symbol <= L'я')) {
            wstring vowel = L"аеёиоуыэюяАЕЁИОУЫЭЮЯ";

            if (vowel.find(symbol) != wstring::npos) {
                if (symbol >= L'А' && symbol <= L'Я') {
                    wcout << L"это буква русская заглавная гласная" << endl;
                } else {
                    wcout << L"это буква русская строчная гласная" << endl;
                }
            }

            else {
                if (symbol >= L'А' && symbol <= L'Я') {
                    wcout << L"это буква русская заглавная согласная" << endl;
                } else {
                    wcout << L"это буква русская строчная согласная" << endl;
                }
            }
        }

        else if ((symbol >= L'A' && symbol <= L'Z') || (symbol >= L'a' && symbol <= L'z')) {
            wstring vowel = L"aeiouyAEIOUY";


            if (vowel.find(symbol) != wstring::npos) {
                if (symbol >= L'A' && symbol <= L'Z') {
                    wcout << L"это буква латинская заглавная гласная" << endl;
                } else {
                    wcout << L"это буква латинская строчная гласная" << endl;
                }
            }

            else {
                if (symbol >= L'A' && symbol <= L'Z') {
                    wcout << L"это буква латинская заглавная согласная" << endl;
                } else {
                    wcout << L"это буква латинская строчная согласная" << endl;
                }
            }
        }

        else if (symbol >= L'0' && symbol <= L'9') {
            wcout << L"это цифра" << endl;
        }

        else {
            wcout << L"это не буква и не цифра" << endl;
        }

        return 0;
    }



    double a, b,c;

        std::wcout << L"Программа для решения квадратного уравнения вида: ax² + bx + c = 0" << std::endl;
        // std::wcout << L"a " << std::endl;
        // std::wcout << L"b " << std::endl;
        // std::wcout << L"c " << std::endl;
        std::wcout << std::endl;


        std::wcout << L"Введите коэффициент a: ";
        std::wcin >> a;

        std::wcout << L"Введите коэффициент b: ";
        std::wcin >> b;
        std::wcout << L"Введите коэффициент c: ";
        std::wcin >> c;



        std::wcout << L"Ваше уравнение: " << a << L"x² + " << b << L"x + " << c << L" = 0" << std::endl;
        std::wcout << std::endl;


        double D = b * b - 4 * a * c;
        std::wcout << L"Дискриминант D = " << b << L"² - 4*" << a << L"*" << c << L" = " << D << std::endl;
        std::wcout << std::endl;


        if (D > 0) {

            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);

            std::wcout << L"Уравнение имеет два корня:" << std::endl;
            std::wcout << L"x1 = (-" << b << L" + sqrt" << D << L") / (2*" << a << L") = " << x1 << std::endl;
            std::wcout << L"x2 = (-" << b << L" - sqrt " << D << L") / (2*" << a << L") = " << x2 << std::endl;
        }
        else if (D == 0) {

            double x = -b / (2 * a);
            std::wcout << L"Уравнение имеет один корень:" << std::endl;
            std::wcout << L"x = -" << b << L" / (2*" << a << L") = " << x << std::endl;
        }
        else {

            std::wcout << L"Уравнение не имеет действительных корней (D < 0)" << std::endl;
        }

        return 0;
}


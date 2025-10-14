
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

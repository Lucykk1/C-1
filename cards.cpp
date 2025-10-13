 enum Suit {
        SPADES = 0,    // пики
        CLUBS = 1,     // трефы
        DIAMONDS = 2,  // бубны
        HEARTS = 3     // черви
    };




    int suit, rank;

    std::wcout << L"Введите масть карты (0-пики, 1-трефы, 2-бубны, 3-черви): ";
        std::wcin >> suit;

        std::wcout << L"Введите достоинство карты (2-10, 11-валет, 12-дама, 13-король, 14-туз): ";
        std::wcin >> rank;


        std::wstring rankName;
        switch (rank) {
        case 2:
            rankName = L"двойка";
            break;
        case 3:
            rankName = L"тройка";
            break;
        case 4:
            rankName = L"четверка";
            break;
        case 5:
            rankName = L"пятерка";
            break;
        case 6:
            rankName = L"шестерка";
            break;
        case 7:
            rankName = L"семерка";
            break;
        case 8:
            rankName = L"восьмерка";
            break;
        case 9:
            rankName = L"девятка";
            break;
        case 10: rankName = L"десятка";
            break;
        case 11:
            rankName = L"валет";
            break;
        case 12:
            rankName = L"дама";
            break;
        case 13:
            rankName = L"король";
            break;
        case 14:
            rankName = L"туз";
            break;
        default:
            rankName = L"неизвестная карта";
            break;
        }


        std::wstring suitName;
        switch (suit) {
        case SPADES:
            suitName = L"пик";
            break;
        case CLUBS:
            suitName = L"треф";
            break;
        case DIAMONDS:
            suitName = L"бубен";
            break;
        case HEARTS:
            suitName = L"червей";
            break;
        default:
            suitName = L"неизвестной масти";
            break;
        }


        std::wcout << L"\nРезультат: " << rankName << L" " << suitName << std::endl;

}





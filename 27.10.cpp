1)
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
    std::wcout<<L"цифры от 1 до 10"<<std::endl;
    for (int i = 1; i<=10; i++) {
        std::wcout<<i<<std::endl;
    }
    for (int a = 10; a>=1;a--){
        std::wcout<<a<<std::endl;
    }
    std::wcout<<std::endl<<std::endl;
    return 0;}
2)

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
    std::wcout<<L"цифры от 1 до 20"<<std::endl;
    for (int i = 1; i<=20; i+=2) {
        std::wcout<<i<<std::endl;
    }
     std::wcout<<L"цифры от 20 до 1"<<std::endl;
    for (int a = 20; a>=1;a-=2){
        std::wcout<<a<<std::endl;
    }
    std::wcout<<std::endl<<std::endl;
    return 0;}

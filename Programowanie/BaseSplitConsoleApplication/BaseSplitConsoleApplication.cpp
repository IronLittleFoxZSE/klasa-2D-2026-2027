#include <iostream>
#include "ConsoleMessages.h"


int main()
{
	showMessage();

	system("pause");
}

/*
PROCES BUDOWANIA PROGRAMU C++ (MSVC / VISUAL STUDIO)

Każdy plik .cpp jest przetwarzany osobno:
1. Preprocesor wykonuje dyrektywy, np. #include. Wstawia zawartość
   dołączanych nagłówków, rozwija makra i usuwa komentarze.
2. Kompilator przetwarza otrzymany kod i tworzy plik obiektowy .obj.
   Plik .cpp wraz z dołączonymi nagłówkami tworzy jednostkę translacji.
3. Linker łączy pliki .obj i potrzebne biblioteki w program .exe.
   Odnajduje m.in. definicję showMessage(), do której odwołuje się main().

ConsoleMessages.h zawiera deklarację showMessage(), a ConsoleMessages.cpp jej definicję.
Nagłówek pozwala skompilować wywołanie funkcji. Jej definicja musi być
następnie dostępna podczas linkowania. Pliku .h nie kompilujemy tutaj
osobno i nie podajemy go linkerowi. Nie dołączamy też ConsoleMessages.cpp
przez #include: jest on kompilowany jako osobny plik źródłowy.

C. POKAZANIE WSZYSTKICH ETAPÓW OSOBNO

Etap 1: zatrzymanie po preprocesorze i zapis jego wyniku do plików .i:

cl /nologo /EHsc /P BaseSplitConsoleApplication.cpp
cl /nologo /EHsc /P ConsoleMessages.cpp

Powstaną SplittingCodeIntoFilesConsoleApplication.i oraz ConsoleMessages.i.
Można je otworzyć w edytorze i zobaczyć treść dołączonych nagłówków.
Opcja /P zatrzymuje proces przed kompilacją: nie tworzy plików .obj.

Etap 2: kompilacja przygotowanych plików .i do plików .obj:

cl /nologo /EHsc /TP /c BaseSplitConsoleApplication.i
cl /nologo /EHsc /TP /c ConsoleMessages.i

Opcja /TP wskazuje, że wejściowy kod jest kodem C++, mimo rozszerzenia .i.

Etap 3: połączenie plików .obj i bibliotek w program .exe:

link /nologo /OUT:Program.exe BaseSplitConsoleApplication.obj ConsoleMessages.obj

*/
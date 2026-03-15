// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku Main.cpp
//  
// Prosze uzupelnic niniejsze kody tak, aby program wykonywal się a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.
// UWAGA !:
// 1) WYJĄTKOWO można modyfikować plik main.cpp, ale tylko w miejscu objętym przez znaczniki //[[[...//]]]:
// 2) Jedynymi dozwolonymi instrukcjami, których można używać poza ciałem jakiejkolwiek funkcji, są deklaracje zmiennych i, j, k (int),
//    które mogą (nie muszą) być poprzedzone słowami kluczowymi static lub extern, i które mogą (nie muszą) być inicjowane na 0 np.:
//    static int j = 0;
// 3) W funkcjach można używać jedynie:
//    a) instrukcji wymienionych w punkcie 2
//    b) cout << "----------\n"; (co najwyzej 2 razy w 1 funkcji)
//    c) cout << "<nazwa_zmiennej> = " << <nazwa_zmiennej> << "\n"; (co najwyzej 1 raz dla 1 zmiennej w 1 funkcji)    
//       np.: cout << "k = " << k << "\n"; 
//    d) <nazwa_zmiennej>++; (co najwyzej 1 raz dla 1 zmiennej w 1 funkcji)
//       np.: k++;
//    e) wywolania innej funkcji (co najwyzej 1 raz)
// 4) Nie nalezy definiowac zadnych innych nowych funkcji poza tymi, ktorych wywolania wystepuja od poczatku w plikach niniejszego programu 
// 5) Należy przynajmniej raz użyć każdego ze słów kluczowych: static, extern 
//
// Pliku Main.cpp nie wolno modyfikowac (za wyjatkiem sytuacji opisanej w pkt. 2).
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i Main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem labNN/ (gdzie NN to nr laboratorium np. lab01)
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar.gz
// * wszystkie funkcje w plikach *.h powinny być okomentowane zgodnie z wczesniej ustalonym wzorem (format pod Doxygena)
// * do szybkiej weryfikacji poprawnosci wyjscia mozna uzyc diff-a (np.: diff -B plik_z_outputem_z_main plik_z_outputem_z_programu > wyniki_porownania.out)



#include <iostream>
#include "Lib.h"
using namespace std;

//[[[ TU MOZNA DOPISAC WLASNY KOD

int j=0;
//]]]

int main(int argc, char** argv) 
{
    print2();
    print2();
    print2();
    print3();
    print3();
	print1();

	return 0;
}


/** Wynik dzialania programu:
----------
i = 1
j = 1
----------
----------
i = 2
j = 2
----------
----------
i = 3
j = 3
----------
----------
i = 1
j = 4
k = 1
----------
i = 4
j = 5
----------
----------
----------
i = 2
j = 6
k = 2
----------
i = 5
j = 7
----------
----------
----------
i = 3
j = 8
----------
*/


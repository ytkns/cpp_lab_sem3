// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku Main.cpp
//  
// Prosze uzupelnic niniejsze kody tak, aby program wykonywal się a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.
//
// Pliku Main.cpp oraz funkcji zdefiniowanych juz w zalaczonych plikach cpp nie wolno modyfikowac.
//
// Uwaga: Poziomy dostepu do skladnikow klas powinny byc dobrane zgodnie z zasadami programowania obiektowego (hermetyzacja/ekapsulacja)  
// Staraj się nie powielać tego samego kodu w różnych miejscach. 
// Kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod, ewentualnie takze definicje jesli klasa szablonowa) i cpp (definicje).
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
#include "FootballPlayer.h"
#include "Cracovia.h"
using namespace std;


int main() 
{
	cout << endl << "=== 1 ===============================" << endl;

    int n = 30;

    int* goals	 = new int[n]{ 1, 2, 0, 0, 2, 1, 1, 3, 0, 0,
							1, 2, 1, 0, 3, 2, 1, 0, 0, 0,
							2, 3, 1, 0, 1, 0, 1, 1, 2, 1 };
    int* goals2	 = new int[n]{ 1, 2, 0, 0, 2, 1, 1, 3, 0, 0,
							1, 2, 1, 0, 3, 2, 1, 0, 0, 0,
							2, 3, 1, 0, 1, 0, 1, 1, 2, 1 };

    FootballPlayer* px = new FootballPlayer(goals, n);
    
    px->Set(9, 4);
    px->Set(30, 1);
    
    delete[] goals	;

    for (int i = 0; i < n; i++)
		cout << px->Get(i) - goals2[i] << " ";
	cout << "\n";


    FootballPlayer y = *px;
    FootballPlayer z(*px);
    
    delete px;

    y.Set(19, 3);
    z.Set(29, 2);

    for (int i = 0; i < n; i++)
		cout << y.Get(i) - goals2[i] << " ";
	cout << "\n";
    for (int i = 0; i < n; i++)
		cout << z.Get(i) - goals2[i] << " ";
	cout << "\n";


    if (sizeof(z) < 100) 
	{
        cout << "46457600000\n";
    } else 
	{
        cout << "46457657658\n";
    }

    delete[] goals2	;


	cout << endl << "=== 2 ===============================" << endl;

    Cracovia* p1 = Cracovia::Create();
    Cracovia* p2 = Cracovia::Create();
    Cracovia* p3 = Cracovia::Create();

    p1->SetName("Klub Sportowy CRACOVIA");
 	p1->Presentation();
    p2->SetName("KS CRACOVIA Spolka Akcyjna");
 	p2->Presentation();
    p3->SetName("KS CRACOVIA SA");
 	p3->Presentation();

 	p1->Presentation();
 	p2->Presentation();
 	p3->Presentation();
 	
    cout << p1 - p2 << ", ";
    cout << p2 - p3 << ", ";
    cout << p1 - p3 << "\n";
    
//    Cracovia cracovia;	// po odkomentowaniu powinien byc blad kompilacji

    Cracovia::Delete();

    return 0;
}

/** Wynik dzialania programu:

=== 1 ===============================
0 0 0 0 0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1
46457600000

=== 2 ===============================
Klub Sportowy CRACOVIA
KS CRACOVIA Spolka Akcyjna
KS CRACOVIA SA
KS CRACOVIA SA
KS CRACOVIA SA
KS CRACOVIA SA
0, 0, 0
*/

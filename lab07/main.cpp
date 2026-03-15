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

    FootballPlayer* px = new FootballPlayer(goals, n, "FootballPlayer_1");
    
    px->Set(9, 4);
    px->Set(30, 1);
    
    delete[] goals;

	int* pxGoals = px->GetGoals();
    for (int i = 0; i < n; i++)
		cout << pxGoals[i] - goals2[i] << " ";
	cout << "\n";


    FootballPlayer y = *px;
    std::cout << y.GetName() << "\n";
    FootballPlayer z(y);
    std::cout << z.GetName() << "\n";
    FootballPlayer z2(goals2, n, "FootballPlayer_2");
    z2.Copy(z);
    z2.Copy(z2);
    std::cout << z2.GetName() << "\n";
    
    delete px;

    y.Set(19, 3);
    z.Set(29, 2);
	z2.Set(29, 2);
    
    int* yGoals = y.GetGoals();
	for (int i = 0; i < n; i++)
		cout << yGoals[i] - goals2[i] << " ";
	cout << "\n";
    int* zGoals = z.GetGoals();
    for (int i = 0; i < n; i++)
		cout << zGoals[i] - goals2[i] << " ";
	cout << "\n";
    int* z2Goals = z2.GetGoals();
    for (int i = 0; i < n; i++)
		cout << z2Goals[i] - goals2[i] << " ";
	cout << "\n";


	cout << endl << "=== 2 ===============================" << endl;
	
	FootballPlayer z3 = std::move(z2);
    std::cout << z2.GetName() << "\n";
    z2Goals = z2.GetGoals();
    if( z2Goals != NULL )
    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";
    std::cout << z3.GetName() << "\n";
    int* z3Goals = z3.GetGoals();
    for (int i = 0; i < n; i++)
		cout << z3Goals[i] - goals2[i] << " ";
	cout << "\n";


	cout << endl << "=== 3 ===============================" << endl;

    if (sizeof(z) < 100) 
	{
        cout << "46457600000\n";
    } else 
	{
        cout << "46457657658\n";
    }

    delete[] goals2;


	cout << endl << "=== 4 ===============================" << endl;

    Cracovia* p1 = Cracovia::Create();
    p1->SetName("Klub Sportowy CRACOVIA");
   	p1->Presentation();
    Cracovia* p2 = Cracovia::Create();
    p2->SetName("KS CRACOVIA SA");
   	p2->Presentation();
    if( p1 == p2 )
    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";

    Cracovia* p3 = Cracovia::Create();
   	p3->Presentation();
    if( p3 != p1 )
    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";
    Cracovia* p4 = Cracovia::Create();
   	p4->Presentation();
    if( p4 != p2 )
    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";
    	
    Cracovia* pS[100];
    for(int i=0; i<100; i++)
    	pS[i] = Cracovia::Create();
    for(int i=0; i<100; i+=2)
    {
    	if( p1 - pS[i] != 0 )
	    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";
    	if( p2 - pS[i+1] != 0 )
	    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";
	}

   
    //Cracovia Cracovia;	// po odkomentowaniu powinien byc blad kompilacji
    
	Cracovia::Delete();



    return 0;
}

/** Wynik dzialania programu:

=== 1 ===============================
0 0 0 0 0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
FootballPlayer_1_copy
FootballPlayer_1_copy_copy
FootballPlayer_1_copy_copy_copy
0 0 0 0 0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1
0 0 0 0 0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1

=== 2 ===============================

FootballPlayer_1_copy_copy_copy
0 0 0 0 0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1

=== 3 ===============================
46457600000

=== 4 ===============================
Klub Sportowy CRACOVIA
KS CRACOVIA SA
Klub Sportowy CRACOVIA
KS CRACOVIA SA
*/

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
// !!! W implementowanych klasach mozna uzywac tylko tablic dynamicznych (new, delete) !!! 
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
#include "Car.h"
#include "CarRental.h"

using namespace std;


int main(int argc, char** argv) 
{
	Car e1(1, 5);
	cout << e1;

	e1 = e1 + 10;
	cout << e1;
	e1 = e1 - 15;
	cout << e1;
	e1 = e1 - 7;
	cout << e1;
	cout << endl;
	
	e1 = e1 + 4;	
	cout << e1;
	e1 = e1 * 2;
	e1 = 3 * e1;	
	cout << e1;
	cout << endl;
 		
	Car e2(2, 3);
	Car e3(3, 17);
	Car e4(4, 9);
	Car e5(5, 1);
	Car e6(6, 12);

	
	cout << "============================================" << endl;

	CarRental S1;
	cout << S1;
	S1.Remove();
	S1.Add(e2);
	S1.Add(e3);
	cout << S1;
	S1.Remove();
	cout << S1;
	S1.Remove();
	S1.Add(e2);
	S1.Add(e3);
	cout << S1;
	cout << endl;
	
	cout << S1[1];
	cout << S1[0];
	cout << endl;

	S1[0] = e6;
	cout << S1;
	S1.Remove();
	cout << S1;
	S1.Add(e4);
	cout << S1;
	cout << endl;

	S1 = S1;
	S1 = S1 - 8;
	cout << S1;
	CarRental S2(S1);
	S1 = S1 + 6;
	cout << S1;
	CarRental S3 = S1;
	S1 = S1 * 3;
	cout << S1;
	CarRental S4;
	S4 = S1;
	cout << endl;
	
	CarRental S5 = S3 + S4;
	cout << S5;
	cout << endl;
	
	S1.Clear();
	S1.Add(e4);
	S1.Add(e5);
	cout << S1;
	cout << S2;
	cout << S3;
	cout << S4;
	

	return 0;
}

/** Wynik dzialania programu:
typ: 1, ilosc sztuk: 5
typ: 1, ilosc sztuk: 15
typ: 1, ilosc sztuk: 0
typ: 1, ilosc sztuk: 0

typ: 1, ilosc sztuk: 4
typ: 1, ilosc sztuk: 24

============================================
---
# Zawartosc/sklad:
---
BLAD: Pusto !
---
# Zawartosc/sklad:
typ: 3, ilosc sztuk: 17
typ: 2, ilosc sztuk: 3
---
---
# Zawartosc/sklad:
typ: 3, ilosc sztuk: 17
---
---
# Zawartosc/sklad:
typ: 3, ilosc sztuk: 17
typ: 2, ilosc sztuk: 3
---

typ: 2, ilosc sztuk: 3
typ: 3, ilosc sztuk: 17

---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 12
typ: 2, ilosc sztuk: 3
---
---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 12
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 6, ilosc sztuk: 12
---

---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 1
typ: 6, ilosc sztuk: 4
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 7
typ: 6, ilosc sztuk: 10
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 21
typ: 6, ilosc sztuk: 30
---

---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 30
typ: 6, ilosc sztuk: 10
typ: 4, ilosc sztuk: 21
typ: 4, ilosc sztuk: 7
---

---
# Zawartosc/sklad:
typ: 5, ilosc sztuk: 1
typ: 4, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 1
typ: 6, ilosc sztuk: 4
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 7
typ: 6, ilosc sztuk: 10
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 21
typ: 6, ilosc sztuk: 30
---*/

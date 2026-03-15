// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku Main.cpp
// Przykład polecenia 
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Pliku Main.cpp, nie wolno modyfikowac.
//
// UWAGA:
// Implementacje brakujacego kodu nalezy oprzec na wskaznikach (new/delete, albo malloc/free).
// Inne implementacje beda oceniane na 0 punktow.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
// - co to znaczy? 
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
// * archiwum powinno zawierać katalog z zadaniem lab01/
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar

#include <iostream>
#include "List.h"
using namespace std;


int main(int argc, char** argv) 
{
  slist List;
  slistEl* p;
	
  init(&List);
	
  push_back(&List, 'r');
  push_back(&List, 'o');
  push_back(&List, 'c');
  push_back(&List, 'o');
  push_back(&List, 'm');
  push_back(&List, 'p');
  push_back(&List, 'u');
  push_back(&List, 't');

  pop_front(&List);
  
  p = find(&List, 'u');

  push_back(&List, 'e');
  push_back(&List, 'r');
  
  p = find(&List, 't');

  pop_front(&List);


  printl(&List);
  
  clear(&List);

  printl(&List);


  return 0;
}

/** Wynik dzialania programu:
Moja lista: <computer>

Moja lista: <>
*/

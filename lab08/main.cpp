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
#include "Ingredient.h"
#include "Container.h"
#include "FridgeShelf.h"
#include "MealPackage.h"
using namespace std;


int main() {
    Ingredient ing1("Tomato", 150, 0.2);
    Ingredient ing2("Cheese", 300, 0.5);
    Ingredient ing3("Basil", 20, 0.05);

    std::cout << "ing1: "; ing1.Presentation();
    std::cout << "ing2: "; ing2.Presentation();
    std::cout << "ing3: "; ing3.Presentation();

    Container c1(ing1);
    c1.AddIngredient(ing2);
    std::cout << "c1: "; c1.Presentation();

    Container c2(ing3);
    std::cout << "c2: "; c2.Presentation();

    FridgeShelf f1(c1);
    f1.AddContainer(c2);
    std::cout << "f1: "; f1.Presentation();

    MealPackage m1 = f1; // niejawna
    std::cout << "m1: "; m1.Presentation();

    MealPackage m2 = static_cast<MealPackage>(c2); // jawna
    std::cout << "m2: "; m2.Presentation();

    MealPackage m3 = static_cast<MealPackage>(ing3); // jawna
    std::cout << "m3: "; m3.Presentation();

    // Odkomentowanie poniższych linii powinno spowodować błąd kompilacji
    //Container c3 = f1;
    //Ingredient ing4 = m1;

    return 0;
}


/** Wynik dzialania programu:
ing1: Ingredient: Tomato, weight: 150g, volume: 0.2L
ing2: Ingredient: Cheese, weight: 300g, volume: 0.5L
ing3: Ingredient: Basil, weight: 20g, volume: 0.05L
c1: Container: 2 ingredients, weight: 450g total, volume: 0.7L total
c2: Container: 1 ingredients, weight: 20g total, volume: 0.05L total
f1: FridgeShelf: 2 containers, weight: 470g total, volume: 0.75L total
m1: MealPackage: , weight: 470g total, volume: 0.75L total
m2: MealPackage: , weight: 20g total, volume: 0.05L total
m3: MealPackage: , weight: 20g total, volume: 0.05L total
*/

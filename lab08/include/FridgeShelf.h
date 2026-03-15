#pragma once

#include "Container.h"
#include "MealPackage.h"
#include <vector>
using namespace std;

/**
 * @class FridgeShelf
 * @brief Klasa reprezentująca półkę w lodówce.
 *
 * Klasa przechowuje kolekcję pojemników (Container) znajdujących się
 * na półce lodówki. Udostępnia metody umożliwiające dodawanie
 * pojemników, prezentację ich zawartości oraz obliczanie
 * łącznej masy i objętości przechowywanych składników.
 */
class FridgeShelf {

    private:
        /// Wektor przechowujący pojemniki znajdujące się na półce
        vector<Container> containers;

    public:

        /**
        * @brief Konstruktor klasy FridgeShelf.
        *
        * Tworzy półkę lodówki zawierającą jeden początkowy pojemnik.
        *
        * @param c Pojemnik dodawany do półki.
        */
        FridgeShelf(const Container& c);
            
        /**
        * @brief Dodaje nowy pojemnik na półkę.
        *
        * @param c Pojemnik, który ma zostać dodany.
        */
        void AddContainer(const Container& c);
            
        /**
        * @brief Wyświetla informacje o wszystkich pojemnikach na półce.
        *
        * Funkcja wywołuje prezentację dla każdego pojemnika
        * znajdującego się na półce lodówki.
        */
        void Presentation() const;
            
        /**
        * @brief Oblicza łączną masę wszystkich składników na półce.
        *
        * @return Suma mas składników znajdujących się w pojemnikach.
        */
        int GetWeight() const;

        /**
        * @brief Oblicza łączną objętość wszystkich składników na półce.
        *
        * @return Suma objętości składników znajdujących się w pojemnikach.
        */
        float GetVolume() const;
            
        /**
        * @brief Operator konwersji do klasy MealPackage.
        *
        * Umożliwia konwersję obiektu FridgeShelf do obiektu MealPackage.
        * Na podstawie zawartości półki tworzony jest pakiet posiłku.
        *
        * @return Obiekt MealPackage utworzony na podstawie zawartości półki.
        */
        operator MealPackage() const;
};
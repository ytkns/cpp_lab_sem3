#pragma once

#include "Ingredient.h"
#include <vector>
using namespace std;

/**
 * @class Container
 * @brief Klasa reprezentująca pojemnik na składniki.
 *
 * Klasa przechowuje kolekcję składników (Ingredient) w kontenerze
 * typu vector. Udostępnia metody umożliwiające dodawanie składników,
 * prezentację zawartości oraz obliczanie łącznej masy i objętości.
 */
class Container {
    
    private:
        /// Wektor przechowujący składniki znajdujące się w pojemniku
        vector<Ingredient> ingredients;
        
    public:

        /**
        * @brief Konstruktor klasy Container.
        *
        * Tworzy pojemnik zawierający jeden początkowy składnik.
        *
        * @param i Składnik dodawany do pojemnika.
        */
        Container(const Ingredient& i);
            
        /**
        * @brief Dodaje nowy składnik do pojemnika.
        *
        * @param i Składnik, który ma zostać dodany.
        */
        void AddIngredient(const Ingredient& i);
            
        /**
        * @brief Wyświetla informacje o wszystkich składnikach w pojemniku.
        *
        * Funkcja wywołuje prezentację dla każdego składnika
        * znajdującego się w kontenerze.
        */
        void Presentation() const;
            
        /**
        * @brief Oblicza łączną masę wszystkich składników.
        *
        * @return Suma mas składników w pojemniku.
        */
        int GetWeight() const;

        /**
        * @brief Oblicza łączną objętość wszystkich składników.
        *
        * @return Suma objętości składników w pojemniku.
        */
        float GetVolume() const;
};
#pragma once
#include <iostream>
#include "Container.h"
#include "Ingredient.h"

/**
 * @class MealPackage
 * @brief Klasa reprezentująca pakiet posiłku.
 *
 * Klasa przechowuje informacje o pakiecie posiłku w postaci
 * łącznej masy i objętości. Pakiet może być tworzony
 * bezpośrednio z pojedynczego składnika lub pojemnika.
 */
class MealPackage {
    
    private:
        /// Łączna masa pakietu
        int weight;

        /// Łączna objętość pakietu
        float volume;
        
    public:

        /**
        * @brief Konstruktor klasy MealPackage.
        *
        * Tworzy pakiet posiłku o określonej masie i objętości.
        *
        * @param w Masa pakietu.
        * @param v Objętość pakietu.
        */
        MealPackage(int w, float v);
            
        /**
        * @brief Konstruktor konwertujący z pojemnika (Container).
        *
        * Tworzy pakiet posiłku na podstawie wszystkich składników
        * znajdujących się w pojemniku.
        *
        * @param c Pojemnik, z którego tworzony jest pakiet.
        */
        explicit MealPackage(const Container& c);

        /**
        * @brief Konstruktor konwertujący z pojedynczego składnika (Ingredient).
        *
        * Tworzy pakiet posiłku zawierający jeden składnik.
        *
        * @param i Składnik, z którego tworzony jest pakiet.
        */
        explicit MealPackage(const Ingredient& i);

        /**
        * @brief Zwraca łączną masę pakietu.
        *
        * @return Masa pakietu.
        */
        int GetWeight() const;

        /**
        * @brief Zwraca łączną objętość pakietu.
        *
        * @return Objętość pakietu.
        */
        float GetVolume() const;

        /**
        * @brief Wyświetla informacje o pakiecie posiłku.
        *
        * Funkcja prezentuje masę i objętość pakietu.
        */
        void Presentation() const;
};
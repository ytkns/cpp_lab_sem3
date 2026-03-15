#pragma once

#include <iostream>
#include <string>
using namespace std;

/**
 * @class Ingredient
 * @brief Klasa reprezentująca składnik.
 *
 * Klasa przechowuje informacje o składniku, takie jak:
 * nazwa, masa (waga) oraz objętość. Udostępnia metody
 * umożliwiające prezentację danych oraz odczyt właściwości
 * składnika.
 */
class Ingredient {
    
    private:
        /// Nazwa składnika
        string name;

        /// Masa składnika
        int weight;

        /// Objętość składnika
        float volume;
        
    public:

        /**
        * @brief Konstruktor klasy Ingredient.
        *
        * Tworzy obiekt składnika o podanej nazwie, masie i objętości.
        *
        * @param n Nazwa składnika.
        * @param w Masa składnika.
        * @param v Objętość składnika.
        */
        Ingredient(string n, int w, float v);
            
        /**
        * @brief Wyświetla informacje o składniku.
        *
        * Funkcja prezentuje nazwę, masę oraz objętość składnika.
        */
        void Presentation() const;
            
        /**
        * @brief Zwraca masę składnika.
        *
        * @return Masa składnika.
        */
        int GetWeight() const;

        /**
        * @brief Zwraca objętość składnika.
        *
        * @return Objętość składnika.
        */
        float GetVolume() const;
};
#pragma once

#include <iostream>
#include <string>
using namespace std;

/**
 * @class FootballPlayer
 * @brief Klasa reprezentująca piłkarza.
 *
 * Klasa przechowuje nazwę zawodnika oraz tablicę wyników
 * (goli) w formie dynamicznej tablicy. Udostępnia konstrukcje
 * kopiujące, przenoszące, destruktor, metody odczytu i zapisu
 * wyników oraz nazwę zawodnika.
 */
class FootballPlayer {
        private:

        /// Dynamiczna tablica przechowująca liczbę goli
        int* tab;

        /// Rozmiar tablicy goli
        int size;

        /// Nazwa zawodnika
        string name;

        public:

        /**
        * @brief Konstruktor kopiujący.
        *
        * Tworzy nowy obiekt jako kopię istniejącego zawodnika.
        *
        * @param other Obiekt źródłowy do skopiowania.
        */
        FootballPlayer(const FootballPlayer& other);

        /**
        * @brief Konstruktor przenoszący.
        *
        * Tworzy obiekt przenosząc zasoby z innego obiektu.
        *
        * @param other Obiekt źródłowy do przeniesienia.
        */
        FootballPlayer(FootballPlayer&& other) noexcept;

        /**
        * @brief Operator przypisania kopiującego.
        *
        * Kopiuje dane z innego obiektu klasy FootballPlayer.
        *
        * @param other Obiekt źródłowy.
        * @return Referencja do aktualnego obiektu.
        */
        FootballPlayer& operator=(const FootballPlayer& other); 

        /**
        * @brief Operator przypisania przenoszącego.
        *
        * Przenosi dane z innego obiektu klasy FootballPlayer.
        *
        * @param other Obiekt źródłowy.
        * @return Referencja do aktualnego obiektu.
        */
        FootballPlayer& operator=(FootballPlayer&& other) noexcept;

        /**
        * @brief Konstruktor tworzący zawodnika z tablicą goli.
        *
        * Tworzy obiekt zawodnika z określoną tablicą wyników i nazwą.
        *
        * @param goals Wskaźnik do tablicy goli.
        * @param n Długość tablicy goli.
        * @param nazwa Nazwa zawodnika.
        */
        FootballPlayer(const int* goals, int n, const string &nazwa);

        /**
        * @brief Destruktor klasy.
        *
        * Zwalnia pamięć zajmowaną przez dynamiczną tablicę goli.
        */
        ~FootballPlayer();

        /**
        * @brief Ustawia wartość goli pod określonym indeksem.
        *
        * @param idx Indeks zmienianej wartości.
        * @param c Nowa wartość (liczba goli).
        */
        void Set(int idx, int c);

        /**
        * @brief Zwraca wskaźnik do tablicy goli.
        *
        * @return Wskaźnik do dynamicznej tablicy przechowującej wyniki.
        */
        int* GetGoals() const;

        /**
        * @brief Zwraca nazwę zawodnika.
        *
        * @return Nazwa zawodnika.
        */
        string GetName() const;

        /**
        * @brief Kopiuje dane z innego obiektu.
        *
        * Pomocnicza funkcja do kopiowania tablicy goli i nazwy
        * z obiektu źródłowego.
        *
        * @param other Obiekt źródłowy do skopiowania.
        */
        void Copy(const FootballPlayer& other);
};
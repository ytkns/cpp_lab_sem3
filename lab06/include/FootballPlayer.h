#pragma once

/**
 * @class FootballPlayer
 * @brief Klasa reprezentująca piłkarza z tablicą wyników.
 *
 * Klasa przechowuje dynamiczną tablicę wyników (goli) oraz umożliwia
 * kopiowanie obiektów, ustawianie wartości i pobieranie wyników
 * spod określonego indeksu.
 */
class FootballPlayer {
        
        private:

        /// Dynamiczna tablica przechowująca liczbę goli
        int* tab;

        /// Rozmiar tablicy goli
        int size;
        
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
        * @brief Konstruktor tworzący zawodnika z tablicą goli.
        *
        * Tworzy obiekt zawodnika z określoną tablicą wyników.
        *
        * @param goals Wskaźnik do tablicy goli.
        * @param n Długość tablicy goli.
        */
        FootballPlayer(const int* goals, int n);
                
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
        * @brief Zwraca wartość goli spod określonego indeksu.
        *
        * @param idx Indeks szukanej wartości w tablicy goli.
        * @return Liczba goli znajdująca się pod podanym indeksem.
        */
        int Get(int idx) const;
};
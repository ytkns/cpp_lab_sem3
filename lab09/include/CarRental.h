#pragma once
#include "Car.h"

    /**
    * @class CarRental
    * @brief Klasa reprezentująca wypożyczalnię samochodów.
    *
    * Klasa przechowuje dynamiczną tablicę obiektów klasy Car
    * oraz umożliwia wykonywanie podstawowych operacji na kolekcji
    * samochodów (dodawanie, usuwanie, kopiowanie oraz operacje
    * arytmetyczne na kolekcjach).
    */
    class CarRental {
    private:

        /// Dynamiczna tablica przechowująca samochody
        Car* items;

        /// Liczba samochodów w kolekcji
        int size;
        
        /**
        * @brief Funkcja kopiująca dane z innego obiektu CarRental.
        *
        * Tworzy kopię wszystkich samochodów znajdujących się
        * w przekazanym obiekcie.
        *
        * @param other Obiekt CarRental, z którego dane mają zostać skopiowane.
        */
        void copy(const CarRental& other);
        
        /**
        * @brief Funkcja zwalniająca pamięć zajmowaną przez tablicę samochodów.
        *
        * Usuwa dynamiczną tablicę oraz resetuje jej rozmiar.
        */
        void clear();

    public:

        /**
        * @brief Konstruktor domyślny.
        *
        * Tworzy pustą wypożyczalnię samochodów.
        */
        CarRental();
        
        /**
        * @brief Konstruktor kopiujący.
        *
        * Tworzy nowy obiekt CarRental jako kopię istniejącego.
        *
        * @param other Obiekt, który ma zostać skopiowany.
        */
        CarRental(const CarRental& other);
        
        /**
        * @brief Destruktor klasy.
        *
        * Zwalnia pamięć zaalokowaną dla tablicy samochodów.
        */
        ~CarRental(); 
        
        /**
        * @brief Operator przypisania.
        *
        * Kopiuje dane z jednego obiektu CarRental do drugiego.
        *
        * @param other Obiekt źródłowy.
        * @return Referencja do aktualnego obiektu.
        */
        CarRental& operator=(const CarRental& other);
        
        /**
        * @brief Dodaje samochód do wypożyczalni.
        *
        * Funkcja powiększa kolekcję samochodów i dodaje nowy obiekt
        * na jej koniec.
        *
        * @param p Referencja do obiektu Car, który ma zostać dodany.
        */
        void Add(const Car& p);
        
        /**
        * @brief Usuwa ostatni samochód z kolekcji.
        *
        * Jeśli kolekcja jest pusta, funkcja nie wykonuje żadnej operacji.
        */
        void Remove();
        
        /**
        * @brief Usuwa wszystkie samochody z kolekcji.
        *
        * Czyści całą wypożyczalnię i zwalnia zajętą pamięć.
        */
        void Clear();
        
        /**
        * @brief Operator dodawania.
        *
        * Tworzy nowy obiekt CarRental, którego samochody mają
        * zmodyfikowane parametry o wartość v.
        *
        * @param v Wartość dodawana do parametrów samochodów.
        * @return Nowy obiekt CarRental.
        */
        CarRental operator+(int v) const;
        
        /**
        * @brief Operator odejmowania.
        *
        * Tworzy nowy obiekt CarRental z parametrami samochodów
        * pomniejszonymi o wartość v.
        *
        * @param v Wartość odejmowana od parametrów samochodów.
        * @return Nowy obiekt CarRental.
        */
        CarRental operator-(int v) const;
        
        /**
        * @brief Operator mnożenia.
        *
        * Tworzy nowy obiekt CarRental z parametrami samochodów
        * pomnożonymi przez wartość v.
        *
        * @param v Wartość mnożnika.
        * @return Nowy obiekt CarRental.
        */
        CarRental operator*(int v) const;
        
        /**
        * @brief Operator dostępu do elementu tablicy.
        *
        * Umożliwia dostęp do samochodu o podanym indeksie.
        *
        * @param idx Indeks samochodu w kolekcji.
        * @return Referencja do obiektu Car.
        */
        Car& operator[](int idx);

        /**
        * @brief Stała wersja operatora dostępu do elementu.
        *
        * @param idx Indeks samochodu w kolekcji.
        * @return Stała referencja do obiektu Car.
        */
        const Car& operator[](int idx) const;

        /**
        * @brief Operator dodawania dwóch kolekcji samochodów.
        *
        * Łączy dwie wypożyczalnie w jedną nową kolekcję.
        *
        * @param a Pierwsza wypożyczalnia.
        * @param b Druga wypożyczalnia.
        * @return Nowy obiekt CarRental zawierający wszystkie samochody.
        */
        friend CarRental operator+(const CarRental& a, const CarRental& b);
        
        /**
        * @brief Operator wyjścia strumieniowego.
        *
        * Umożliwia wypisanie zawartości wypożyczalni na strumień wyjściowy.
        *
        * @param os Strumień wyjściowy.
        * @param s Obiekt CarRental do wyświetlenia.
        * @return Referencja do strumienia wyjściowego.
        */
        friend std::ostream& operator<<(std::ostream& os, const CarRental& s);
};
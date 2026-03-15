#pragma once
#include <iostream>

/**
 * @class Car
 * @brief Klasa reprezentująca samochód.
 *
 * Klasa przechowuje podstawowe informacje o samochodzie,
 * takie jak jego typ oraz ilość. Udostępnia operatory
 * arytmetyczne umożliwiające wykonywanie operacji na obiektach
 * tej klasy.
 */
class Car {
    private:

        /// Typ samochodu
        int type;

        /// Ilość samochodów danego typu
        int amount;

    public:

        /**
        * @brief Konstruktor klasy Car.
        *
        * Tworzy obiekt samochodu o określonym typie i ilości.
        *
        * @param t Typ samochodu.
        * @param a Ilość samochodów.
        */
        Car(int t = 0, int a = 0);

        /**
        * @brief Operator dodawania.
        *
        * Tworzy nowy obiekt Car, w którym ilość samochodów
        * została zwiększona o wartość v.
        *
        * @param v Wartość dodawana do ilości.
        * @return Nowy obiekt Car.
        */
        Car operator+(int v) const;

        /**
        * @brief Operator odejmowania.
        *
        * Tworzy nowy obiekt Car, w którym ilość samochodów
        * została zmniejszona o wartość v.
        *
        * @param v Wartość odejmowana od ilości.
        * @return Nowy obiekt Car.
        */
        Car operator-(int v) const;

        /**
        * @brief Operator mnożenia.
        *
        * Tworzy nowy obiekt Car, w którym ilość samochodów
        * została pomnożona przez wartość v.
        *
        * @param v Wartość mnożnika.
        * @return Nowy obiekt Car.
        */
        Car operator*(int v) const;

        /**
        * @brief Operator przypisania.
        *
        * Kopiuje dane z innego obiektu klasy Car.
        *
        * @param other Obiekt źródłowy.
        * @return Referencja do aktualnego obiektu.
        */
        Car& operator=(const Car& other);
        
        /**
        * @brief Operator mnożenia z liczbą po lewej stronie.
        *
        * Umożliwia zapis w postaci: v * Car.
        *
        * @param v Wartość mnożnika.
        * @param p Obiekt samochodu.
        * @return Nowy obiekt Car.
        */
        friend Car operator*(int v, const Car& p);
        
        /**
        * @brief Operator wyjścia strumieniowego.
        *
        * Umożliwia wypisanie informacji o samochodzie
        * na strumień wyjściowy.
        *
        * @param os Strumień wyjściowy.
        * @param p Obiekt samochodu do wyświetlenia.
        * @return Referencja do strumienia wyjściowego.
        */
        friend std::ostream& operator<<(std::ostream& os, const Car& p);
};


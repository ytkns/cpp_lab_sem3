#pragma once

#include "SnowCannon.h"

/**
 * @class Service
 * @brief Klasa realizująca testy serwisowe armatki śnieżnej.
 *
 * Klasa udostępnia metody testowania armatki zarówno
 * poprzez wskaźnik, jak i poprzez kopiowanie obiektu.
 */
class Service {

    public:

        /**
        * @brief Test serwisowy armatki (przez wskaźnik).
        *
        * Funkcja testuje pojemność armatki śnieżnej poprzez wskaźnik
        * do obiektu klasy SnowCannon.
        *
        * @param p Wskaźnik do obiektu SnowCannon.
        * @param a Ilość litrów testowana.
        */
        void Test(SnowCannon* p, double a);

        /**
        * @brief Test serwisowy armatki (przez kopię obiektu).
        *
        * Funkcja testuje pojemność armatki śnieżnej
        * poprzez przekazanie kopii obiektu SnowCannon.
        *
        * @param p Obiekt SnowCannon do testowania.
        * @param a Ilość litrów testowana.
        */
        void TestCopy(SnowCannon p, double a);
};
#pragma once

#include <iostream>
#include <string>
using namespace std;

/**
 * @class Cracovia
 * @brief Klasa implementująca wzorzec singleton.
 *
 * Klasa przechowuje pojedynczy obiekt reprezentujący "Cracovia".
 * Umożliwia tworzenie, prezentację, ustawianie nazwy oraz usuwanie
 * instancji singletona.
 */
class Cracovia {
    private:

        /// Nazwa obiektu
        string name;

        /// Wskaźnik na jedyny obiekt klasy (singleton)
        static Cracovia* obj;

        /**
        * @brief Konstruktor domyślny.
        *
        * Tworzy obiekt z pustą nazwą. Konstruktor prywatny,
        * aby uniemożliwić tworzenie wielu instancji.
        */
        Cracovia();

        /**
        * @brief Destruktor klasy.
        *
        * Zwalnia zasoby zajmowane przez obiekt.
        */
        ~Cracovia();

    public:

        /**
        * @brief Tworzy lub zwraca jedyną instancję klasy.
        *
        * Jeśli instancja nie istnieje, tworzy ją. W przeciwnym
        * wypadku zwraca istniejący obiekt.
        *
        * @return Wskaźnik do instancji singletona Cracovia.
        */
        static Cracovia* Create();

        /**
        * @brief Prezentuje nazwę obiektu.
        *
        * Funkcja wypisuje nazwę obecnego singletona.
        */
        void Presentation() const;

        /**
        * @brief Ustawia nazwę obiektu.
        *
        * Funkcja zmienia nazwę singletona na podaną.
        *
        * @param n Nowa nazwa obiektu.
        */
        void SetName(const string& n);

        /**
        * @brief Usuwa instancję singletona.
        *
        * Funkcja zwalnia pamięć zajmowaną przez jedyny obiekt klasy.
        */
        static void Delete();   

        /// Flaga używana do testów lub sterowania logiką singletona
        static bool toggle;

        // Zabrania kopiowania i przypisywania instancji singletona
        Cracovia(const Cracovia&) = delete;
        void operator = (const Cracovia&) = delete;
};
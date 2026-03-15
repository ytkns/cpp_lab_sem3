#pragma once
#include <iostream>
#include <string>
using namespace std;

/**
 * @class Cracovia
 * @brief Klasa implementująca wzorzec singleton.
 *
 * Klasa przechowuje pojedynczy obiekt reprezentujący "Cracovia".
 * Udostępnia funkcje do tworzenia instancji, prezentacji nazwy,
 * ustawiania nazwy oraz usuwania instancji singletona.
 */
class Cracovia {
    
    private:

        /// Nazwa obiektu
        string name;

        /// Wskaźnik do jedynej instancji singletona
        static Cracovia* obj;
            
        /**
        * @brief Konstruktor domyślny.
        *
        * Prywatny konstruktor, aby uniemożliwić tworzenie wielu instancji.
        * Inicjalizuje obiekt z pustą nazwą.
        */
        Cracovia();
            
        /**
        * @brief Destruktor klasy.
        *
        * Zwalnia zasoby zajmowane przez obiekt singletona.
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
        * Funkcja wypisuje nazwę obecnego singletona na standardowe wyjście.
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

        // Zabrania kopiowania i przypisywania instancji singletona
        Cracovia(const Cracovia&) = delete;
        void operator=(const Cracovia&) = delete;
};
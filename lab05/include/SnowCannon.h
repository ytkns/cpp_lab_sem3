#pragma once

#include <iostream>

/**
 * @class SnowCannon
 * @brief Klasa reprezentująca armatkę do robienia śniegu.
 *
 * Klasa przechowuje informacje o identyfikatorze, stanie armatki,
 * pojemności, zużyciu, oraz ilości wody. Umożliwia ustawianie parametrów,
 * włączanie i wyłączanie armatki, produkcję śniegu oraz uzupełnianie wody.
 */
class SnowCannon {
	
	private:

		/// Identyfikator armatki
		int id;

		/// Stan armatki (true = włączona, false = wyłączona)
		bool state;

		/// Pojemność armatki (litry)
		double capacity;

		/// Zużycie wody (litry na jednostkę śniegu)
		double consumption;

		/// Aktualna ilość wody w armatce
		double water;

	public:

		/**
		* @brief Ustawia identyfikator armatki.
		* @param a Nowa wartość ID.
		*/
		void SetID(int a);

		/**
		* @brief Ustawia stan armatki.
		* @param a Status armatki (true = włączona, false = wyłączona).
		*/
		void SetState(bool a);

		/**
		* @brief Ustawia pojemność armatki.
		* @param a Nowa pojemność w litrach.
		*/
		void SetCapacity(double a);

		/**
		* @brief Ustawia zużycie wody na jednostkę śniegu.
		* @param a Nowa wartość zużycia w litrach.
		*/
		void SetConsumption(double a);

		/**
		* @brief Ustawia aktualną ilość wody w armatce.
		* @param a Ilość wody w litrach.
		*/
		void SetWater(double a);

		/**
		* @brief Prezentuje aktualne parametry armatki.
		*/
		void Presentation();

		/**
		* @brief Włącza armatkę do produkcji śniegu.
		*/
		void Start();

		/**
		* @brief Wyłącza armatkę.
		*/
		void Stop();

		/**
		* @brief Produkuje śnieg.
		* @param a Ilość śniegu do wyprodukowania.
		*/
		void Make(int a);

		/**
		* @brief Dodaje wodę do armatki.
		* @param a Ilość litrów wody do dodania.
		*/
		void Reload(int a);

		/**
		* @brief Zwraca pojemność armatki.
		* @return Pojemność w litrach.
		*/
		double getcapacity();

		/**
		* @brief Zwraca aktualną ilość wody w armatce.
		* @return Ilość wody w litrach.
		*/
		double getwater();
};
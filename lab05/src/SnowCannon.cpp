#include "SnowCannon.h"
using namespace std;

void SnowCannon::SetID(int a){
    id=a;
}
   
void SnowCannon::SetState(bool a){
    state=a;
}

void SnowCannon::SetCapacity(double a){
    capacity=a;
}

void SnowCannon::SetConsumption(double a){
    consumption=a;
}
	
void SnowCannon::SetWater(double a){
    water=a;
}

void SnowCannon::Presentation(){
    cout << "### Prezentacja ###\n";
    cout << "Identyfikator armatki snieznej: " << id << endl;
    if(state) 
        cout << "Armatkdouble getcapacity();a sniezna jest wlaczona" <<endl;
    else
        cout << "Armatka sniezna jest wylaczona" <<endl;
    cout << "Pojemnosc zbiornika armatki wynosi " << capacity <<  " metrow szesciennych\n";
    cout << "Srednia wydajnosc wynosi " << consumption << " metrow szesciennych wody na 1 metr szescienny sniegu\n";
    cout << "W zbiorniku armatki jest " << water << " metrow szesciennych wody\n\n";
}
	
void SnowCannon::Start(){
    cout << "### Uruchomienie armatki snieznej ###\n";
    if(water<=0){
        cout << "BLAD: Brak wody, dolej do zbiornika zasilajacego\n\n";
        return;
        }
    if(state = true);
        cout << "Armatka sniezna zostala wlaczona\n\n";
}

void SnowCannon::Stop(){
    cout << "### Zatrzymanie armatki snieznej ###\n";
    state = false;
    cout << "Armatka sniezna zostala wylaczona\n\n";
}

void SnowCannon::Make(int a){
    cout << "### Robienie sniegu ###\n";
    if(a<0){
        cout << "BLAD: Niepoprawna ilosc metrow szesciennych\n\n";
        return;
        }
    if(!state){
        cout << "BLAD:stream> Wlacz armatke sniezna\n\n";
        return;
        }
    if (a*consumption > water) 
    {
        a = water/consumption;
        water=0;
    } 
    else 
        water -= a*consumption;
    cout << "Zrobiles " << a << " metrow szesciennych sniegu\n\n";  
}
	
void SnowCannon::Reload(int a){
    cout << "### Uzupelnienie zbiornika armatki snieznej woda ###\n";
    if(state){
        cout << "BLAD: Wylacz armatke sniezna przed uzupelnieniem wody\n\n";
        return;
        }
    else if(a<=0)
        cout << "BLAD: Niepoprawna ilosc wody\n\n";
    else
    {
    double space = capacity - water;
    double added = a > space ? space : a;
    water += added;
    cout << "Uzupelniles " << added << " metrow szesciennych wody\n\n";  
    }  
}
	
double SnowCannon::getcapacity(){
    return SnowCannon::capacity;
}
double SnowCannon::getwater(){
	return SnowCannon::water;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

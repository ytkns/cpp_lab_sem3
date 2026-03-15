#include "Ingredient.h"

Ingredient::Ingredient(string n, int w, float v): name(n), weight(w), volume(v){}
        
        
void Ingredient::Presentation() const{
    cout << "Ingredient: " << name << ", weight: " << weight << "g, volume: " << volume << "L\n";
}
        
int Ingredient::GetWeight() const {return weight;}
float Ingredient::GetVolume() const {return volume;}

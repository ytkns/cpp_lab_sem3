#include "MealPackage.h"

MealPackage::MealPackage(int w, float v) : weight(w), volume(v) {}

MealPackage::MealPackage(const Container& c): weight(c.GetWeight()), volume(c.GetVolume()) {}


MealPackage::MealPackage(const Ingredient& i): weight(i.GetWeight()), volume(i.GetVolume()) {}

void MealPackage::Presentation() const{
    cout << "MealPackage: weight: " << weight << "g total, volume: " << volume << "L total\n";
}

int MealPackage::GetWeight() const {return weight;}
float MealPackage::GetVolume() const {return volume;}

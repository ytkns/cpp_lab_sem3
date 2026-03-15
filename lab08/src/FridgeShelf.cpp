#include "FridgeShelf.h"

FridgeShelf::FridgeShelf(const Container& c){
    containers.push_back(c);
}

void FridgeShelf::AddContainer(const Container& c){
    containers.push_back(c);
}
        
void FridgeShelf::Presentation() const{
    cout << "FridgeShelf: " << containers.size() 
         << " containers, weight: " << GetWeight() 
         << "g total, volume: " << GetVolume() << "L total\n";
}
        
int FridgeShelf::GetWeight() const{
    int weight = 0;
    for (const auto& c : containers) 
        weight += c.GetWeight();
    return weight;
}

float FridgeShelf::GetVolume() const{
    float volume = 0;
    for (const auto& c : containers) 
        volume += c.GetVolume();
    return volume;
}

FridgeShelf::operator MealPackage() const{
    return MealPackage(GetWeight(), GetVolume());
}



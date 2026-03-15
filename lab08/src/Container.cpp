#include "Container.h"

Container::Container(const Ingredient& i){
    ingredients.push_back(i);
}

void Container::AddIngredient(const Ingredient& i){
    ingredients.push_back(i);
}
        
void Container::Presentation() const{
    cout << "Container: " << ingredients.size() << " ingredients, weight: " << GetWeight() << "g total, volume: " << GetVolume() << "L total\n";
}
        
int Container::GetWeight() const {
    int weight = 0;
    for (const auto& i : ingredients) weight += i.GetWeight();
    return weight;
}
float Container::GetVolume() const{
    float volume = 0;
    for (const auto& i : ingredients) volume += i.GetVolume();
    return volume;
}

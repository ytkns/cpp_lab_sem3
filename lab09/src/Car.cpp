#include "Car.h"

Car::Car(int t, int a): type(t), amount(a < 0 ? 0: a) {};

Car& Car::operator=(const Car& other){
    if (this != &other)
    {
        type = other.type;
        amount = other.amount;
    }
    return *this;
   } 
    
Car Car::operator+(int v) const{
    return Car(type, amount+v);
}

Car Car::operator-(int v) const{
    int a = amount - v;
    return Car(type, (a<0? 0 : a));
}

Car Car::operator*(int v) const{
    return Car(type, amount*v);
}

Car operator*(int v, const Car& p) {
    return p * v;
}

std::ostream& operator<<(std::ostream& os, const Car& p){
    os << "typ: " << p.type << ", ilość sztuk: " << p.amount << "\n";
    return os;
}


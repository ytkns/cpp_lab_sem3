#include "CarRental.h"
#include <iostream>

CarRental::CarRental() : items(nullptr), size(0) {}

CarRental::CarRental(const CarRental& other) : items(nullptr), size(0) {
    copy(other);
}

CarRental::~CarRental() {
    clear();
}

void CarRental::clear() {
    delete[] items;
    items = nullptr;
    size = 0;
}

void CarRental::copy(const CarRental& other) {
    clear();
    size = other.size;
    if (size > 0) {
        items = new Car[size];
        for (int i = 0; i < size; ++i)
            items[i] = other.items[i];
    }
}

CarRental& CarRental::operator=(const CarRental& other) {
    if (this != &other)
        copy(other);
    return *this;
}

void CarRental::Add(const Car& p) {
    Car* tmp = new Car[size + 1];
    for (int i = 0; i < size; ++i)
        tmp[i] = items[i];
    tmp[size] = p;

    delete[] items;
    items = tmp;
    ++size;
}

void CarRental::Remove() {
    if (size == 0)
        return;

    Car* tmp = nullptr;
    if (size > 1) {
        tmp = new Car[size - 1];
        for (int i = 0; i < size - 1; ++i)
            tmp[i] = items[i];
    }

    delete[] items;
    items = tmp;
    --size;
}

void CarRental::Clear() {
    clear();
}

Car& CarRental::operator[](int idx) {
    return items[idx];
}

const Car& CarRental::operator[](int idx) const {
    return items[idx];
}

CarRental CarRental::operator+(int v) const {
    CarRental r(*this);
    for (int i = 0; i < r.size; ++i)
        r.items[i] = r.items[i] + v;
    return r;
}

CarRental CarRental::operator-(int v) const {
    CarRental r(*this);
    for (int i = 0; i < r.size; ++i)
        r.items[i] = r.items[i] - v;
    return r;
}

CarRental CarRental::operator*(int v) const {
    CarRental r(*this);
    for (int i = 0; i < r.size; ++i)
        r.items[i] = r.items[i] * v;
    return r;
}

CarRental operator+(const CarRental& a, const CarRental& b) {
    CarRental r(a);
    for (int i = 0; i < b.size; ++i)
        r.Add(b.items[i]);
    return r;
}

std::ostream& operator<<(std::ostream& os, const CarRental& s) {
    os << "---\n# Zawartosc/sklad:\n";
    if (s.size == 0) {
        os << "---\nBLAD: Pusto !\n---\n";
        return os;
    }
    for (int i = 0; i < s.size; ++i)
        os << s.items[i];
    os << "---\n";
    return os;
}

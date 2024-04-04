#include "Pair.h"
#include <iostream>
using namespace std;

Pair::Pair() : first(0), second(0) {}
Pair::Pair(int first, int second) : first(first), second(second) {}
Pair::Pair(const Pair& other) : first(other.first), second(other.second) {}
Pair::~Pair() {
}

Pair& Pair::operator=(const Pair& other) {
    if (this != &other) {
        first = other.first;
        second = other.second;
    }
    return *this;
}


bool Pair::operator==(const Pair& other) const {
    return first == other.first && second == other.second;
}

ostream& operator<<(ostream& out, const Pair& pair) {
    out << "Pair: " << "First = " << pair.first << " Second = " << pair.second;
    return out;
}

istream& operator>>(istream& in, Pair& pair) {
    cout << "First = "; in >> pair.first;
    cout << "Second = "; in >> pair.second;
    return in;
}

Pair::operator string() const {
    stringstream ss;
    ss << "First = " << first << " Second = " << second;
    return ss.str();
}


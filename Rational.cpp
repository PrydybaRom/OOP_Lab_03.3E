#include "Rational.h"
#include <iostream>
using namespace std;

Rational::Rational() : Pair() {}

Rational::Rational(int first, int second) : Pair(first, second) {}

Rational::Rational(const Rational& other) : Pair(other) {}

Rational::~Rational() {
}

Rational& Rational::operator=(const Rational& other) {
    if (this != &other) {
        Pair::operator=(other);
    }
    return *this;
}

Rational::operator std::string() const {
    stringstream ss;
    ss << "Numerator = " << first << " Denominator = " << second << " ";
    return ss.str();
}



bool Rational::operator<(const Rational& other) const {
    return (first < other.first) || (first == other.first && second < other.second);
}

bool Rational::operator==(const Rational& other) const {
    return first == other.first && second == other.second;
}

bool Rational::operator!=(const Rational& other) const {
    return !(*this == other);
}

bool Rational::operator>=(const Rational& other) const {
    return (*this > other) || (*this == other);
}

bool Rational::operator<=(const Rational& other) const {
    return (*this < other) || (*this == other);
}


Rational& Rational::operator++() {
    first += 1;
    second += 1;
    return *this;
}

Rational Rational::operator++(int) {
    Rational temp(*this);
    ++(*this);
    return temp;
}

Rational& Rational::operator--() {
    first -= 1;
    second -= 1;
    return *this;
}

Rational Rational::operator--(int) {
    Rational temp(*this);
    --(*this);
    return temp;
}

#pragma once
#include "Object.h"
#include <string>
#include <sstream> 
using namespace std;

class Pair : public Object {
protected:
    int first;
    int second;

public:
    Pair();
    Pair(int first, int second);
    Pair(const Pair& other);
    ~Pair();

    void setFirst(int first) { this->first = first; }
    void setSecond(int second) { this->second = second; }

    int getFirst() const { return first; }
    int getSecond() const { return second; }

    Pair& operator=(const Pair& other);
    bool operator==(const Pair& other) const;
    friend ostream& operator<<(ostream& out, const Pair& pair);
    friend istream& operator>>(istream& in, Pair& pair);

    operator string() const;

    bool operator>(const Pair& other) const {
        return (first > other.first) || (first == other.first && second > other.second);
    }
};
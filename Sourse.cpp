#include "Rational.h"
#include <iostream>

using namespace std;

int main() {
    
    Pair p1(1,2);
    Pair p2(1,2);
    cout << "Count of objects: " << Pair::Count() << endl;

    Rational r1(20, 3);

    cout << "Enter rational number (numerator denominator): ";
    cin >> r1;
    cout << "Rational r1: " << r1 << endl;

    string rationalString = static_cast<string>(r1);
    cout << "Rational r1 as string: " << rationalString << endl;

    r1.setFirst(15);
    r1.setSecond(5);

    cout << "Rational r1 (after modification): " << r1 << endl;

    Rational r2(10, 2);

    cout << "r1 > r2: " << (r1 > r2 ? "true" : "false") << endl;
    cout << "r1 < r2: " << (r1 < r2 ? "true" : "false") << endl;
    cout << "r1 == r2: " << (r1 == r2 ? "true" : "false") << endl;
    cout << "r1 != r2: " << (r1 != r2 ? "true" : "false") << endl;
    cout << "r1 >= r2: " << (r1 >= r2 ? "true" : "false") << endl;
    cout << "r1 <= r2: " << (r1 <= r2 ? "true" : "false") << endl;

    cout << " r " << r1 << endl;
    cout << " r++ " << r1++ << endl;
    cout << " ++r " << ++r1 << endl;
    cout << " r-- " << r1-- << endl;
    cout << " --r " << --r1 << endl;


    return 0;
}

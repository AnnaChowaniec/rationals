#ifndef RATIONAL_H
#define RATIONAL_H
#include <string>

using namespace std;

class Rational {
  public:
    int x,y;
    Rational () {}
    Rational (int a, int b) : x(a), y(b) {}
};

Rational operator+ (const Rational& lhs, const Rational& rhs);

Rational operator- (const Rational& lhs, const Rational& rhs);

Rational operator* (const Rational& lhs, const Rational& rhs);

Rational operator/ (const Rational& lhs, const Rational& rhs);

bool operator> (const Rational& lhs, const Rational& rhs);

bool operator< (const Rational& lhs, const Rational& rhs);

bool operator== (const Rational& lhs, const Rational& rhs);

int gcd ( int a, int b );

Rational shorten (Rational& fraction);

#endif // RATIONAL_H

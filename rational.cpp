#include "rational.h"
#include <string>
using namespace std;

Rational operator+ (const Rational& lhs, const Rational& rhs) {
    Rational temp;
    temp.x = (lhs.x * rhs.y) + (rhs.x * lhs.y);
    temp.y = lhs.y * rhs.y;
    return temp;
}

Rational operator- (const Rational& lhs, const Rational& rhs) {
    Rational temp;
    temp.x = (lhs.x * rhs.y) - (rhs.x * lhs.y);
    temp.y = lhs.y * rhs.y;
    return temp;
}

Rational operator* (const Rational& lhs, const Rational& rhs) {
    Rational temp;
    temp.x = lhs.x * rhs.x;
    temp.y = lhs.y * rhs.y;
    return temp;
}

Rational operator/ (const Rational& lhs, const Rational& rhs) {
    Rational temp;
    temp.x = lhs.x * rhs.y;
    temp.y = lhs.y * rhs.x;
    return temp;
}

bool operator> (const Rational& lhs, const Rational& rhs) {
    if((lhs.x * rhs.y) > (rhs.x * lhs.y)){
        return true;
    }
    else {
        return false;
    }
}

bool operator< (const Rational& lhs, const Rational& rhs) {
    if((lhs.x * rhs.y) < (rhs.x * lhs.y)){
        return true;
    }
    else {
        return false;
    }
}

bool operator== (const Rational& lhs, const Rational& rhs) {
    if((lhs.x * rhs.y) == (rhs.x * lhs.y)){
        return true;
    }
    else {
        return false;
    }
}

int gcd ( int a, int b ) {
  int c;
  while ( a != 0 ) {
     c = a;
     a = b % a;
     b = c;
  }
  return b;
}

Rational shorten (Rational& fraction) {
    int tmp;
    tmp = gcd(fraction.x, fraction.y);
    if (tmp < 0){
        tmp = tmp * (-1);
    }
    Rational ret;
    ret.x = fraction.x/tmp;
    ret.y = fraction.y/tmp;
    return ret;

}



#include "rational.h"

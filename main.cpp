// non-member operator overloads
#include <iostream>
#include "rational.h"
using namespace std;


int main () {
  Rational foo (3,8);
  Rational bar (1,2);
  Rational result, result2, result3, result4, sh, sh2, sh3, sh4;

  cout << "Dane sa ulamki: " << foo.x << "/" << foo.y << " oraz "<< bar.x << "/" << bar.y << "\n\n";

  if(foo > bar) {
      cout << "Ulamek " << foo.x << "/" << foo.y << " jest wiekszy od ulamka "<< bar.x << "/" << bar.y << "\n\n";
  }
  else if(foo < bar) {
      cout << "Ulamek " << foo.x << "/" << foo.y << " jest mniejszy od ulamka "<< bar.x << "/" << bar.y << "\n\n";;
  }
  else {
      cout << "Ulamki " << foo.x << "/" << foo.y << " oraz "<< bar.x << "/" << bar.y << " sa rowne.\n\n";;

  }

  result = foo + bar;
  sh = shorten(result);
  cout << "Suma: \n";
  cout << foo.x << "/" << foo.y << " + "<< bar.x << "/" << bar.y << " = " << result.x << "/" << result.y << " = " << sh.x << "/" << sh.y <<  "\n\n";

  result2 = foo - bar;
  sh2 = shorten(result2);
  cout << "Roznica: \n";
  cout << foo.x << "/" << foo.y << " - "<< bar.x << "/" << bar.y << " = " << result2.x << "/" << result2.y << " = " << sh2.x << "/" << sh2.y <<  "\n\n";

  result3 = foo * bar;
  sh3 = shorten(result3);
  cout << "Iloczyn: \n";
  cout << foo.x << "/" << foo.y << " * "<< bar.x << "/" << bar.y << " = " << result3.x << "/" << result3.y << " = " << sh3.x << "/" << sh3.y << "\n\n";

  result4 = foo / bar;
  sh4 = shorten(result4);
  cout << "Iloraz: \n";
  cout << foo.x << "/" << foo.y << " : "<< bar.x << "/" << bar.y << " = " << result4.x << "/" << result4.y << " = " << sh4.x << "/" << sh4.y << "\n\n";

  return 0;
}

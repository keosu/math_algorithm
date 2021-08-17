#include <cmath>
#include <iostream>

#include "optmath.h"
using namespace std;

void test() {
  for (int i = 1; i <= 100; i++) {
    double a = 1.0 / sqrt(i); 
    double b = fast_inv_sqrt(i);
    cout << i << " diff: " <<  a - b  << endl; //<<   
  }
}

int main(int argc, char** argv) {
  test();
  return 0;
}
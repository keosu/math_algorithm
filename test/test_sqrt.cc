#include <cmath>
#include <iostream>

#include "optmath.h"
using namespace std;

void test() {
  for (int i = 1; i <= 100; i++) {
    double a = sqrt(i); 
    double b = opt::fast_sqrt(i);
    cout << i << " diff: " <<  a - b  << endl; //<<   
  }
}

int main(int argc, char** argv) {
  test();
  return 0;
}
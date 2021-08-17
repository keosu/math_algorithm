namespace opt {

double fast_sqrt(double c) {
  if (c < 0) {
    return -1;
  }

  double e = 1e-15;
  double x = c;
  double y = (x + c / x) / 2;
  while ((x - y) > e || ( y -x) > e) {
    x = y;
    y = (x + c / x) / 2;
  }
  return x;
}

}//namespace opt
float fast_inv_sqrt(float x) {
  long i;
  float x2, y;
  constexpr float threehalfs = 1.5F;

  x2 = x * 0.5F;
  y = x;
  i = *(long*)&y;             // evil floating point bit level 
  i = 0x5f3759df - (i >> 1);  
  y = *(float*)&i;
  y = y * (threehalfs - (x2 * y * y));  // 1st iteration
  y = y * (threehalfs - (x2 * y * y));  // 2st iteration
  y = y * (threehalfs - (x2 * y * y));  // 3st iteration

  return y;
}
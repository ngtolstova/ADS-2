// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1;
  for (uint16_t i = 0; i < n; i++) {
  res *= value;
  }
  return res;
}

uint64_t fact(uint16_t n) {
  if (n <= 1)
    return 1;
  else
    return n * fact(n - 1);
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
  double sum = 0;
  for (uint16_t n = 0; n <= count; n++) {
    sum += (pown(x, n) / fact(n));
  }
  return sum;
}

double sinn(double x, uint16_t count) {
  double sum = 0;
  for (uint16_t n = 0; n <= count; n++) {
    sum += pown(-1, n - 1) * (pown(x, 2 * n - 1) / fact(2 * n - 1));
  }
  return sum;
}

double cosn(double x, uint16_t count) {
  double sum = 0;
  for (uint16_t n = 0; n <= count; n++) {
    sum += pown(-1, n - 1) * (pown(x, 2 * n - 2) / fact(2 * n - 2));
  }
  return sum;
}

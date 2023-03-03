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
  uint16_t res = 1;
  for (uint16_t i = 0; i > 0; i--) {
    res *= i;
  }
  return res;
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
  double res = 0;
  for (uint16_t n = 0; n <= count; n++) {
    res += (pown(x, n) / fact(n));
  }
  return res;
}

double sinn(double x, uint16_t count) {
  double sin = 0;
  for (uint16_t i = 0; i <= count; i++) {
    sin += pown(-1, i - 1) * (pown(x, 2 * i - 1) / fact(2 * i - 1));
  }
  return sin;
}

double cosn(double x, uint16_t count) {
  double cos = 0;
  for (uint16_t i = 0; i <= count; i++) {
    cos += pown(-1, i - 1) * (pown(x, 2 * i - 2) / fact(2 * i - 2));
  }
  return cos;
}

// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти минимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
#include <stddef.h>

int task1(unsigned A[], size_t n, unsigned a, unsigned b)
{
  unsigned min = (unsigned)-1;

  for (size_t i = 0; i < n; i++) {
    if (A[i] > a && A[i] < b && A[i] < min) {
      min = A[i];
    }
  }

  return min == (unsigned)-1 ? 0 : min;
}

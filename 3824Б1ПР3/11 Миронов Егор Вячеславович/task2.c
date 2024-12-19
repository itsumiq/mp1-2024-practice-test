// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся более двух раз, на -1.
#include <stddef.h>

void task2(int A[], size_t n)
{
  int count[10001] = {0};
    
  for (size_t i = 0; i < n; i++) {
    count[A[i]]++;
  }
  
  for (size_t i = 0; i < n; i++) {
    if (count[A[i]] > 2) {
      A[i] = -1;
        }
    } 
}

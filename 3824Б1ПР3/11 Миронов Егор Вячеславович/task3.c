// Задача 3. Даны два натуральных числа: N1 и N2, и две строки: s1 и s2.
// Получить из этих строк новую строку, объединив N1 первых символов строки s1
// и N2 последних символов строки s2.
// Если длина строки s1 меньше, чем N1, использовать ее целиком.
// Если длина строки s2 меньше, чем N2, использовать ее целиком.
// Пример: s1 = "aaa", N1 = 4, s2 = "bbb", N2 = 4
//   Ответ: "aaabbb"
// Функции стандартной библиотеки языка С не применять.
#include <stdlib.h>

char* task3(char *s1, unsigned N1, char *s2, unsigned N2)
{
    unsigned len1 = 0, len2 = 0;

    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    unsigned copy1 = (N1 < len1) ? N1 : len1;
    unsigned copy2 = (N2 < len2) ? N2 : len2;

    char *result = (char *)malloc(copy1 + copy2 + 1);
    if (!result) {
        return NULL;
    }

    for (unsigned i = 0; i < copy1; i++) {
        result[i] = s1[i];
    }

    for (unsigned i = 0; i < copy2; i++) {
        result[copy1 + i] = s2[len2 - copy2 + i];
    }

    result[copy1 + copy2] = '\0';

    return result;
}

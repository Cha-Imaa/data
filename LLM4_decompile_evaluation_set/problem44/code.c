#include <stdio.h>
#include <stdbool.h>

bool func0(int *l, int size) {
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            if (l[i] + l[j] == 0) return true;
    return false;
}

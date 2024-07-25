#include <stdio.h>
#pragma warning(disable : 4996)
void fun(int* dt0, int* n0, int x) {
    int i, j;
    /**********************found***********************/
    i = 1;
    j = 1;
    do {
        /**********************found***********************/
        if (dt0[i] = x) {
            dt0[j] = dt0[i];
            j++;
        }
        i++;
    } while (i < *n0);
    /**********************found***********************/
    return j;
}
main() {
    int d[10] = {2, 5, 6, 7, 2, 4, 5, 2, 2, 6}, n = 10, i;
    fun(d, &n, 2);
    for (i = 0; i < n; i++)
        printf("%d ", d[i]);
    printf("\n");
}
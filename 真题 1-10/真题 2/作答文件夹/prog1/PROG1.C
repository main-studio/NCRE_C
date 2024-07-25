#include <stdio.h>
#define N 80
void fun(int* w, int p, int n) {
    int temp[N];
    int i = 0, j = 0;

    // 将数组 w 中下标从 0 到 p 的元素复制到临时数组
    for (i = 0; i <= p; i++)
        temp[i] = w[i];

    // 将数组 w 剩余的元素前移
    i = p + 1;
    while (i < n) {
        w[j] = w[i];
        i++;
        j++;
    }

    // 将临时数组中的元素追加到原数组 w 的末尾
    for (i = 0; i <= p; i++) {
        w[j] = temp[i];
        j++;
    }
}
main() {
    int  a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int  i, p, n = 15;
    void NONO();
    printf("The original data:\n");
    for (i = 0; i < n; i++)
        printf("%3d", a[i]);
    printf("\n\nEnter  p:  ");
    scanf("%d", &p);
    fun(a, p, n);
    printf("\nThe data after moving:\n");
    for (i = 0; i < n; i++)
        printf("%3d", a[i]);
    printf("\n\n");
    NONO();
    getchar();
}
void NONO() { /* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
    FILE *rf, *wf;
    int   a[N], i, j, p, n;
    rf = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 5; i++) {
        fscanf(rf, "%d %d", &n, &p);
        for (j = 0; j < n; j++)
            fscanf(rf, "%d", &a[j]);
        fun(a, p, n);
        for (j = 0; j < n; j++)
            fprintf(wf, "%3d", a[j]);
        fprintf(wf, "\n");
    }
    fclose(rf);
    fclose(wf);
}
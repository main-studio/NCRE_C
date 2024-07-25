#include <stdio.h>
#include <string.h>
struct student {
    long  sno;
    char  name[10];
    float score[3];
};
void fun(struct student* b) {
    /**********found**********/
    b->sno = 10004;  // 使用 -> 来访问和修改结构体的成员
    /**********found**********/
    strcpy(b->name, "LiJie");  // 同上
}
main() {
    struct student t = {10002, "ZhangQi", 93, 85, 87};
    int            i;
    printf("\n\nThe original data :\n");
    printf("\nNo: %ld  Name: %s\nScores:  ", t.sno, t.name);
    for (i = 0; i < 3; i++)
        printf("%6.2f ", t.score[i]);
    printf("\n");
    /**********found**********/
    fun(&t);  // 传入结构体变量 t 的地址
    printf("\nThe data after modified :\n");
    printf("\nNo: %ld  Name: %s\nScores:  ", t.sno, t.name);
    for (i = 0; i < 3; i++)
        printf("%6.2f ", t.score[i]);
    printf("\n");
    getchar();
}
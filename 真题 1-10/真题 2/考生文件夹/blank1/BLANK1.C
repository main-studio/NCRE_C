#include <stdio.h>
#include <string.h>
struct student {
    long  sno;
    char  name[10];
    float score[3];
};
void fun(struct student* b) {
    /**********found**********/
    b__1__ = 10004;
    /**********found**********/
    strcpy(b__2__, "LiJie");
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
    fun(__3__);
    printf("\nThe data after modified :\n");
    printf("\nNo: %ld  Name: %s\nScores:  ", t.sno, t.name);
    for (i = 0; i < 3; i++)
        printf("%6.2f ", t.score[i]);
    printf("\n");
    getchar();
}
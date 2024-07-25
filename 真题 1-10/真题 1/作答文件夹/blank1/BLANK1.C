#include  <stdio.h>
#pragma warning (disable:4996)
void fun(char c, int d) { 
  int i;
  char A[26], a[26], *ptr;
/**********found**********/
  for (i=0; i<26; i++) {  // 将大写字母、小写字母分别存入数组A、a，共26个字母
	A[i] = 'A' + i;
	a[i] = 'a' + i;
  }
/**********found**********/
  if ((c >= 'a') && (c <= 'z')) ptr = a;  // 判断范围
  else   ptr = A;
/**********found**********/
  for (i=1; i<=d; i++) printf("%c", ptr[(c-ptr[0]+i) % 26] ); // 除26取余，让ptr下标变为0，从而输出A或a
}
main( ) { 
  char c; int d;
  printf("please input c & d:\n");
  scanf("%c%d", &c, &d);
  fun(c, d);
}
#include  <stdio.h>
#pragma warning (disable:4996)
void fun(char c, int d) { 
  int i;
  char A[26], a[26], *ptr;
/**********found**********/
  for (i=0; i<___(1)____; i++) {
	A[i] = 'A' + i;
	a[i] = 'a' + i;
  }
/**********found**********/
  if ((c >= 'a') && (c ___(2)____ 'z')) ptr = a;
  else   ptr = A;
/**********found**********/
  for (i=1; i<=d; i++) printf("%c", ptr[(c-ptr[0]+i) % ____(3)____] );
}
main( ) { 
  char c; int d;
  printf("please input c & d:\n");
  scanf("%c%d", &c, &d);
  fun(c, d);
}

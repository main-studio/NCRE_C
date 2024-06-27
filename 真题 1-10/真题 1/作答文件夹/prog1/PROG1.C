#include <stdio.h>
#include <string.h>
void fun( char *ss )
{
    int i = 1;  // 从奇数下标开始

    while(ss[i] != '\0')    // 判断字符串是否结束
    {
        if((ss[i] >= 'a') && (ss[i] <= 'z'))    // 判断字符是否为小写字母
        {
            ss[i] -= ('a'-'A'); // 转换为大写字母，具体解析见文章
        }

        i += 2; // 自加2后仍为奇数：3 5 7 9 ……
    }
}

void main( void )
{
   char tt[51];void NONO ();
   printf( "\nPlease enter an character string within 50 characters:\n" );
   gets( tt );
   printf( "\n\nAfter changing, the string\n  \"%s\"", tt );
   fun(tt) ;
   printf( "\nbecomes\n  \"%s\"", tt );
   NONO();
   getchar();
}

void NONO ()
{
/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
   输出数据，关闭文件。 */
   char tt[51], ch;
   FILE *rf, *wf ;
   int len, i=0 ;

   rf = fopen("in.dat","r") ;
   wf = fopen("out.dat","w") ;
   while(i < 10) {
     fgets( tt, 50, rf );
     len = strlen(tt) - 1 ;
     ch = tt[len] ;
     if(ch == '\n' || ch == 0x1a) tt[len] = 0 ;
     fun(tt);
     fprintf( wf, "%s\n", tt );
     i++ ;
   }
   fclose(rf) ;
   fclose(wf) ;
}


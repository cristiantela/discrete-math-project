#include <stdio.h>

int euclides(int a,int d)
{
   int resto = a%d;
   if(resto != 0) euclides(d, resto);
   else return d;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("MDC(%d,%d) = %d\n",x,y,euclides(x,y));
    return 0;
}

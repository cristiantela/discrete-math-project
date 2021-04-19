#include <stdio.h>
#include <math.h>
int eh_primo_i(int i, int x)
{
    if(x == 2) return 1;
    if (i > sqrt(x))
    {
        return 1;
    }

    if (x % i == 0)
    {
        return 0;
    }

    return eh_primo_i(i + 1, x);
}
int eh_primo(int x)
{
    return eh_primo_i(2, x);
}
void scanear(int n,int i)
{
    if(i > n) return;
    if(eh_primo(i) == 1){
        printf("fatores primos: %d \n",i);
        scanear(n,i+1);
    }else{
        scanear(n,i+1);
    }
}

int main()
{
    int N;
    scanf("%d",&N);
    scanear(N,2);
    return 0;
}

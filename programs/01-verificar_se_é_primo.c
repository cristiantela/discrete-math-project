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
int prova()
{
    int n1;
    
    scanf("%d",&n1);
     if(eh_primo(n1)) printf("É primo\n");
     else printf("Não é primo\n");
     
}

int main()
{
 prova();
return 0;
}

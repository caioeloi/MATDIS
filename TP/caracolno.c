#include <stdio.h>

void retornaCoordenadas(unsigned long long int n, unsigned long long int *x, unsigned long long int *y){

    if (n == 0)
    {
        *x = 0;
        *y = 0;
        return;
    }

    int seta = 1;
    int volta = 1;
    for (int i = 1; i <= n; i++)
    {
        if (seta == 1)
        {
            *x = *x - volta;
            *y = *y + volta;
            seta++;
        }
        else if (seta == 2)
        {
            *x = *x - volta;
            *y = *y - volta;
            seta++;
        }
        else if (seta == 3){
            *x = *x + (volta + 1);
            *y = *y - (volta + 1);
            seta++;
        }
        else{
            *x = *x + (volta + 1);
            *y = *y + (volta + 1);
            seta = 1;
            volta = volta + 2;
        }
        
    }
  
}

int main(){

    unsigned long long int x = 0;
    unsigned long long int y = 0;
    unsigned long long int n = 10;
    retornaCoordenadas(n, &x, &y);
    printf("\n\n==============================================================================\n\n");
    printf("Para um N = %lld, a saída do caracol noroeste será:\nx = %lld  y = %lld\n", n, x, y);
    printf("\n==============================================================================\n\n");

    return 0;
}

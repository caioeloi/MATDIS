#include <stdio.h>

void retornaCoordenadas(int n, int *x, int *y){

    if (n == 0)
    {
        *x = 0;
        *y = 0;
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

    int x = 0;
    int y = 0;
    int n = 10;
    retornaCoordenadas(n, &x, &y);
    printf("\n\n==============================================================================\n\n");
    printf("Para um N = %d, a saída do caracol noroeste será:\nx = %d  y = %d\n", n, x, y);
    printf("\n==============================================================================\n\n");

    return 0;
}
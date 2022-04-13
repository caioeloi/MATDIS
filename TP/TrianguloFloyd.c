#include <stdio.h>
#include <stdlib.h>

int row = 1;  
int k = 1;  

void Floyd_triangle_Recursion (int num) // function definition  
{  
    int i;  
    if (num <= 0) // if num should be less than 0, it returns return.  
        return;  
      
    // use for loop to define the rows  
    for ( i = 1; i <= row; i++)  
      
        printf( " %d", k++);  
          
        printf ("\n");  
        row++; // increment row by 1.  
        Floyd_triangle_Recursion (num - 1);  
}


void Floyd_triangle_DLoop (int num)
{
    int i,j;
    row = 1;
    k = 1;
    for (i = 1; i <= num; i++)  
    {  
        // inner loop check j should be less than equal to 1 and print the data.  
        for (j = 1; j <= i; j++)  
        {  
            printf(" %2d", k++); // print the number  
        }  
        printf( "\n");  
        }     
         
}



int main()  
{  
    int num; // declare the variable  
    printf( " Enter a number to define the rows in Floyd's triangle: \n");  
    scanf (" %d", &num);  
    Floyd_triangle_Recursion( num); // call the Floyd_triangle function 
    printf("\n\n\nUSANDO DOUBLE LOOPING:\n\n");
    Floyd_triangle_DLoop(num);
     
    return 0;         
}  

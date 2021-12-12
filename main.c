/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, n, k, a, s;
    scanf("%f", &x);
    a = 2.0/3.0;
    n = 15;
    s = 0;
    for(k=1;k<=n; k++){
        s = s + 1/((2*k - 1)*pow(9, k - 1));
        
    }
    y = (4*x) + (a*s);
    printf("s = %6.3f, y = %6.3f \n", s, y);
    
    return 0;
}

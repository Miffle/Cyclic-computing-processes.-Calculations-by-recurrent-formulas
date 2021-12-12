#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, n, k, a, s;
    int e, g;
    printf("Введите x ");
    scanf("%f", &x);
    g = 1;
    while(g>0){
        
        printf("Введите е ");
        scanf("%i", &e);
        k = 1;
        a = 2.0/3.0;
        s = 0;
        y = 0;
        n = 15;
        switch(e){
            case 1:
            
            
            for(k=1;k<=n; k++){
            s = s + 1/((2*k - 1)*pow(9, k - 1));
            };
            y = (4*x) + (a*s); 	
            printf("s = %6.3f, y = %6.3f \n", s, y);
            printf("Выйти? (0 - выйти, 1 - продолжить)");
            scanf("%i", &g);
            break;
            
            
            
            
            case 2:
            
            while(k<=n){
                s = s + 1/((2*k - 1)*pow(9, k - 1));
                k++;
            };
            y = (4*x) + (a*s);
            printf("s = %6.3f, y = %6.3f \n", s, y);
            printf("Выйти? (0 - выйти, 1 - продолжить)");
            scanf("%i", &g);
            break;
            
            
            
            
            case 3:
            
            do
            {
               s = s + 1/((2*k - 1)*pow(9, k - 1));
               k++;
            } while(k<=n);
            y = (4*x) + (a*s);
            printf("s = %6.3f, y = %6.3f \n", s, y);
            printf("Выйти? (0 - выйти, 1 - продолжить)");
            scanf("%i", &g);
            break;
            
            default:
            printf("Конец");
            return 0;
        }
        
    }
    return 0;
}
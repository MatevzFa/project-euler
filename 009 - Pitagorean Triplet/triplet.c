
#include <stdio.h>
#include <math.h>

int main()
{
    for (int a = 1; a < 1000; a++) {
        // printf("a: %4d ", a);
        for (int b = a+1; b < 1000; b++) {
            for (int c = b+1; c < 1000; c++) {
                
                if ((a*a + b*b == c*c) && (a+b+c == 1000)) {
                    printf("%d\n", a*b*c);
                    return 0;
                }
            }
        }
    }
    
    return 0;
}

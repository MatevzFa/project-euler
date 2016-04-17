
#include <stdio.h>
#include <math.h>

long double p(long double k, long double n)
{   
    
    
    if (k == 1) {
        return k/n;
    } else {
        return k/n*p(k-1, n);
    }
}



int main()
{
    long double k, n;
    scanf("%Lf %Lf", &k, &n);
    printf("%.19Lf\n", p(k, n));
    return 0;
}


/*
    verjetnost da bo imel cip napako
    k/n


*/



#include <stdio.h>
#include <math.h>

int isPrime(int n)
{   
    if (n == 2) return 1;
    
    double dn = n;
    int isqrtn = sqrt(dn);
    // printf("%f sqrt -> %d\n", dn, isqrtn);
    for (int i = 2; i < isqrtn + 1; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main()
{
    // printf("%d\n", );
    long sum = 0;
    for (int i = 2; i < 2000000; i++) {
        if (i%10000 == 0) printf("%d\n",i);
        if(isPrime(i)) {
            // printf("%d\n", i);
            sum += i;
        }
    }
    printf("\n%ld\n", sum);
    return 0;
}

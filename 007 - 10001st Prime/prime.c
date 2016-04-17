#include <stdio.h>

int isPrime(int n)
{
    
    if (n == 2) return 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int primes[10001];
    int primeCount = 0;
    int i = 2;
    for (int p = 0; p < 10001; p++) primes[p] = 0;
    
    while(primes[10000] == 0) {
        printf("check: %10d ...", i);
        
        if (isPrime(i)) {
            printf(" PRIME #%d\n", primeCount+1);
            primes[primeCount] = i;
            primeCount++;
        } else {
            printf("\n");
        }
        i++;
    }
    
    printf("\n\n%d\n", primes[10000]);
    return 0;
}
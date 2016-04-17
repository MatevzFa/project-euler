#include <stdio.h>

int power(int a, int x)
{
    if (x == 0) return 1;
    return a * power(a, x-1);
}

int isPalindrome(int product)
{
    int x = 1;
    int first, last;
    while (product / power(10, x) != 0) x++;
    // printf("%d chars\n", x);
    
    for (int k = 0; k <= x/2; k++) {
        
        first = (product/power(10, x-k-1))%10;
        last = (product%power(10, k+1))/power(10, k);
        // printf("check: %d ~ %d", first, last);
        
        if (first == last) {
            // printf(" OK\n");
        } else {
            // printf("\n");
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    int product;
    int curMaxPalindrome = 0;
    
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            
            product = i * j;
            if (isPalindrome(product) && product > curMaxPalindrome) curMaxPalindrome = product;
        }
    }
    
    printf("%d\n", curMaxPalindrome);
    
    
    // printf("%d\n", isPalindrome(1234321));
    
    return 0;
}
#include <stdio.h>

int main()
{
    int sumOfSquares = 0;
    int squareOfSums = 0;
    
    for (int i = 1; i <= 100; i++) {
        
        sumOfSquares += i*i;
        squareOfSums += i;
    }
    squareOfSums = squareOfSums * squareOfSums;
    
    printf("%d\n", squareOfSums - sumOfSquares);
    
    return 0;
}


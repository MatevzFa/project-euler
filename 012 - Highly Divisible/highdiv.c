#include <stdio.h>

int divAmount(int n)
{
    int k = 1;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) k++;
    }
    return k;
}

int main()
{
    int n = 1;
    int sum = 1;
    int stopAt;
    scanf("%d", &stopAt);
    int div = divAmount(sum);
    while (div <= stopAt) {
        if (div >= 200)
        printf("%10d %3d\n", sum, div);
        n++;
        sum += n;
        div = divAmount(sum);
    }
    
    printf("\n%10d %3d\n", sum, div);
    
    
    return 0;
}
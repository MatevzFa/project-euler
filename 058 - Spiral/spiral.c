#include <stdio.h>

#define N_OF_SPIRALS 4

int main() {
    
    int n = 1;
    
    for (int i = 0; i < N_OF_SPIRALS; i++) {
        
        for (int j = 0; j <= i; j++) {
            printf("%d ", n++);
        }
        printf("\n");
    }
    
    return 0;
}
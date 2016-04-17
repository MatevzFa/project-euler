
// gcc grid.c -o grid -std=c99 && ./grid < grid.in

#include <stdio.h>
#include <math.h>

int main()
{   
    int grid[20][20];
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            
            scanf("%d ", &grid[i][j]);
            // printf("%2d ", grid[i][j]);
        }
        // printf("\n");
    }
    
    int maxProduct = 0;
    int curProduct;
    
    // horizontally
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 16; j++) {
            curProduct = 1;
            for (int k=0; k < 4; k++) {
                curProduct = curProduct * grid[i][j+k];
                // printf("%d ", grid[i][j+k]);
            }
            // printf("     ");
            
            if (curProduct > maxProduct) maxProduct = curProduct;
            
        }
        // printf("\n");
    }
    
    // vertically
    for (int i = 0; i <= 16; i++) {
        for (int j = 0; j < 20; j++) {
            curProduct = 1;
            for (int k=0; k < 4; k++) {
                curProduct = curProduct * grid[i+k][j];
                // printf("%d ", grid[i][j+k]);
            }
            // printf("     ");
            
            if (curProduct > maxProduct) maxProduct = curProduct;
            
        }
        // printf("\n");
    }
    
    // diagonally up
    for (int i = 3; i < 20; i++) {
        for (int j = 0; j <= 16; j++) {
            curProduct = 1;
            for (int k=0; k < 4; k++) {
                curProduct = curProduct * grid[i-k][j+k];
                // printf("%d ", grid[i][j+k]);
            }
            // printf("     ");
            
            if (curProduct > maxProduct) maxProduct = curProduct;
            
        }
        // printf("\n");
    }
    
    // diagonally down
    for (int i = 0; i <= 16; i++) {
        for (int j = 0; j <= 16; j++) {
            curProduct = 1;
            for (int k=0; k < 4; k++) {
                curProduct = curProduct * grid[i+k][j+k];
                // printf("%d ", grid[i][j+k]);
            }
            // printf("     ");
            
            if (curProduct > maxProduct) maxProduct = curProduct;
            
        }
        // printf("\n");
    }
    
    printf("%d\n", maxProduct);
    
    return 0;
}

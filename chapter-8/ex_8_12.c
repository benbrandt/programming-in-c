// Program to transpose matrix
#include <stdio.h>

void transposeMatrix (int a, int b, int n[a][b], int m[b][a])
{
    int i, j;
    
    for (i = 0; i < a; ++i)
        for (j = 0; j < b; ++j)
            m[j][i] = n[i][j];
}

int main (void)
{
    int i, j;
    void transposeMatrix (int a, int b, int n[a][b], int m[b][a]);
    
    int n[5][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };
    int m[4][5];
    
    transposeMatrix (5, 4, n, m);
    
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 5; ++j)
            printf ("%i ", m[i][j]);
        
        printf("\n");
    }
    
    return 0;
}
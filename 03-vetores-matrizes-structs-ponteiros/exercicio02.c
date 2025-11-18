// #include <stdio.h>

// int main()
// {

//     int mat[4][3];
//     int i, j;

//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("mat[%d][%d]: ", i, j);
//             scanf("%d", &mat[i][j]);
//         }
//     }
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int matriz[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }
    printf("Matriz Identidade 5x5:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
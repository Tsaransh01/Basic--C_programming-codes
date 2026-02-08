 #include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the row number: ");
    scanf("%d", &r);
    printf("Enter the column number: ");
    scanf("%d", &c);

    int arr[r][c];
    int rotated[c][r]; // Temporary array banaya for rotation

    // Input lena
    for (int i = 0; i < r; i++)
    {
        printf("Enter the elements of %dth row\n", i + 1);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Rotate karna (90° counterclockwise logic)
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            rotated[c - j - 1][i] = arr[i][j];
        }
    }

    // Rotated matrix print karna
    printf("\nRotated matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main(void) {
    int size;
    int row = 0, col = 0;
    int num = 1;
    int sign = 1;
    int i, j;

    printf("Enter a number: ");
    scanf("%d", &size);

    int arr[size][size];

    while (num <= size * size) {
        for (i = col; i < size - 1; i += sign)
            arr[row][i] = num++;

        row += sign;
        col = size - 1;
        size--;

        for (i = row; i < size - 1; i += sign)
            arr[i][col];

        sign *= -1;
        row = size - 1;
        col += sign;
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++)
            printf("%d ", arr[i][j]);

        printf("\n");
    }
	// git 테스트
}
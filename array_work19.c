// 將一大小為n的字元陣列的所有元素清為0。
#include <stdio.h>

void clear(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    char arr[100];
    printf("輸入字元陣列: ");
    scanf("%s", arr);

    int n = 0;
    while (arr[n] != '\0')
    {
        n++;
    }

    clear(arr, n);

    printf("清為0後的字元陣列: %s\n", arr);

    return 0;
}
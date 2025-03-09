// 將一大小為n的bool陣列的所有元素設為true。
#include <stdio.h>
#include <stdbool.h> // 包含 bool 類型

void set_true(bool arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = true;
    }
}

int main()
{
    int n;
    printf("陣列中有幾個元素: ");
    scanf("%d", &n);

    bool arr[n];
    set_true(arr, n);

    printf("設為true後的布爾陣列: ");
    for (int i = 0; i < n; i++)
    {
        printf("%s ", arr[i] ? "true" : "false");
    }
    printf("\n");

    return 0;
}
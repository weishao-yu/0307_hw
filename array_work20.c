#include <stdio.h>

// 將整數陣列的所有元素設為 1（模擬 true）
void set_true(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1; // 1 表示 true
    }
}

int main()
{
    int n;
    printf("陣列中有幾個元素: ");
    scanf("%d", &n);

    int arr[n];
    set_true(arr, n);

    printf("設為 true 後的布爾陣列: ");
    for (int i = 0; i < n; i++)
    {
        printf("%s ", arr[i] ? "true" : "false");
    }
    printf("\n");

    return 0;
}
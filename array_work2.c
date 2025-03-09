// 求一大小為n的整數陣列中，所有元素之和。
#include <stdio.h>

int sum_of_elements(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

int main()
{
    int n;
    printf("陣列中有幾個數字:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("輸入第 %d 項:", i);
        scanf("%d", &arr[i]);
    }

    printf("總和為 %d\n", sum_of_elements(arr, n));
    return 0;
}
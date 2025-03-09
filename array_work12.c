// 求一大小為n的整數陣列中，所有元素之值是否皆為相同？
#include <stdio.h>

int judge_element(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("陣列有幾個數字:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("輸入第 %d 項:", i);
        scanf("%d", &arr[i]);
    }
    if (judge_element(arr, n) == 0)
    {
        printf("陣列中的數字不全相同\n");
    }
    else
    {
        printf("陣列中的數字全相同\n");
    }
    return 0;
}
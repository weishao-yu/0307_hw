// 求一大小為n的整數陣列中最小的數？
#include <stdio.h>

int judge_element(int arr[], int n)
{
    int smin = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smin)
        {
            smin = arr[i];
        }
    }
    return smin;
}

int main()
{
    int n;
    printf("陣列中有幾個數字:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("輸入第 %d 項:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("最小值:%d\n", judge_element(arr, n));
    return 0;
}
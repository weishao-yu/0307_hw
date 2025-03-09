// 求一大小為n的整數陣列中，有多少元素為偶數？
#include <stdio.h>

int judge_element(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
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
    printf("偶數的數目:%d\n", judge_element(arr, n));
    return 0;
}
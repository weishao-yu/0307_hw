// 求一大小為n的整數陣列中，是否有任一元素之值不小於n？
#include <stdio.h>

int judge_element(int num, int n)
{
    if (num >= n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int judge_arry(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (judge_element(arr[i], n) == 1)
        {
            return 1;
        }
    }
    return 0;
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

    if (judge_arry(arr, n) == 1)
    {
        printf("陣列中有不小於 %d 的數字\n", n);
    }
    else
    {
        printf("陣列中沒有不小於 %d 的數字\n", n);
    }
    return 0;
}

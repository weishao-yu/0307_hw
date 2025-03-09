// 求一大小為n的整數陣列中，是否所有元素皆為奇數？
#include <stdio.h>

int judge_element(int num)
{
    if (num % 2 == 0)
    {
        return 1; // 偶數
    }
    else
    {
        return 0; // 奇數
    }
}
int judge_arry(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (judge_element(arr[i]) == 1)
        {
            return 1; // 有偶數
        }
    }
    return 0; // 皆為奇數
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

    if (judge_arry(arr, n) == 1)
    {
        printf("陣列中有偶數\n");
    }
    else
    {
        printf("陣列中皆為奇數\n");
    }
    return 0;
}

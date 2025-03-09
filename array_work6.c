// 求一大小為n的整數陣列，所有元素之和是否為奇？
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
int judge_array(int arr[], int n)
{
    if (sum_of_elements(arr, n) % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
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
    if (judge_array(arr, n) == 1)
    {
        printf("總和為偶數\n");
    }
    else
    {
        printf("總和為奇數\n");
    }
    return 0;
}

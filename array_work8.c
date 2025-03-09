// 求一大小為n的自然數陣列，可被7或13整除的元素的數目。
#include <stdio.h>

int count_divisible(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 7 == 0 || arr[i] % 13 == 0)
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
        printf("輸入第%d項:", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("可被7或13整除的元素的數目:%d\n", count_divisible(arr, n));
    return 0;
}
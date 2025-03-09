// 求一大小為n的整數陣列中，所有元素的所有位數的和。
#include <stdio.h>

int sum_of_digit(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int sum_of_array_digits(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += sum_of_digit(arr[i]);
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

    printf("所有位數的和: %d\n", sum_of_array_digits(arr, n));
    return 0;
}
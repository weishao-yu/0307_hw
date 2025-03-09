// 求一大小為n的自然數陣列，所有元素之最大公因數。
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int gcd_array(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(result, arr[i]);
    }
    return result;
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

    printf("最大公因數為:%d\n", gcd_array(arr, n));
    return 0;
}
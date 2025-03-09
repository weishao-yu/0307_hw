#include <stdio.h>
int judge_element(int arr[], int n)
{
    int max1 = arr[0] > arr[1] ? arr[0] : arr[1];
    int max2 = arr[0] < arr[1] ? arr[0] : arr[1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    return max2;
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
    printf("第二大的數:%d\n", judge_element(arr, n));
    return 0;
}
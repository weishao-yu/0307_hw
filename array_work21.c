// 在一個未排序、大小為n的整數陣列中，尋找到一個特定的元素key。
#include <stdio.h>

int search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
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

    int key;
    printf("輸入要尋找的元素:");
    scanf("%d", &key);

    int index = search(arr, n, key);
    if (index == -1)
    {
        printf("找不到元素\n");
    }
    else
    {
        printf("元素 %d 在陣列中的位置為 %d\n", key, index);
    }

    return 0;
}

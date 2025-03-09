// 將一大小為n的字元陣列，頭一個和最末一個元素的內容對調。

#include <stdio.h>

void swap(char arr[], int n)
{
    char temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;
}

int main()
{
    char arr[100];
    printf("輸入字元陣列: ");
    scanf("%s", arr);

    int n = 0;
    while (arr[n] != '\0')
    {
        n++;
    }

    swap(arr, n);

    printf("對調後的字元陣列: %s\n", arr);

    return 0;
}
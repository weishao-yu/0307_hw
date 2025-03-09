// 將一大小為n的字元陣列反轉。
#include <stdio.h>

void strrev(char arr[])
{
    int start = 0;
    int end = 0;
    while (arr[end] != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char arr[100];
    printf("輸入字元陣列: ");
    scanf("%s", arr);

    strrev(arr);

    printf("反轉後的字元陣列: %s\n", arr);

    return 0;
}
#include <stdio.h>
int main()
{
    int n, i, arr[100];
    printf("\nEnter any no : ");
    scanf("%d", &n);

    while (n > 0)
    {
        arr[i] = n % 10;
        n = n / 10;
        i++;
    }

    while (i >= 0)
    {
        printf("%d ", arr[i]);
        i--;
    }

    return 0;
}
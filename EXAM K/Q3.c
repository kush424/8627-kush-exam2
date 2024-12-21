// 3. WAP to make series using do while              100 9 90 8 80 7 70 6...........20

#include <stdio.h>

int main()
{
    int sum1 = 100;
    int sum2 = 9;
    do
    {
        printf("%d %d ", sum1, sum2);
        sum1 -= 10;
        sum2 -= 1;
    } while (sum1 >= 20 && sum2 >= 1);
    return 0;
}
#include <stdio.h>

int SNT(int n)
{
    int i, dem = 0;
    if (n != 2)
    {
        for (i = 2; i < n; i++)
            if (n % i == 0)
                dem++;
        if (dem == 0)
            return 1;
        else return 0;
    }
    return 1;
}

int main()
{
    int n, i, dem = 0;
    do {
        printf("nhap n:");
        scanf("%d", &n);
        if (n == 0)
            break;
        if (SNT(n) == 1)
            printf("n la so nguyen to\n");
        else
            printf("n ko la so nguyen to\n");
        for (i = 2; i < n; i++)
            if (SNT(i) == 1)
                dem++;
        printf("dem so nguyen to trong khoang 1-n:%d\n", dem);
    } while (1); 
    return 0;
}

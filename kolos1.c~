#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);
    float tab[n],  sum = 0;
    int l = 0;
    for (int i = 0; i < n; ++i)
    {
       printf("tab[%d]: ", i);
       scanf("%f", &tab[i]);
    
        if (tab[i] < 1)
        {
            l++;
            sum += tab[i];
        }
    }

    if (l == 0)
        printf("brak wyniku");
    else
    {
        float wynik = sum/l;
        printf("wynik: %f", wynik);
    }

    return 0;
}

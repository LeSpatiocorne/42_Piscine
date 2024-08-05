#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     *ft_range(int min, int max)
{
    int     i;
    int     *range;

    i = 0;
    min++;
    if (min >= max)
        return (NULL);
    range = malloc(sizeof(int) * (max - min));
    while (min < max)
        range[i++] = min++;
    return (range);
}
/*
int main(void)
{
    int min = 5;
    int max = 12;
    int *result = ft_range(min, max);
    
    printf("min: %d\nmax: %d\nresult: ", min, max);
    if (result)
    {
        for (int i = 0; i < max - min - 1; i++)
            printf("%d ", result[i]);
        free(result);
    }
    else
        printf("Memory allocation failed");
    return 0;
}*/
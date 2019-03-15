#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

void print_line(int line_height)
{
    int i;

    for (i = 1; i <= line_height; i++)
        printf("%d", line_height);

    printf("\n");

    return;
}

void print_traingle(int Amplitude)
{
    int i;

    for (i = 1; i < Amplitude; i++)
        print_line(i);

    for (i = Amplitude; i >= 1; i--)
        print_line(i);

    return;
}

int main(void)
{
    freopen("in.txt", "r", stdin);

    int ncases, Amplitude, Frequency;
    int i, j, k;

    scanf("%d\n\n", &ncases);

    while (ncases--)
    {
        scanf("%d\n%d\n", &Amplitude, &Frequency);

        for (i = 1; i <= Frequency; i++)
        {
            print_traingle(Amplitude);

            if (i != Frequency)
                printf("\n");
        }

        if (ncases != 0)
        {
            printf("\n");
            scanf("\n");
        }
    }
    return 0;
}

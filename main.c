#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main()
{
    int ysz = 25, xsz = 80;
    double x = 0.0;
    double xstep = 4 * PI / x;
    double ystep = 2 / ysz;
    char sch = '.';

    double graph;
    for (x; x < 4 * PI; x = x + xstep)
    {
        graph = sin(cos(2 * x));
        printf("%2f\n", graph);
    }
    int grarr[ysz][xsz];
    for (int i = 0; i < ysz; i++)
    {
        for (int j = 0; j < xsz; j++)
        {
            grarr[i][j] = sch;
            printf("%c", grarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
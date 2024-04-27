#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main()
{
    int ysz = 25, xsz = 80;              // size of active screen
    float y;                             // y values
    float xstep = (float)(4 * PI) / xsz; // step of x{x1, x2, x3,...x79}
    float x = xstep;                     // initial x value
    char sch = '.';                      // space char
    char gch = '*';                      // graph char

    float chystep[ysz]; // check array
    chystep[12] = 0;    // y zero coard
    for (int i = 0; i < (ysz / 2) - 1; i++)
    {
        chystep[i] = 1 / ysz;        // bottom side
        chystep[ysz - i] = -1 / ysz; // top side
    }

    float xarr[xsz]; // x value arr(steps)
    float yarr[ysz]; // y value arr(means)
    printf("\n");    // just one enter key

    /* graph means cycle */
    int i = 0; // counter
    for (x; x < 4 * PI; x = x + xstep)
    {
        xarr[i] = x;
        yarr[i] = sin(cos(2 * xarr[i]));

        // printf("%.2f      ", xarr[i]); DELETE AFTER ALL
        // printf("%.2f      ", yarr[i]);
        // if (i % 2 != 0)
        // {
        //     printf("\n");
        // }
        i++;
    }

    float y_u, y_d, chy;
    int tml = 0;
    int r = rand() % 25;
    {

        // if (r < 0)
        // {
        //     r -= 2;
        //     y_d = yarr[i] - chystep[r];
        //     r++;
        //     y_u = yarr[i] - chystep[r];
        //     tml == 0;
        // }

        y_d = yarr[i] - chystep[r];
        if (tml == 0)
            r++;
        else
            r--;
        if (r >= ysz)
        {
            r -= 2;
            y_d = yarr[i] - chystep[r];
            r++;
            y_u = yarr[i] - chystep[r];
            tml == 1;
        }
        y_u = yarr[i] - chystep[r];

        if (y_d < y_u)
        {
            tml = 1;
        }
        if (y2 - < y1 -)
        {
            r--;
            ;
        }
    }

    // int grarr[ysz][xsz];
    // for (int i = 0; i < ysz; i++)
    // {
    //     for (int j = 0; j < xsz; j++)
    //     {
    //         if (yarr[i] +)
    //             grarr[yarr[i]][xarr[i]] = gch;
    //         if (grarr[yarr[i]][xarr[i]] != gch)
    //         {
    //             grarr[yarr[i]][xarr[i]] = sch;
    //         }
    //         printf("%c", grarr[yarr[i]][xarr[i]]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
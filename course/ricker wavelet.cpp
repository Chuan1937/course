/*
 * @Author: chuanjun
 * @Date: 2023-10-23 19:03:01
 * @email: chuanjun1978@gmail.com
 * @website-github: https://github.com/Chuan1937
 * @LastEditTime: 2023-10-23 21:41:10
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define PI 3.14159

// generate Ricker wavelet
void ricker(double f, double t[], double wave[], int n)
{
    int i;
    double x, y;

    for (i = 0; i < n; i++)
    {
        x = PI * f * t[i];
        y = (1 - 2 * x * x) * exp(-x * x);
        wave[i] = y;
    }
}

int main()
{
    double fm = 15;    // center frequency
    double dt = 0.005; // sample interval
    double t[31];      // time series
    double wave[31];   // Ricker wavelet
    int i, n;

    // set time series
    n = 31;
    for (i = 0; i < n; i++)
    {
        t[i] = -0.08 + i * dt;
    }

    // generate Ricker wavelet
    ricker(fm, t, wave, n);

    printf("time_series Ricker_wavelet\n");
    // output time series and wavelet
    for (i = 0; i < n; i++)
    {
        printf("%f %f\n", t[i], wave[i]);
    }

    // if you want to plot the Ricker wavelet, you can use the following code.
    // using gnuplot to plot Ricker wavelet.(http://www.gnuplot.info/)(use the website to download gnuplot.exe)

    // if youdon't want to plot the Ricker wavelet, you can delete the following code.
    char *gnuplotPath = "gnuplot.exe";
    FILE *gp = _popen(gnuplotPath, "w");
    if (gp == NULL)
    {
        cout << ("Cannotopen gnuplot!\n") << endl;
        ;
        return 0;
    }
    fprintf(gp, "set xrange [-0.2:0.2]\n");
    fprintf(gp, "set yrange [-0.6:1]\n");
    fprintf(gp, "set size square\n");
    fprintf(gp, "set samples 3000\n");
    fprintf(gp, "set xlabel 'Time (s)'\n");
    fprintf(gp, "set ylabel 'Amplitude'\n");
    fprintf(gp, "set title 'Ricker Wavelet(25HZ)'\n");
    fprintf(gp, "plot exp(-(pi*15*x)**2)*(1-2*(pi*15*x)**2) with lines lw 3 lc rgb '#AARRGGBB'\n");
    fprintf(gp, "pause mouse\n");
    _pclose(gp);

    return 0;
}
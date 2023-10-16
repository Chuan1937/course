/*
 * @Author: chuanjun
 * @Date: 2023-10-15 21:39:35
 * @email: chuanjun1978@gmail.com
 * @website-github: https://github.com/Chuan1937
 * @LastEditTime: 2023-10-15 21:47:59
 */
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double s = 0.0;
    double x;

    printf("please enter n:");
    scanf("%d", &n);

    printf("please enter x:");
    scanf("%lf", &x);

    for (int i = 0; i <= n; i++) {
        double term = pow(-1, i) * pow(x, 2 * i + 1) / tgamma(2 * i + 2);
        s += term;
    }

    printf("sin(%.2f) = %.4f\n", x, s);

    return 0;
}
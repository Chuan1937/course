/*
 * @Author: chuanjun
 * @Date: 2023-10-15 21:22:49
 * @email: chuanjun1978@gmail.com
 * @website-github: https://github.com/Chuan1937
 * @LastEditTime: 2023-10-15 21:30:32
 */
#include <stdio.h>
int main(){
    int n,x,m=1;
    printf("please enter n:");
    scanf("%d",&n);
    printf("please enter x:");
    scanf("%d",&x);
    for (int i = 1; i <= n; i++)
    {
        m=m*x;
    }
    printf("the answer of x^n is %d\n",m);
    return 0;
}
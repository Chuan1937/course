/*
 * @Author: chuanjun
 * @Date: 2023-10-15 21:31:36
 * @email: chuanjun1978@gmail.com
 * @website-github: https://github.com/Chuan1937
 * @LastEditTime: 2023-10-15 21:38:53
 */
#include <stdio.h>
int main(){
    int n; float s=0.0;
    printf("please enter n:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        s=s+1.0/((i+1)*i/2.0);
    }
    printf("the answer of sum of sequence is %.4f\n",s);
    return 0;
}
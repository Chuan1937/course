/*
 * @Author: chuanjun
 * @Date: 2023-10-13 20:51:12
 * @email: chuanjun1978@gmail.com
 * @website-github: https://github.com/Chuan1937
 * @LastEditTime: 2023-10-15 21:10:56
 */
//写一个判断闰年的程序
#include <stdio.h>
int main()
{
    int year;
    printf("please enter the year:");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("%d is leap year\n", year);
    else
        printf("%d is't leap year\n", year);

    return 0;
}
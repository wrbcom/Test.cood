#include <stdio.h>

void main()
{
    int score;
    printf("输入成绩:");
    scanf("%d", &score);
    if (score < 0 || score > 100)
        printf("非法数字输入！！\n");
    else
    {
        switch (score / 10)
        {
        case 10:
        case 9:
            printf("等级为:A\n");
            break;
        case 8:
            printf("等级为:B\n");
            break;
        case 7:
            printf("等级为:C\n");
            break;
        case 6:
            printf("等级为:D\n");
            break;
        default:
            printf("等级为:E\n");
            break;
        }
    }
}
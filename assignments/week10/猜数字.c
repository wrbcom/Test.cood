#include <stdio.h>

int main()
{
    int answer = 0;
    char choice;

    printf("=== 1~60 猜数字游戏 ===\n");
    printf("请在心里想一个 1~60 的整数。\n\n");

    for (int bit = 0; bit < 6; bit++)
    {
        int weight = 1 << bit;
        int count = 0;

        printf("第 %d 张卡（权值 %d):\n", bit + 1, weight);

        for (int n = 1; n <= 60; n++)
        {
            if (n & weight)
            {
                printf("%2d ", n);
                count++;
                if (count % 6 == 0)
                {
                    printf("\n");
                }
            }
        }

        if (count % 6 != 0)
        {
            printf("\n");
        }

        printf("你的数字在这张卡里吗？(y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y')
        {
            answer += weight;
        }

        printf("\n");
    }

    if (answer >= 1 && answer <= 60)
    {
        printf("你想的数字是：%d\n", answer);
    }
    else
    {
        printf("输入可能有误，请重新运行程序并按 y/n 回答。\n");
    }

    return 0;
}
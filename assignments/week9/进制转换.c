// 解析 float 浮点数的二进制结构，并将符号位、指数位和尾数位分别输出为二进制字符串。

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int nMant : 23;
    unsigned int nExp : 8;
    unsigned int nsign : 1;
} FP_SINGLE;

int main()
{
    char strBin[33] = {0};
    float f = 173.8125;
    FP_SINGLE *p = (FP_SINGLE *)&f;
    itoa(p->nsign, strBin, 2);
    printf("sign:%s\n", strBin);
    itoa(p->nExp, strBin, 2);
    printf("exp:%s\n", strBin);
    itoa(p->nMant, strBin, 2);
    printf("mant:%s\n", strBin);
    return 0;
}
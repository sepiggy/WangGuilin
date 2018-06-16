#include <stdio.h>

#if 0
1. 常量的用途: 赋值与运算
2. 常量的表现形式: 字面量和宏
3. 常量是有类型的: 整形, 浮点型, 字符型, 字符串型
4. 常量和变量在内存中的位置是不一样的
#endif

#define PI 3.1415926

int main() {
    float area = PI * 2.0 * 2.0;
    printf("area = %f\n", area);

    float salary = 1234.56;

    char gender = 'm';

    char name[] = "xiaoming";

    printf("sizeof(0) = %d, sizeof(0.0) = %d\n", sizeof(0l), sizeof(0.0f));

    return 0;
}
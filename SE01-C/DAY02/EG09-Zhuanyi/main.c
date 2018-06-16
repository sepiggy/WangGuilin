#include <stdio.h>

/**
 * 转义字符主要有两类:
 * 1) 字符语义被征用, 回归本意
 * 2) 有新的需求, 通过转义实现新的功能
 */

int main() {
    // 双引号本身就是一个 char 类型字符, 但是他被 C 语言用来表示字符串, 因此这里要使用转义字符
    printf("I like \"football\". \n");

    printf("I like \\football\\. \n");

    printf("%% %d\n", 10);

    printf("%d %d %d %d\n", '\t', '\b', '\n', '\r');

    printf("%% = %d, %% = %d\n", '%', '%');

    printf("\\ = %d, \\ = %d\n", '\\', '\\');

    printf("\" = %d, \" = %d\n", '"', '\"'); // 引号转义与否不改变其 ASCII, 解决了被占用了问题

    putchar('\12');
    printf("%d", '\12');

    return 0;
}
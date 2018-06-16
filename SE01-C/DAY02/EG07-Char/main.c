#include <stdio.h>

/**
 * char 类型的两面性:
 * 1) 使用整数表示 (ASCII) eg. putchar(97);
 * 2) 使用字符表示 eg. putchar('a');
 * @return
 */

int main() {
    // 这里要声明为 unsigned 否则会溢出
    for (unsigned char ch = 0; ch < 128; ch++) {
        // 转换关系, 是在 printf 函数中体现的
        printf("%3d --> %c\n", ch, ch);
    }

    printf("=============\n");

    for (char ch1 = 'a'; ch1 <= 'z'; ch1++) {
        printf("%3d --> %c\n", ch1, ch1);
    }
    return 0;
}
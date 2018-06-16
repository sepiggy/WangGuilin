#include <stdio.h>

/**
 * 1) 'A' - 'a' == ' '
 * 'A' --> 65
 * 'a' --> 97
 * 大小写字母的 ASCII 差一个空格
 *
 * 2) char 就是整数类型, 可以参与整数运算
 *
 * 3) 0 与 '0' 是不一样的
 * 3.1) 前者是数字0, 后者是数字48
 * 3.2) 在 ASCII 的映射规则下 48 代表 '0';
 * 3.3) ASCII 只是在补码的基础上又架设了一套字符编码规则而已, 表示数字与字符的对应关系
 */

int main() {
    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("小写: ch = %d, ch = %c, ", ch, ch);
        // 下面两句是等价的, 因为空格的 ASCII 值就是 32

        printf("大写: ch = %d, ch = %c\n", ch - ' ', ch - ' ');
        // printf("大写: ch = %d, ch = %c\n", ch-32, ch-32);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d, ", i);
    }

    putchar(10);

    for (char i = 48; i < 58; i++) {
        printf("%d->%c, ", i, i);
    }

    putchar(10);

    for (char i = '0'; i <= '0' + 9; i++) {
        printf("%d->%c, ", i, i);
    }
    return 0;
}
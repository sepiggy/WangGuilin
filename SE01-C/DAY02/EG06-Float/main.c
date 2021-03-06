#include <stdio.h>

#if 0
1. 浮点类型由 M, P, S 三部分组成, 均使用补码保存
2. 浮点类型不能在计算机中准确表示, 其能表示的精度是有限的:
    float 的有效数字是 6 到 7 位, 注意不是 "四舍五入"!
    double 的有效数字是 15 到 16 位, 注意不是 "四舍五入"!
3. float 通常占 4 个字节, double 通常占 8 个字节:
    float 的范围是 [2^-128, 2^127] U [-2^127, -2^-128]
    double 的范围是 [2^-2048, 2^2047] U [-2^2047, -2^-2048]
#endif

int main() {
    float var = 0.12345678901234567890123456789;
    double var2 = 0.12345678901234567890123456789;

    printf("%.20f\n", var);
    printf("%.20f\n", var2);
    return 0;
}
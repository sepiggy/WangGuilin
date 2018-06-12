#include <stdio.h>

#if 0
1. 整数类型在计算机中使用补码表示
   一个 8 位的空间, 如果用来表示无符号数, 其范围是 0 到 255 (0 到 2^8-1), 即 unsigned char
   一个 8 位的空间, 如果用来表示有符号数, 其范围是 -128 到 127 (-2^7 到 2^7-1) (这个范围是使用补码编码规则的必然结果), 即 (signed) char
2. 通过 sizeof(类型) 或者 sizeof(变量名) 可以得到在内存中所占的字节数
3. 了解每个类型的范围, 便于定义变量
   1) sizeof = 1, char
        unsigned char, 0 到 255
        signed char, -128 到 127
   2) sizeof = 2, short
        unsigned short, 0 到 65535
        signed short, -32768 到 32767
   3) sizeof = 4, int
        unsigned int, 0 到 2^32-1
        signed int, -2^31 到 2^31-1
4. int 为基本整形, 理想的 32 位机, 其地址总线和数据总线应该是 32 位的
   因此 char, short, long, long long 都可看作是 char int, short int, long int , long long int 的简称
#endif

int main() {
    // 模子的大小
    printf("sizeof(char) = %d\n", sizeof(char));
    printf("sizeof(short) = %d\n", sizeof(short));
    printf("sizeof(int) = %d\n", sizeof(int));
    printf("sizeof(long) = %d\n", sizeof(long));
    printf("sizeof(long long) = %d\n", sizeof(long long));
    printf("sizeof(float) = %d\n", sizeof(float));
    printf("sizeof(double) = %d\n", sizeof(double));
    printf("sizeof(long double) = %d\n", sizeof(long double));

    char a;
    short b;
    int c;
    long d;
    long long dd;
    float e;
    double f;
    long double ff;
    printf("sizeof(a) = %d\n", sizeof(a));
    printf("sizeof(b) = %d\n", sizeof(b));
    printf("sizeof(c) = %d\n", sizeof(c));
    printf("sizeof(d) = %d\n", sizeof(d));
    printf("sizeof(dd) = %d\n", sizeof(dd));
    printf("sizeof(e) = %d\n", sizeof(e));
    printf("sizeof(f) = %d\n", sizeof(f));
    printf("sizeof(ff) = %d\n", sizeof(ff));

    return 0;
}
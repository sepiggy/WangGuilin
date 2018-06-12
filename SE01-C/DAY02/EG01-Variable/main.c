#include <stdio.h>

#if 0

变量
1. 变量的本质就是一段内存空间的别名
2. 变量的取名
1) 组成: 数字0-9; 字母a-z, A-Z; 下划线_
2) 不以数字开头
3) 不能使用保留字作为变量名
4) 区分大小写
5) 驼峰命名法则
6) 取名讲究见名知意

#endif


int main()
{

    int a = 4;
    int b = 5;

    printf("a = %d, b = %d\n", a, b);
    // 法1. 交换a, b的值, 借助中间变量的方法
    /*
    int t;
    t = a;
    a = b;
    b = t;
    */

    // 法2. 交换a, b的值, 不借助中间变量的方法 (有溢出风险)
    /*
    a = a + b; // a = 9, b = 5
    b = a - b; // b = 4
    a = a - b; // a = 5
    */

    // 法3. 交换a, b的值, 最佳实践
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

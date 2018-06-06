#include <stdio.h> // C语言中所有的函数, 要求先声明后使用

int main() // main是入口函数
{
    printf("hello world!!!\n"); // error warning
    return 0;
}

#if 0
// IDE一般引入了一个概念, 叫工程
// 从源文件到可执行文件经历了什么 ?
// Linux: main.c --> a.out
// Windows: main.c --> xxx.exe

// gcc -E main.c -o main.i 预处理
// gcc -S main.i -o main.s 编译
// gcc -c main.s -o main.o 汇编
// gcc main.o -o hello     链接

// 单行注释

/*
多
行
注
释
多行注释, 不支持嵌套 (解决办法: 条件编译)
*/
#endif

// test2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <numeric>   
typedef unsigned char* byte_pointer;
//=============
// Parameters:  字节序列
//=============

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
        //表明整数必须用至少两个数字的十六进制格式输出
    }
    printf("\n");
}
void show_int(int x) {
    show_bytes((byte_pointer)&x, sizeof(int));
}
void show_float(float x) {
    show_bytes((byte_pointer)&x, sizeof(float));
}
void show_pointer(void* x) {
    show_bytes((byte_pointer)&x, sizeof(void*));
}
//=============
// 2.57 changes
//=============
void show_short(short x) {
    show_bytes((byte_pointer)&x, sizeof(short));
}
void show_long(long x) {
    show_bytes((byte_pointer)&x, sizeof(long));
}
void show_double(double x) {
    show_bytes((byte_pointer)&x, sizeof(double));
}
//==================
// 2.57 changes end
//==================
void test_show_bytes(int val) {
    int ival = val;
    float fval = (float)ival;
    int* pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
    //=============
    // 2.57 changes
    //=============
    short sval = (short)ival;
    long lval = (long)ival;
    double dval = (double)ival;
    show_short(sval);
    show_long(lval);
    show_double(dval);
    //==================
    // 2.57 changes end
    //==================
}

int sum(int x, int y) {
    return x + y;
}
void inplace_swap(int* x, int* y) {
    * y = *x ^ *y; /* Step 1 */
    printf("%d", *y);
    *x = *x ^ *y; /* Step 2 */
    printf("%d", *x);
    *y = *x ^ *y  /* Step 3 */;
    printf("%d", *y);
}

int main(int argc, char* argv[]) {
    //int test_num = 12345;
    //test_show_bytes(test_num);
    const char* s = "abcdef";
    const int x = 6;
    const int y = 19;
    //inplace_swap(x, y);
    //show_bytes((byte_pointer) s, strlen(s));
    printf("%d", 0^1);
    printf("%d", 0 ^ 0);
    // 函数体内各个语句的作用还是不太懂。
    
    return 0;
    //int val = 0x87654321;
    //byte_pointer valp = (byte_pointer) & val;
}




// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

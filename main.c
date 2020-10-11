#include <stdio.h>
/**Clion cygwin
 * https://www.jianshu.com/p/2c0c72f4fde7
 * @return
 */

int x;
int y;
int addTwoNum(){
    extern int x;
    extern int y;
    x=1;
    y=2;
    return x+y;
}

int main() {
    printf("Hello, World!\n");
    printf("int 存储大小:%lu \n",sizeof(int ));//%lu 为 32 位无符号整数 详细说明：https://www.runoob.com/cprogramming/c-function-printf.html

    int a;//声明，也是定义，建立了存储空间
    extern int b;//声明 不是定义，没有建立存储空间 其中b可以是在别的文件定义

    int result;
    result = addTwoNum();
    printf("result = %d \n",result);

    return 0;
}



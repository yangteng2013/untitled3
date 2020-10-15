#include <stdio.h>
#include <string.h>

/**Clion cygwin
 * https://www.jianshu.com/p/2c0c72f4fde7
 * https://www.dotcpp.com/course/c/
 * @return
 */

int x;
int y;

int addTwoNum() {
    extern int x;
    extern int y;
    x = 1;
    y = 2;
    return x + y;
}

enum DAY {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
};
const int MAX = 3;

struct INFO {
    int a;
    char b;
    double c;
};
struct _INFO {
    int num;
    char str[256];

};
union UNION_INFO {
    int a;
    int b;
    int c;
};

typedef struct _INFO_STRUCT {
    int num;
    char str[256];
} INFO_STRUCT;

int main() {
    int inputNo;
    char a = 'a';
    printf("%d", a);
    printf("请输入天数：");
    scanf("%d", &inputNo);
    int sum = 0;
    int i = 0;

    for (int i = 0; i < inputNo; ++i) {
//        printf("%c\t",a+i);
        if (i == inputNo - 1) {
            sum += 1;
        } else {

        }


    }



//    struct _INFO_STRUCT A;
//    INFO_STRUCT B;
//    A.num=2020;
//    strcpy(A.str,"Welcome to dotcpp.com");
//    B=A;
//    printf("This year is %d %s\n",A.num,A.str);
//    printf("This year is %d %s\n",B.num,B.str);

//    union UNION_INFO B;
//    B.a=1;
//    B.b=2;
//    B.c=3;
//    printf("a:%d\n",B.a);
//    printf("b:%d\n",B.b);
//    printf("c:%d\n",B.c);

//    struct _INFO A;
//    A.num=2020;
//    strcpy(A.str,"Welcome to dotcpp.com");
//    printf("This year is %d %s\n",A.num,A.str);

//    int i;
//    int a[10]={1,2,3,4,5,6,7,8,9,0};
//    int *p=a;
//    for(i=0;i<10;i++)
//    {
//        printf("%d\t x0%x",a[i],&a[i]);
//
////        printf("\n");
////        printf("P Value:%d   a Value :x0%x\n",*(p++),(a+i));
//    }
//    printf("\n");

//    char *str = "www.dotcpp.com" ;
//    char string[]="Welcome to dotcpp.com";
//    str[0]='C'; //试图修改str指向的常量区的字符串内容

//    printf("Hello, World!\n");
//    printf("int 存储大小:%lu \n",sizeof(int ));//%lu 为 32 位无符号整数 详细说明：https://www.runoob.com/cprogramming/c-function-printf.html
//
//    int a;//声明，也是定义，建立了存储空间
//    extern int b;//声明 不是定义，没有建立存储空间 其中b可以是在别的文件定义
//
//    int result;
//    result = addTwoNum();
//    printf("result = %d \n",result);
//
//    printf("*******************************\n");
//    printf("Hello World!\n");
//    printf("*******************************\n");
//
//
////    int m;
////    int n;
////    while (~scanf("请输入2个数：%d%d",&m,&n))
////        printf("%d\n",m+n);
//
//    printf("%o\n",150);
//    printf("%x\n",150);
//
//    enum DAY day;
//    day=WED;
//    printf("%d\n",day);
//
//    int var1;
//    int var2[9];
//    printf("var1的变量的地址：%p\n",&var1);
//    printf("var2的变量的地址：%p\n",&var2);
//
//
//    int var3 = 30;
//    int *ip;
//
//    ip = &var3;
//
//    printf("Address of var variable:%p\n",&var3);
//    printf("Address stored in ip variable:%p\n",ip);
//    printf("Value of *ip variable:%d\n",*ip);
//
//    int *ptr = NULL;
//    printf("ptr 的地址是：%p\n",ptr);
//
//    if (!ptr){
//        printf("ptr haha");
//    }
//
//
//    int var4[] = {10,100,200};
//    int i,*ptr2;
//
//    ptr2 = var4;
//
//    for (int i = 0; i < MAX; ++i) {
//        printf("存储地址：var[%d] = %x\n",i,ptr2);
//        printf("存储地址：var[%d] = %d\n",i,*ptr2);
//
//        ptr2++;
//    }
//
//    int num=2014;
//    int *p=&num;
//    printf("num Address = 0x%x,num=%d\n",&num,num);
//    printf("p = 0x%x,*p=%d\n",p,*p);
//    printf("%d\n",*&num);
//
//    int *p0;
//    char *p1;
//    float *p2;
//    double *p3;
//    struct INFO *p4;
//    void *p5;
//    int abm=0;
//
//    printf("int point size is :%d\n",sizeof(abm));
//    printf("int point size is :%d\n",sizeof(p0));
//    printf("char point size is :%d\n",sizeof(p1));
//    printf("float point size is :%d\n",sizeof(p2));
//    printf("double point size is :%d\n",sizeof(p3));
//    printf("struct point size is :%d\n",sizeof(p4));




    return 0;
}



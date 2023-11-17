#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    int a,b;
    scanf("%d %d",&a,&b); //这才是从标准输入中获取数据
    printf("The sum is %d.\n",a+b);
    exit(0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // int i, n;
    // int *a;
    // printf("要输入元素的个数：");
    // scanf("%d", &n);
    // // 因为calloc返回的是指针,所以要用指针去接，因为a是整型的还要强制转换成整型指针,
    // // 分配 n*sizeof(int) 的内存大小
    // a = (int *)calloc(n, sizeof(int));
    // printf("输入%d个数字", n);
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]); // 格式化输入后面的形参需要 指针变量a的地址
    // }
    // printf("输入的数字为：");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d", a[i]);
    // }
    // free(a); // 释放内存

    // char *str;
    // str = (char *)malloc(15 * sizeof(char));
    // strcpy(str, "Never");
    // printf("String = %s,  Address = %p\n", str, str);
    // str = (char *)realloc(str, 25 * sizeof(char));
    // strcat(str, ".Ling1");
    // printf("String = %s,  Address = %p\n", str, str);
    // printf("Address = %lu \n", strlen(str));
    // free(str);

    // const char src[20] = "Never.Ling";
    // char dest[20];
    // memcpy(dest, src, strlen(src));
    // printf("dest = %s\n", dest);

    // char *s = "Never.Ling"; 
    // char d[20];
    // memcpy(d, s + 6, 4); 
    // d[4] = '\0';
    // printf("%s", d);

    // const char dest[] = "oldstring";
    // const char src[] = "newstring";
    // printf("dest = %s, src = %s\n", dest, src); // dest = oldstring, src = newstring
    // memmove(dest, src, 9);
    // printf("dest = %s, src = %s\n", dest, src); // dest = newstring, src = newstring

    // char str[20];
    // strcpy(str, "Never.Ling");
    // puts(str); 
    // memset(str, '$', 3);
    // puts(str); 

    char name[100];
    char *description;
    strcpy(name, "Zara Ali");
    description = (char *)malloc(200 * sizeof(char));
    strcpy(description, "Zara ali a DPS student in class 10th");
    printf("Name = %s\n", name); 
    printf("Description: %s\n", description);

    return 0;
}
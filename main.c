#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_NUM 6
#define func_1()        printf("hello\n");
#define func_2(str)     printf("hello %s\n", str);
#define multiply(a, b)  ((a) * (b))
#define show(n)         printf("result_"#n":%d\n", n);
#define bye(str)        printf("Bye, %s\n", #str);
#define show2(n)        printf("result_"#n": %d\n", result_##n);
int main(void)
{
    unsigned char max;
    unsigned char* i;
    max = 'a';
    i = &max;


    double arr[] =  {1, 2};
    double* p = arr;

    printf("%p\n", p);
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);

    char arr1[] =  {'a', 'b'};
    char* p2 = arr1;

    printf("%c\n", arr1[0]);
    printf("%c\n", *p2);

    char arr2[] = {'a', 'b'};
    char* p3 = "abc";
    char arr3[] = "abc";
    printf("%s\n", arr2);
    printf("%s\n", p3);
    printf("%s\n", arr3);

    printf("%p\n", p);
    printf("%p\n", p2);
    printf("%p\n", p3);

    printf("%lu\n", sizeof(p));
    printf("%lu\n", sizeof(p2));
    printf("%lu\n", strlen(p3));

    printf("%d\n", __LINE__);
    printf("%s\n", __FILE__);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    printf("%d\n", __STDC__);

    printf("%d\n", MAX_NUM);

    func_1();
    func_2("world");

    int x = 2, y = 3;
    printf("multiply: %d\n", multiply(x, y));
    printf("multiply: %d\n", multiply(x + 1, y));

    show(1);
    show(3);
    bye(Bob);
    bye(Cara);

    int result_a = 3, result_b = 5;
    show2(a);
    show2(b);

    long long age = 11;
    long int age2 = 12;
    long int age3 = age;
    unsigned short age4 = 13;
    int age5 = 13;
    float age6 = 13;
    double age7 = 13;
    unsigned char age8 = 'a';
    long double age9 = 1;
    printf("%llu\n", age);
    printf("%li\n", age2);
    printf("%li\n", age3);
    printf("%lu\n", sizeof(age));
    printf("%lu\n", sizeof(age3));
    printf("%lu\n", sizeof(age4));
    printf("%lu\n", sizeof(age5));
    printf("%lu\n", sizeof(age6));
    printf("%lu\n", sizeof(age7));
    printf("%lu\n", sizeof(age8));
    printf("%lu\n", sizeof(age9));

    time_t t = time(NULL);
    printf("%lu\n", t);


    typedef struct Animal {
        int age;
    } Animal;

    Animal a = {.age = 111};


    struct Animal2 {
        int age;
    };

    typedef struct Animal2 Animal3;
    struct Animal2 a2 = {.age = 123};
    Animal3 a3 = {.age = 312};
    
    typedef struct  tagNode{
        char *pitem;
        struct tagNode *pNext;
    } *pNode;

    typedef struct tagNode2 *pNode2;
    struct tagNode2 {
        char *pitem;
        pNode2 pNext;
    };
    
    union Data {
        int i;
        float f;
        char str[20];
    };

    union Data data;
    printf("Memory size occupied by aata : %lu\n", sizeof(data));
   return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv)
{
    int a,b;
    a=argv[1][0]-'0';
    b=argv[2][0]-'0';
    printf("The sum is %d\n.",a+b);
    exit(0);
}

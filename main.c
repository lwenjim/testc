#include <stdio.h>
// int say(int a[]){
//     int length;
//     length=sizeof(a)/sizeof(a[0]); //这样是错误的，得到的结果永远是1
//     return length;
// }

int main(void){
    int arr[] = {1, 2};
    int* p = arr;
    for (size_t i = 0; i < 2; i++){
        printf("%d\n", arr[i]);
    }

    for (size_t i = 0; i < 2; i++){
        printf("%d\n", *(arr+i));
    }

    for (size_t i = 0; i < 2; i++){
        printf("%d\n", *(p+i));
    }
    printf("%lu\n", sizeof(arr)/sizeof(arr[0]));
    // printf("%lu\n", say(arr));
}
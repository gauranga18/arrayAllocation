#include <stdio.h>
#include<stdlib.h>
int main(){
    int arr[]={10,20,30,40,50};
    int *ptr = arr;
    ptr = (int *)malloc(20);
    for (int i = 0;i<5;i++){
        printf("Address -> %p\n", (void*)&arr[i]);
        printf("Value -> %d\n", arr[i]);
    }
    return 0;
}
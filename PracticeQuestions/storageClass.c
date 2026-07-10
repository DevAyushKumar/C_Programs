#include<stdio.h>

void fun(){
    auto int b = 0;
    b++;
    printf("count is %d \n", b);
}

int main(){
    fun();
    fun();
    fun();
    return 0;
}

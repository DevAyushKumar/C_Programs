#include<stdio.h>

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if(a>=1){
        printf("%d is a natural number", a);
    } else {
        printf("%d is not a natural number", a);
    }
    return 0;
}
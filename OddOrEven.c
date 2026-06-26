#include<stdio.h>

void Check(int a);

int main(){
    int a;

    printf("Enter the number to be checked: ");
    scanf("%d", &a);

    Check(a);
    return 0;
}

void Check(int a){
    if(a%2 == 0){
        printf("Even number");
    } else if(a%2 != 0){
        printf("Odd number");
    } else {
        printf("Enter a valid number");
    }
}
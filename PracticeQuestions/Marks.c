#include<stdio.h>

int main(){
    int a;

    printf("Enter the marks of the student: ");
    scanf("%d", &a);

    if(a > 30){
        printf("pass");
    } else if( a <= 30){
        printf("Fail");
    } else{
        printf("enter a valid number");
    }
    return 0;
}
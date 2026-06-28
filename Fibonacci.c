#include<stdio.h>

int fib(int n);

int main(){
    int n;
    printf("Enter the N number: ");
    scanf("%d", &n);

    int ans = fib(n);

    printf("The fibonacci of %d numbers is: %d", n, ans);
    return 0;
}

int fib(int n){
    int ans = 0;
    if(n == 0){
        return ans;
    } else if(n == 1){
        return ans + 1;
    } else {
    ans = fib(n-1) + fib(n-2);
    return ans;
    }
}
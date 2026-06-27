#include<stdio.h>

int check(int n);

int main(){
    int n;
    printf("Enter the N number: ");
    scanf("%d", &n);

    int ans = check(n);
    printf("The sum of first %d numbers is: %d", n, ans);

    return 0;
}

int check(int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += i;
    }
    return ans;
}
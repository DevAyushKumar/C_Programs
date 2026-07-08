#include<stdio.h>

void checkarm(int a, int len);

int main(){
    int a, len;

    printf("Enter the length of the number: ");
    scanf("%d", &len);

    printf("Enter the number: ");
    scanf("%d", &a);

    checkarm(a, len);
    return 0;
}

void checkarm(int a, int len){
    int ans = 0, original = a;
    for(int i=0; i<len; i++){
        int rem = a%10;
        int dub = 1;
        for(int j=0; j<len; j++){
            dub *= rem;
        }
        ans += dub;
        a /= 10;
    }
    if(ans == original){
        printf("The number is an armstrong number ");
    } else {
        printf("The number is not an armstrong number ");
    }
}
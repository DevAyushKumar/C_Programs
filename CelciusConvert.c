#include<stdio.h>

float Conv(float a);

int main(){
    float a;

    printf("Enter the degree in celcius: ");
    scanf("%f", &a);

    float ans = Conv(a);
    printf("The degree in farenhite is: %f", ans);

    return 0;
}

float Conv(float a){
    float ans = 1;
    ans = (a * 9/5) + 32;
    return ans;
}
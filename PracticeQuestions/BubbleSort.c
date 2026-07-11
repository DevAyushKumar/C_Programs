#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n,j,temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    for(int i=0; i<n; i++){
        printf("Enter the values in array: ");
        scanf("%d", &array[i]);
    }
    for(int i=n; i>0; i--){
        for(int j=0; j<i-0; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("The sorted result is: \n");
    for(int i=0; i<n; ++i){
        printf("%d \t", array[i]);
    }
    return 0;
}
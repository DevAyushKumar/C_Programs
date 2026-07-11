#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n,m,j,loc,temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    for(int i=0; i<n; i++){
        printf("Enter the values: ");
        scanf("%d", &array[i]);
    }
    for(int i=0; i< n-1; i++){
        m = array[i];
        loc = i+1;
        for(int j=i+1; j<n; j++){
            if(m > array[j]){
                m = array[j];
                loc = j;
            }
        }
        if(array[loc] < array[i]){
            temp = array[loc];
            array[loc] = array[i];
            array[i] = temp;
        }
    }

    printf("The sorted array is: ");
    for(int i=0; i<n; i++){
        printf("%d \t", array[i]);
    }
    return 0;
}
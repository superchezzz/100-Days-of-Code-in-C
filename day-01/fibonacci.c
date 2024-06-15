//Write a Program to print the Fibonacci series 
#include<stdio.h>

int main(){
    int num, fibonacci[100];
    fibonacci[0]=0;
    fibonacci[1]=1;

    printf("\nEnter the number of terms from 1 to 100: ");
    scanf("%d", &num);

    if (num<0){
        printf("Please enter a positive integer.\n");
        return 1;
    } else if(num>100){
        printf("Please enter a number less than or equal to 100.\n");
        return 1;
    }

    for(int i=2; i<num; i++){
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }
    printf("\nFIBONACCI SERIES:\n");
    for(int j=0; j<num; j++){
        printf("%d ", fibonacci[j]);
    }
}

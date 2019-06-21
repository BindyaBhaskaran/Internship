#include<stdio.h>

//Finding factorial of a number
float factorial(int num){
    if(num == 1)
        return num;
    else
        return num*factorial(num-1);
}

int main(){
    int terms,i;
    float facto,sum=0.0;
    printf("Series: 1/1! + 2/2! + 3/3! + ... + N/N!\nEnter the number of terms to find sum: ");
    scanf("%d",&terms);

    //Finding the sum of the series
    for(i=1;i<=terms;i++){
        facto=factorial(i);
        sum+=i/facto;
    }
    printf("Sum = %f\n",sum);
}
#include<stdio.h>

int main(){
    int num,temp,rev=0;

    //Inputting a number
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;

    //Reversing the number
    while(temp!=0){ 
        rev=rev*10;
        rev=rev+temp%10;
        temp=temp/10;
    }

    //Comparing the reversed and the original number
    if(rev==num)
        printf("\nThe number is a Palindrome.\n");
    else
        printf("\nThe number is not a Palindrome.\n");
}
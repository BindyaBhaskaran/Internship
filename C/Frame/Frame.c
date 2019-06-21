#include<stdio.h>
#include<string.h>

void frame(char list[100][100], int length){
    int i,j,max=0,l,b[100];
    for(j=0;j<length;j++){
        l=strlen(list[j]);                    //Finding the length of each string and storing in an array
        b[j]=l;
        if(max<l)                             //Finding the length of the longest string in the list
            max=l;
    }
   
    //Printing in rectangle form
    for(j=0;j<max+4;j++)
        printf("*");
    printf("\n");

    for(i=0;i<length;i++){                   
        printf("*");
        printf(" %s ",list[i]);
        if(b[i]<max){
            for(j=0;j<(max-b[i]);j++)
                printf(" ");
        }
        printf("*");
        printf("\n");
    }
    

    for(j=0;j<max+4;j++)
        printf("*");
    printf("\n");
}

int main(){
    int len,i;
    char a[100][100];
    printf("Enter the length of the list: ");
    scanf("%d",&len);
    printf("\nEnter the strings:\n");
    for(i=0;i<len;i++){
        printf("%d: ",i+1);
        scanf("%s",a[i]);
    }
    frame(a,len);
}
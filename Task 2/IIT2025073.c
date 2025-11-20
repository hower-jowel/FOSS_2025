#include<stdio.h>

int main(){
    char ch[100];
    printf("Enter your message:- \n");
    fgets(ch, 100, stdin);
    int i = 0;
    while(ch[i]!='\0'){
        i++;
    }
    
    for (int j = 0; j < i+3; j++)
    {
        printf("*");
    }
    printf("\n");
    printf("* ");
    for (int j = 0; j < i-1; j++)
    {
        printf("%c", ch[j]);
    }
    printf(" *\n");
    for (int j = 0; j < i+3; j++)
    {
        printf("*");
    }
    return 0;
}
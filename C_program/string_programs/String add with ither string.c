#include<stdio.h>
int main()
{
    char c1[20],c2[20];
    int i,j=0,l1=0,l2=0;

    printf("Type first string...");
    gets(c1);
    printf("Type second string..");
    gets(c2);

    while(c1[l1]!='\0')
    {
        l1++;
    }


    while(c2[l2]!='\0')
    {
        l2++;
    }

    for(i=0; i<=l2; i++)
    {
        c1[l1+i]=c2[i];
    }

    while(c1[j]!='\0')
    {
        printf("%c",c1[j]);
        j++;
    }

    getch();
}

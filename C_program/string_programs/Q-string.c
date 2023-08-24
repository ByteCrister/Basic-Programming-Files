#include<stdio.h>
int main()
{
    int i=0;
    char ar[50],c;
    printf("Enter a string :");
    gets(ar);

    printf("\nMaximum occurring character :");
    scanf("%c",&c);

    while(ar[i]!='\o')
    {
        if(ar[i]==c)
        {
            break;
        }
        i++;
    }

    printf("\noccurrence : %d",i+1);

    getch();
}

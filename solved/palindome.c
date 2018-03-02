#include<stdio.h>
#include<string.h>
int main()
{
    int test,i,length = 0,j = 0;
    char str0[1000];
    char str1[1000];




    for(i=0; str0[i]!='\0'; i++)
    {
        scanf("%c",&str0[i]);
    }
    str0[i] = '\0';
    length = i;
    for(i=length-1; i>=0; i++)
    {
        str1[j] = str0[i];
        j++;
    }

    printf("%s",str1);

}

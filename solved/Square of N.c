#include<stdio.h>
int main()
{
    char number[1000];
    while(scanf("%s", &number) != EOF) {
        int length = 0, i;
        length = strlen(number);
        for(i = 0; i<length-1; i++) {
            printf("9");
        }
        printf("8");
        for(i = 0; i<length-1; i++) {
            printf("0");
        }
        printf("1\n");

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int test,leftChicken;
    scanf("%d",&test);
    while(test--){
    scanf("%d",&leftChicken);
    if(leftChicken >= 120){
        printf("Good Boy Sifat\n");
    }
    else{
        printf("Naughty Boy Sifat\n");
    }
}
    return 0;
}

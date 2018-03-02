#include<stdio.h>
int main(){
    int n ,test = 0;
    long long int number = 0,sum = 0;
    scanf("%d",&test);
    while(test--){
    scanf("%lld",&number);
    sum = (number * (number+1))/2;
    printf("%lld\n",sum);
    }
    return 0;
}

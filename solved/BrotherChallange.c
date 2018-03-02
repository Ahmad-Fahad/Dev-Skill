#include<stdio.h>
int main()
{
    long long int n,i,s = 0;
    scanf("%lld",&n);
    for(i=1; i<n ;i++){
        if(i%3 == 0 || i%5 == 0){
            s = s + i;
        }
    }
    printf("%lld\n",s);
    return 0;
}

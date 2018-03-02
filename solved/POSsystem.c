#include<stdio.h>
int main()
{
    int test,q,item = 0,i,c = 0;
    long long int money = 0,back = 0;
    double p = 0,sum = 0;
    scanf("%d",&test);
    while(test--){
    c++;
    scanf("%d",&item);
    for(i=0; i<item; i++){
        scanf("%lf %d",&p,&q);
        p   = p * q;
        sum = sum + p;
    }
    scanf("%lld",&money);
    back = (int)((double)money - sum);
    printf("Case %d: %lld\n",c,back);
    back = 0;
    sum = 0;
}
    return 0;
}

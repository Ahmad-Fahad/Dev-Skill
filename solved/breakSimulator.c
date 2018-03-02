#include<stdio.h>
int main(){
    int test;
    double velocity = 0,time = 0,deceleration = 0;
    scanf("%d",&test);
    while(test--){
    scanf("%lf %lf",&velocity,&time);
    deceleration = velocity/time;
    printf("-%.2lf\n",deceleration);
    }
    return 0;
}

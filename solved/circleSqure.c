#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double r,s,a,d,i;
    scanf("%d",&t);

    while(t--){
    scanf("%lf %lf",&r,&s);
    a = sqrt(2) * s ;
    a = round(a);
    d = round(2*r);
    if( a == d ){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

  }

return 0;
}

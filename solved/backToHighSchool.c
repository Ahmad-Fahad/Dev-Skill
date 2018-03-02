#include<stdio.h>
#include<math.h>
int main()
{
    int test = 0,c = 0,distance = 0,radius = 0;
    double cx,cy,r,px,py,d,diff,t;
    scanf("%d",&test);
    while(test--){
    c++;
    scanf("%lf %lf %lf %lf %lf",&cx,&cy,&r,&px,&py);
    t = (px - cx)*(px - cx) + (py - cy)*(py - cy);
    d = sqrt(t);
    diff = d - r;
    distance = (d * 100);
    radius   = (r * 100);
    if( d < r ){
        printf("Case %d: Inside\n",c);
    }
    else if(d > r){
        printf("Case %d: Outside\n",c);
    }
    else if( distance == radius ){
         printf("Case %d: OnCircle\n",c);
    }

}
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int t = 0;
    double ab,bc,cd,ad,diagonal,temp;
    scanf("%d",&t);
    while(t--){
    scanf("%lf %lf %lf",&ab,&bc,&cd);
    temp = ab*ab + bc*bc;
    diagonal = sqrt(temp + cd*cd);
    printf("%.2lf\n",diagonal);
    }
    return 0;
}

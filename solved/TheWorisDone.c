#include<stdio.h>
/*#include<bits/stdc++.h>
using namespace std;*/
#include<math.h>

int main()
{
    double totalHour,employeeNum,workingHour,sum = 0,p=0;
    double day = 0;
    int i;

    while(scanf("%lf %lf",&totalHour,&employeeNum) != EOF)
    {
        sum=0;
        for(i=0; i<employeeNum; i++)
        {
            scanf("%lf",&workingHour);
            sum+=workingHour;
        //    printf("%d\n",sum);
        }
       // printf("%d %d %d",p,sum,totalHour);
        p=ceil(totalHour/sum);
        //printf("%d\n",p);
        if(p==0)p++;
        printf("Project will finish within %.0lf",p);
        if(p==1)printf(" day.\n");
        else printf(" days.\n");

    }
        return 0;
}

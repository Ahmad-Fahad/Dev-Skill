#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int testCase = 0, cases = 0;
    scanf("%lld", &testCase);
    while(testCase--) {
        long long int n = 0, partialSum = 0, factorial = 1, sum = 0;
        scanf("%lld", &n);
        if(n>3) {
            printf("Case %lld-> NO;\n", ++cases);
        }
        else {
             for(long long int i=n; i>0; i--) {
                partialSum = partialSum + i;
                factorial  = factorial * i;
            }
            if(partialSum != factorial) {
                printf("Case %lld-> NO;\n", ++cases);
            }
            else {
                printf("Case %lld-> YES;\n", ++cases);
            }
        }


    }
    return 0;
}

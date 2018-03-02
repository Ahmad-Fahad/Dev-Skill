#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase = 0;
    scanf("%d", &testCase);
    while(testCase--) {
        long long int number = 0, remainder = 0, mPrime = 0, temp = 0;
        scanf("%lld", &number);
        for(int i=2; i<=number; i++) {
            temp = i;
            while(temp != 0) {
                remainder = temp % 10;
                if(remainder == 2 || remainder == 3 || remainder == 5 || remainder == 7) {
                    mPrime++;
                    break;
                }
                temp = temp / 10;
            }
        }
        printf("%lld\n", mPrime);
    }
    return 0;
}

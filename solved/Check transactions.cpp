#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int testCase = 0;
    scanf("%lld", &testCase);
    while(testCase--) {
        string transactionType;
        long long int initialBalance = 0, finalBalance = 0, currentBalance = 0, noOfTransaction = 0, transactionAmount = 0;
        int flag = 0;
        scanf("%lld %lld %lld", &initialBalance, &finalBalance, &noOfTransaction);
        currentBalance = initialBalance;
        while(noOfTransaction--) {
            cin>>transactionType>>transactionAmount;
            getchar();
            if(transactionType == "in") {
                currentBalance = currentBalance + transactionAmount;
            }
            else if(transactionType == "out") {
                currentBalance = currentBalance - transactionAmount;
                if(currentBalance < 0) {
                    flag = 1;
                }
            }
        }
        if(currentBalance == finalBalance && flag != 1) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}

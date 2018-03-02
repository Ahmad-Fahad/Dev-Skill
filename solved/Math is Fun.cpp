#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase = 0,counter = 0;

    scanf("%d",&testCase);

    while(testCase--)
    {
        counter++;

        int sum = 0,alphabetValue = 0;

        string str;

        cin>>str;

        int length = str.length();

        for(int i=0; i<length; i++)
        {
            if(str[i]>=48 && str[i]<=57)
            {
                int temp = str[i] - '0';

                sum = sum + temp;
            }
        }
        if(sum%3 == 0)
        {
            alphabetValue = 3;
        }
        else
        {
            for(int i=1; i<=3; i++)
            {
                if((sum+i)%3 == 0)
                {
                    alphabetValue = i;
                    break;
                }
            }
        }
        printf("Case %d: %d\n",counter,alphabetValue);
    }
    return 0;
}

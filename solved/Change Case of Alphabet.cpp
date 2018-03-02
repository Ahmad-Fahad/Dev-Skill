#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase = 0;

    scanf("%d",&testCase);

    while(testCase--)
    {
        string s;

        cin>>s;

        int length = s.length();

        for(int i=0; i<length; i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                printf("%c",s[i] + ' ');
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                printf("%c",s[i] - ' ');
            }
        }

        printf("\n");
    }



    return 0;
}

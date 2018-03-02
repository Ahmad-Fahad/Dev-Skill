#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,flag;
    string stin;
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        flag = 0;
        cin>>stin;
        int l = stin.length();
        int lt = l - 1;
        for(i=0; i<l/2; i++)
        {
            if((stin[i] != stin[lt-i]) && (stin[i] != stin[lt-i]+32) && (stin[i] != stin[lt-i]-32))
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }


    return 0;
}

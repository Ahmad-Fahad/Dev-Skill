#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t = 0,j;
    char ch;
    string str;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        getline(cin,str);
        int l = str.length();
        for(i=l-1; i>=0; i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}

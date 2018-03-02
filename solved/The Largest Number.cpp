#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int testCase = 0,counter = 0;

    scanf("%lld",&testCase);

    while(testCase--)
    {
        counter++;

        long long int n = 0,p = 0,r = 0;

        vector< int > nArray;

        scanf("%lld %lld",&n,&p);

        while(n != 0)
        {
            r = n % 10;

            nArray.push_back( r );

            n = n / 10;
        }

       int length = nArray.size();

       for(int i=length-1; i>=0 ; i--)
       {

           if(nArray[i] != 9)
           {
               if(p > 0)
               {
                    nArray.at(i) = 9;

                    p--;

               }
           }
       }

       printf("Case %lld: ",counter);

       for(int i=length-1; i>=0; i--)
       {
           printf("%d",nArray[i]);
       }
       printf("\n");
    }
    return 0;
}


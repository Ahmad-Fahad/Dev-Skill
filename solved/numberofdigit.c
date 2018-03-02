#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
    int t,n,r,c=0;
    scanf("%d",&t);
    while(t--){
            c = 0;
        scanf("%d",&n);
    if(n==0) printf("%d\n",1);
    else {
        while(n != 0){
            n = n/10;

            c++;
        }
        printf("%d\n",c);}

    }
    return 0;
}

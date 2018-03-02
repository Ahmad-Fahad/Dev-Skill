#include<stdio.h>
int main(){
    int i,n,t = 0,c = 0;
    scanf("%d",&t);
    while(t--){
    int flag = 0;
    scanf("%d",&n);
    for(i=2; i<=n/2; i++){
        if(i*i == n){
            flag = 1;
            break;
        }
    }
    c++;
    if(flag == 1){
        printf("Case %d: YES\n",c);
    }
    else{
        printf("Case %d: NO\n",c);
    }
  }
  return 0;
}



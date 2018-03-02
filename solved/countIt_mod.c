#include<stdio.h>
#include<string.h>
int main(){
     int i,j,c,k,flag,test = 0,tcase = 0;
     char str[1000];
     char t,n;
    scanf("%d",&test);

    while(test--){
    scanf("%s",&str);
    printf("Case %d:\n",++tcase);
    int l = strlen(str);
    for(i=0; i<l; i++){
        for(j=0; j<l-1; j++){
            if(str[j+1]<str[j]){
                t        =  str[j];
                str[j]   =  str[j+1];
                str[j+1] =  t;
            }
        }
    }
    for(i=0; i<l; i++){
        n = str[i];
        c = 0;
        flag = 0;
        for(k=0; k<i; k++){
            if(str[k] == str[i]){
                flag = 1;
            }
        }
        if(flag != 1){
        for(j=i; j<l; j++){
            if(n == str[j]){
                c++;

            }
        }
          printf("%c %d\n",n,c);
    }
   }
  }

    return 0;
}



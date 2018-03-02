#include<stdio.h>
#include<string.h>
int main(){
    int i,t = 0;
    char str[1000];
    scanf("%d",&t);
    getchar();
    while(t--){
    gets(str);
    int l = strlen(str);
    for(i=l-1; i>=0; i--){
        printf("%c",str[i]);
    }
    printf("\n");
  }
}
